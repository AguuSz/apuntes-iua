#include <iostream>
#include <string>
#include "libro.h"
using namespace std;

void cargar_datos(libro vector[5]);
void mostrar_libros(libro vector[5]);

int main(int argc, char *argv[]) {
	
	libro vector[5];	
	
	cargar_datos(vector);
	
	mostrar_libros(vector);
	
	return 0;
}

void cargar_datos(libro vector[5]){
	
	string nombre, ISBN, autor, color;
	float calificacion = 0;
	
	for (int i = 0; i < 5; i++){
		
		cout<<"\n\nNombre del libro: ";
		cin >>nombre;
		vector[i].setNombre(nombre);
		
		cout<<"\nISBN de "<<vector[i].getNombre()<<": ";
		cin >>ISBN;
		vector[i].setISBN(ISBN);
		
		cout<<"\nQuien escribió "<<vector[i].getNombre()<<"?: ";
		cin >>autor;
		vector[i].setAutor(autor);
		
		cout<<"\nCalificación de "<<vector[i].getNombre()<<" (en estrellas): ";
		cin >>calificacion;
		vector[i].setCalificacion(calificacion);
		
		cout<<"\nDe que color es la tapa de "<<vector[i].getNombre()<<"?: ";
		cin >>color;
		vector[i].setColor(color);
	}
}
	
void mostrar_libros(libro vector[5]){
	cout<<"Nom.\tISBN\tAutor\tCal.\tColor\n";
	for(int i = 0; i < 5; i++){
		cout<<vector[i].getNombre()<<"\t"
			<<vector[i].getISBN()<<"\t"
			<<vector[i].getAutor()<<"\t"
			<<vector[i].getCalificacion()<<"\t"
			<<vector[i].getColor()<<"\n";
	}
}

