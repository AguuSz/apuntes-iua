//1. Escribir un programa donde se solicite el tamaño del vector (entre 5 y 10) y 
//	reservar memoria. Luego al finalizar la ejecucion del programa liberarla. 
//	Luego crear las siguientes funciones:
//	
//	- cargarNumero(), que rellene aleatoriamente el vector con números entre el 
//	1 y 10 utilizando punteros.
//	
//	- mostrarNumero(), que muestre el vector anterior por medio de punteros los 
//	valores del vector y las direcciones en las cuales los valores sean mayores 
//	a 5 inclusive.
//	
//	- sumarNumero() que sume todos los números del vector de manera recursiva.

#include <iostream>
#include <ctime>
using namespace std;

void cargarNumero(int *ptr, int tam) {
	srand(time(NULL)); //Funcion para generar numeros random
	
	for(int i = 0; i < tam; i++) {
		ptr[i] = rand () % 10 + 1;
	}
}

void mostrarNumero(int *ptr, int tam){
	for(int i = 0; i< tam; i++){
		cout<<ptr[i]<<"\t";
//		if(ptr[i] >= 5) {
//			cout<<&ptr[i];
//		}
	}
}
	
int sumarNumero(int *ptr, int pos){
	if(pos == 0) {
		return ptr[pos];
	}
	return ptr[pos] + sumarNumero(ptr, pos-1); 
}
int main(int argc, char *argv[]) {
	
	int tam;
	int *ptr;
	
	cout<<"Ingrese un numero del 5 al 10: ";
	cin>>tam;
	ptr = new int[tam];
	
	cargarNumero(ptr, tam);
	mostrarNumero(ptr, tam);
	cout<<"\nLa suma de todo eso es: "<<sumarNumero(ptr, tam-1);
	delete ptr;
	
	return 0;
}

