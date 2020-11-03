#include <iostream>
#include "Lista.h"

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int numero;
	Lista listaNumero;
		
	cout<<"\nLista de numeros en la lista: "<<endl;
		
	for(int i=0; i<10;i++){
		numero=rand()%20;
		listaNumero.Insertar(numero);
		cout<<numero<<"\t";
	}
		
	listaNumero.Mostrar();
	listaNumero.Buscar(5);
	listaNumero.GenerarArchivo();
	listaNumero.ListaVacia();
	listaNumero.~Lista();
	return 0;

}

