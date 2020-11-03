#include <iostream>
#include <String.h>
using namespace std;

int palindroma (string palabra, int principio, int fin) {
	
	cout<<palabra[principio]<<"\t"<<palabra[fin]<<"\n";
	
	if(principio >= fin){
		return true;
	}
	
	if (palabra[principio] == palabra[fin]) {
		return palindroma(palabra, principio +1, fin -1);
	}
	
	return false;
}
int main(int argc, char *argv[]) {
	
	string palabra;
	
	cout<<"Palabra capicúa\n";
	cout<<"Ingrese una palabra: ";
	cin>>palabra;
	
	if(palindroma(palabra, 0, palabra.size()-1)){
		cout<<"Es palindroma";
	} else {
		cout<<"No es palindroma";
	}
	
	return 0;
}

