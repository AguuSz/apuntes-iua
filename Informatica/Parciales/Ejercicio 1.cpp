//1. Escribir un programa que se cree un vector de 10 caracteres (A-Z) y reserve
//	memoria a tal fin, al finalizar la ejecución del programa liberarla. Luego
//	crear las siguientes funciones:

//	- cargar vector, que rellene aleatoriamente el vector con letras de la A-Z.
//	(en ASCII de 65 a 90), utilizando punteros.

//	- mostrar vector, que muestre el vector anterior por medio de punteros los
//	valores del vector y las direcciones solo de las vocales. 

//	- contar vocales, que cuente la cantidad de vocales que hay en el vector
//	Puntaje: 35 puntos. 

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	
	srand(time(NULL)); //Funcion para generar numeros random
	
	int vocales = 0;
	
	char *ptr = new char [10];
	
	for (int i = 0; i < 10; i++) {
		*(ptr + i) = rand() % 25 + 65;
	}
	
	cout<<"Letras\tDir. Memoria\n";
	
	for (int i = 0; i < 10; i++) {
		cout<<*(ptr + i)<<"\t"; 
		if (ptr[i] == 'A' || ptr[i] == 'E' || ptr[i] == 'I' || ptr[i] == 'O' || ptr[i] == 'U') {
			cout<<"0x"<<int(ptr + i);
			vocales++;
		}
		cout<<"\n";
	}
	cout<<"Hay "<<vocales<<" vocales en el vector.";
	
	delete ptr;
	return 0;
}

