#include <iostream>
using namespace std;

void mostrar_orden(char *, int);

int main(int argc, char *argv[]) {
	char *ptr;
	int cant=0, cant_plus=0;
	
	cout<<"Ingrese la cantidad de memoria ha reservar: "<<endl;
	cin>>cant;    
	ptr=(char*)malloc(sizeof(char)*cant); //reserva memoria

	cout<<"\nIngrese una cadena de caracteres: ";
	for(int i=0;i<cant;i++){ //carga los valores char al puntero
		cin>>*(ptr+i);		
	}
	mostrar_orden(ptr, cant);
	
	cout<<"\nIngrese la cantidad de caracteres que va agregar: "<<endl; 
	cin>>cant_plus; 
	ptr=(char*)realloc(ptr,(cant_plus+cant)*sizeof(char)); //agregamos mas reserva de memoria
	
	cout<<"\nIngrese los "<<cant_plus<<" caracteres nuevos: "<<endl;
	for(int i=0;i<cant_plus;i++){
		cin>>*(ptr+cant+i);	
	}
	mostrar_orden(ptr, (cant_plus+cant));
	
	free(ptr);//libera memoria  
	return 0;
}

void mostrar_orden(char *ptr, int cant){
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden son:"<<endl;     
	for(int i=0;i<cant;i++){
		cout<<*(ptr+i);
	}
	cout<<"\n---------------------------------------------------------------"<<endl;
}
