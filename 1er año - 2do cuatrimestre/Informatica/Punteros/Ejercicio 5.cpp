#include <iostream>
using namespace std;

void cambiar_valores(int *ptra, int *ptrb){
	int aux;
	
	aux = *ptra;
	*ptra = *ptrb;
	*ptrb = aux;
	
}
int main(int argc, char *argv[]) {
	
	int a = 15;
	int b = 30;
	int *ptra = &a;
	int *ptrb = &b;
	
	cout<<"a: "<<a<<endl
		<<"b: "<<b<<endl<<endl;
	
	cambiar_valores(ptra, ptrb);
	
	cout<<"a: "<<a<<endl
		<<"b: "<<b<<endl<<endl;
	
	return 0;
}

