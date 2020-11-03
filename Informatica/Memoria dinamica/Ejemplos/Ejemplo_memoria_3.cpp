#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int *ptr;
	ptr = new int; //reserva
	cout<<"\n*ptr = "<<*ptr<<endl;
	
	int *ptrA;
	ptrA = new int(5); //reserva e inicializa en 5
	cout<<"\n*ptrA = "<<*ptrA<<endl;
	
	int *arreglo =  new int[3];
	arreglo[0]=9;
	arreglo[1]=8;
	arreglo[2]=7;

	cout<<"\nEl arreglo: "<<endl;
	for(int i=0; i<3;i++){
		cout<<arreglo[i]<<"\t";
	}
	
	delete ptr;
	delete ptrA;
	delete [] arreglo; //Si no usaramos [] no se liberara el arreglo entero
	
	return 0;
}

