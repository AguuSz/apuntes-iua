#include <iostream>
using namespace std;

void cargar_caracteres(int cant, char *ptr) {
	cout<<"Ingrese los caracteres: ";
	for(int i = 0; i < cant; i++) {
		cin>>*(ptr+i);
	}
}
void mostrar(int cant, char *ptr) {
	for (int i = 0; i < cant; i++) {
		cout<<*(ptr+i);
	}
	cout<<endl;
}

void mostrar_inversa(int cantidad, char *ptr){
	for (int i = cantidad -1; i >= 0; i--) {
		cout<<*(ptr+i);
	}
}
int main(int argc, char *argv[]) {
	
	int cantidad;
	
	cout<<"¿Cuantos caracteres va a introducir?: ";
	cin>>cantidad;
	
	char *ptr = new char[cantidad+1];
	
	cargar_caracteres(cantidad, ptr);
	mostrar(cantidad, ptr);
	mostrar_inversa(cantidad, ptr);
	
	delete [] ptr;
	return 0;
}

