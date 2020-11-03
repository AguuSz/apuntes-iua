//	2. Crear una lista con 20 letras y luego contar la cantidad de vocales y 
//	consonantes. Luego mostrar el listado completo y la cantidad de vocales y 
//	consonantes.
#include <iostream>
#include <ctime>
#include "Node.h"
#include "Linkedlist.h"
#include "Linkedlist.cpp"
using namespace std;

int main(int argc, char *argv[]) {
	
	srand(time(NULL)); //Funcion para generar numeros random
	
	LinkedList<char> lista;
	
	int vocales = 0;
	int consonantes = 0;
	
	for(int i = 0; i < 20; i++) {
		lista.push_back(rand() % 25 + 65);
	}
	for (unsigned int i = 0; i < lista.size(); i++){
		if(lista.get(i) == 'A' || lista.get(i) == 'E' || lista.get(i) == 'I' || lista.get(i) == 'O' || lista.get(i) == 'U') {
			vocales ++;
		}
		else {
			consonantes ++;
		}
	}
	
	cout<<"Lista de letras\n";
	for(unsigned int i = 0; i < lista.size(); i++) {
		cout<<lista.get(i)<<"\t";
	}
	
	cout<<"\nLa lista tiene "<<vocales<< " vocales\n"
		<<"y "<<consonantes<<" consonantes";
	
	return 0;
}

