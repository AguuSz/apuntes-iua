#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cant, cant_extra;
	char *ptr;
	
	cout<<"¿Cuantos caracteres vas a ingresar?: ";
	cin>>cant;
	
	ptr = (char*)malloc(cant * sizeof(char));
	
	cout<<"Ingresa tus valores: ";
	for (int i = 0; i < cant; i++) {
		cin>>*(ptr+i);
	}
	
	cout<<"\n\n¿Cuantos caracteres mas vas a agregar?: ";
	cin>>cant_extra;
	
	ptr = (char*)realloc(ptr, (cant + cant_extra) * sizeof(char));
	cout<<"Ingresa los ultimos valores: ";
	for(int i = 0; i < cant_extra; i++) {
		cin>>*(ptr+cant+i);
	}
	
	for(int i = 0; i < (cant + cant_extra); i++){
		cout<<*(ptr+i);
	}
	
	free(ptr);
	return 0;
}

