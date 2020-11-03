//	3. Elaborar un sistema de stock, en la cual posee una lista de productos con
//	los siguientes atributos: codigo, nombre, cantidad, precio lista.
//	Desarrollar las siguientes funciones:
//	
//	a. Mostrar el stock. (lista de productos)
//	
//	b. Descontar stock.
//	
//	c. Reponer stock.
//	
//	(hacer con estructura - clases y objetos)
#include <iostream>
#include <string>
#include "Node.h"
#include "Linkedlist.h"
#include "Linkedlist.cpp"
using namespace std;

typedef struct{
	int codigo;
	string nombre;
	int cantidad;
	float precio;
}stock;

stock CargarLista (LinkedList<stock> lista, int codigo, string nombre, int cantidad, float precio){
	stock aux;
	aux.codigo = codigo;
	aux.nombre = nombre;
	aux.cantidad = cantidad;
	aux.precio = precio;
	return aux;	
}
	
void MostrarLista (LinkedList<stock> lista){
	
	cout<<"\nCod.\tName\tCant.\tPrecio\n";
	for(unsigned int i = 0; i < lista.size(); i++) {
		cout<<lista.get(i).codigo<<"\t"
			<<lista.get(i).nombre<<"\t"
			<<lista.get(i).cantidad<<"\t$"
			<<lista.get(i).precio<<"\n";
	}
}
	
void QuitarStock (LinkedList<stock> lista){
	
	stock aux;
	int codigo;
	int cantidad;
	cout<<"Ingrese el codigo del producto: ";
	cin>>codigo;
	
	for(unsigned int i = 0; i < lista.size(); i++){
		
		aux = lista.get(i);
		
		if(aux.codigo == codigo) {
			cout<<"\nCuanto stock desea descontar?: ";
			cin>>cantidad;
			if(aux.cantidad < cantidad) {
				cout<<"No hay suficiente stock, solo quedan "<<aux.cantidad<<endl;
			}
			else{
				aux.cantidad -= cantidad;
				lista.replace(i, aux);
			}
			break;
		}
		
		if(i == lista.size() - 1) {
			cout<<"\nEl codigo es incorrecto.\n";
		}
	}
}

void ReponerStock (LinkedList<stock> lista){
	
	stock aux;
	int codigo;
	int cantidad;
	cout<<"Ingrese el codigo del producto: ";
	cin>>codigo;
	
	for(unsigned int i = 0; i < lista.size(); i++){
		
		aux = lista.get(i);
		
		if(aux.codigo == codigo) {
			cout<<"\nCuanto stock desea reponer?: ";
			cin>>cantidad;
			aux.cantidad += cantidad;
			lista.replace(i, aux);
			break;
		}
		
		if(i == lista.size() - 1) {
			cout<<"\nEl codigo es incorrecto.\n";
		}
	}
}
int main(int argc, char *argv[]) {
	

	LinkedList<stock> lista;
	
	int op = 1;
	
	lista.push_back(CargarLista (lista, 132, "Manzana", 200, 20.75));
	lista.push_back(CargarLista (lista, 741, "Taza", 15, 100));
	lista.push_back(CargarLista (lista, 753, "TV", 3, 14999.99));
	lista.push_back(CargarLista (lista, 963, "Lapiz", 38, 29.99));
	
	
	while (op != 0) {
		cout<<"\n1. Mostrar stock\n"
			<<"2. Descontar stock\n"
			<<"3. Reponer stock\n"
			<<"0. Salir\n";
		cin>>op;
		
		switch (op) {
		case 1:
			MostrarLista(lista);
			break;
		case 2: 
			QuitarStock(lista);
			break;
		case 3:
			ReponerStock(lista);
			break;
		}
	}
	
	return 0;
}

