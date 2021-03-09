#include <iostream>
#include <cmath>

using namespace std;

void sumar(float *a, float *b, float *c){
	*c = *a+*b;
}
void restar(float *a, float *b, float *c){
	*c = *a-*b;
}
void multiplicar(float *a, float *b, float *c){
	*c = (*a) * (*b);
}
void dividir(float *a, float *b, float *c){
	*c = *a / *b;
}
void elevar(float *a, float *b, float *c){
	*c = pow(*a, *b);
}
void radicar(float *a, float *c){
	*c = sqrt(*a);
}

void pedir_numeros(float *a, float *b){
	cout<<"Dame un número: ";
	cin >>*a;
	
	cout<<"Dame otro número: ";
	cin >>*b;
}

int main(int argc, char *argv[]) {
	
	char op = ' ';
	float a;
	float b;
	float res;
	
	float *ptra = &a;
	float *ptrb = &b;
	float *ptrres = &res;
	
	while (op!= '0') {
		cout<<"\nA. sumar"<<endl
			<<"B. restar"<<endl
			<<"C. multiplicar"<<endl
			<<"D. dividir"<<endl
			<<"E. elevar a una potencia"<<endl
			<<"F. calcular raíz"<<endl;
		cin >>op;
		
		
		switch (op){
		case 'a':
		case 'A':
			pedir_numeros(ptra, ptrb);
			sumar(ptra, ptrb, ptrres);
			cout<<a<<"+"<<b<<"="<<res;
			break;
			
		case 'b':
		case 'B':
			pedir_numeros(ptra, ptrb);
			restar(ptra, ptrb, ptrres);
			cout<<a<<"-"<<b<<"="<<res;
			break;

		case 'c':
		case 'C':
			pedir_numeros(ptra, ptrb);
			multiplicar(ptra, ptrb, ptrres);
			cout<<a<<"*"<<b<<"="<<res;
			break;
		
		case 'd':
		case 'D':
			pedir_numeros(ptra, ptrb);
			dividir(ptra, ptrb, ptrres);
			cout<<a<<"/"<<b<<"="<<res;
			break;
		
		case 'e':
		case 'E':
			pedir_numeros(ptra, ptrb);
			elevar(ptra, ptrb, ptrres);
			cout<<a<<"^"<<b<<"="<<res;
			break;
			
		case 'f':
		case 'F':
			//a este lo hago distinto porque solo voy a pedir un numero
			cout<<"Dame un número: ";
			cin >>a;
			radicar(ptra, ptrres);
			cout<<"Raiz de "<<a<<"="<<res;
			break;
		}
	}
	return 0;
}

