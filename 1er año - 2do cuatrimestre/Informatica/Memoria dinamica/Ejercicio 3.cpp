#include <iostream>
using namespace std;


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
	
	int cant = 0;
	int cant_extra = 0;
	char op = ' ';
	char *ptr;
	
	while(op != '0'){
		
		cout<<"\n\nA. Reserva de memoria e introducción de datos enteros"<<endl
			<<"B. Agregar reserva de memoria e introducción de nuevos datos enteros"<<endl
			<<"C. Mostrar los datos en el orden y orden invertido al que fueron introducidos"<<endl
			<<"0. Salir"<<endl;
		cin>>op;
		
		switch (op) {
		case 'A':
		case 'a':
			if(cant != 0) {
				free(ptr);
			}
			cout<<"¿Cuantos caracteres vas a ingresar?: ";
			cin>>cant;
			
			ptr = (char*)malloc(cant * sizeof(char));
			
			cout<<"Ingresa tus valores: ";
			for (int i = 0; i < cant; i++) {
				cin>>*(ptr+i);
			}
			break;
		case 'B':
		case 'b':
				cout<<"\n\n¿Cuantos caracteres mas vas a agregar?: ";
				cin>>cant_extra;
				ptr = (char*)realloc(ptr, (cant + cant_extra) * sizeof(char));
				cout<<"Ingresa los ultimos valores: ";
				for(int i = 0; i < cant_extra; i++) {
					cin>>*(ptr+cant+i);
				}
				
				cant += cant_extra;
				cant_extra = 0;
			break;
		case 'C':
		case 'c':
			mostrar(cant, ptr);
			mostrar_inversa(cant, ptr);
			break;
		}
	}
	
	free(ptr);
	return 0;
}

