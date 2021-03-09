#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	float vector[5] = {4.5, 8, 2.3, 1.1, 3};
	
	float *ptrVector = vector;
	
	int menor = 0;
	int mayor = 0;
	float promedio = 0;
	
	for (int i = 0; i < 5; i++) {
		
		if (*(ptrVector+i) < *(ptrVector+menor)){
			menor = i;
		}
		
		if (*(ptrVector+i) > *(ptrVector+mayor)){
			mayor = i;
		}
		
		promedio += *(ptrVector+i);
	}
	
	promedio /= 5;
	
	cout<<"Menor: "<<*(ptrVector+menor)<<endl
		<<"Mayor: "<<*(ptrVector+mayor)<<endl
		<<"Promedio: "<<promedio<<endl;
	
	return 0;
}

