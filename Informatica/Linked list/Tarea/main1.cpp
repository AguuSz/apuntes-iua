//	1. Crear un programa en la cual cargue una lista de 10 numeros aleatoriamente. 
//	Luego mostrar en pantalla, el listado completo, el promedio de ellos, y un 
//	listado con los múltiplos de 5.
#include <iostream>
#include <ctime>
#include "Node.h"
#include "Linkedlist.h"
#include "Linkedlist.cpp"

using namespace std;

void MostrarLista(LinkedList<int> lista){
	for(unsigned int i = 0; i < lista.size(); i++) {
		cout<<lista.get(i)<<endl;
	}
}

void MostrarPromedio(LinkedList<int> lista){
	unsigned int promedio = 0;
	for(unsigned int i = 0; i < lista.size(); i++) {
		promedio += lista.get(i);
	}
	cout<<"\nPromedio: "<<promedio / lista.size();
}
void Multiplos(LinkedList<int> lista) {
	cout<<"\n\nMultiplos de 5 \n";
	for (unsigned int i = 0; i < lista.size(); i++) {
		if(lista.get(i) % 5 == 0) {
			cout<<lista.get(i)<<"\n";
		}
	}
}
int main(int argc, char *argv[]) {
	
	srand(time(NULL)); //Funcion para generar numeros random
	
	LinkedList<int> lista;
	
	for(int i = 0; i < 10; i++){
		lista.push_back(rand());
	}
	MostrarLista(lista);
	MostrarPromedio(lista);
	Multiplos(lista);
	return 0;
}

