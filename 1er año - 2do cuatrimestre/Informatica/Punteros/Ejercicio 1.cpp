#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a = 0;
	int *p = 0;
	
	a = 18;
	p = &a;
	
	cout<<"Direccion de a: "<<&a<<endl
		<<"Valor de a: "<<a<<endl
		<<"Valor del puntero: "<<p<<endl
		<<"Valor al que apunta el puntero: "<<*p;
	return 0;
}

