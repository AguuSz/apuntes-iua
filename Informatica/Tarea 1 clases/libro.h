#include <iostream>
#include <string>
using namespace std;

class libro {
private: 
	string nombre;
	string ISBN;
	string autor;
	float calificacion;
	string color;
	
public:
	libro();
	
	void setNombre(string nom);
	string getNombre();
	
	void setISBN(string ISBN);
	string getISBN();
	
	void setAutor(string aut);
	string getAutor();
	
	void setCalificacion(float cal);
	float getCalificacion();
	
	void setColor(string Color);
	string getColor();
};

libro::libro(){
}

void libro::setNombre(string nom){
	nombre = nom;
}
string libro::getNombre(){
	return nombre;
}

void libro::setISBN(string ISBN){
	this->ISBN = ISBN;
}
string libro::getISBN(){
	return ISBN;
}

void libro::setAutor(string aut){
	autor = aut;
}
string libro::getAutor(){
	return autor;
}

void libro::setCalificacion(float cal){
	calificacion = cal;
}
float libro::getCalificacion(){
	return calificacion;
}

void libro::setColor(string col){
	color = col;
}
string libro::getColor(){
	return color;
}
