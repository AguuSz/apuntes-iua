#include <iostream>
using namespace std;

struct articulo {
	string nombre;
	int precio;
};
int main(int argc, char *argv[]) {
	articulo lista[3];
	lista[0].nombre = "aceite";
	lista[0].precio = 25;
	lista[1].nombre = "naranja";
	lista[1].precio = 3;
	lista[2].nombre = "arroz";
	lista[2].precio = 30;
	
	articulo *ptr;
	ptr = lista;
	
	for(int i = 0; i < 3; i++){
	cout<< (ptr+i)->nombre<<"\t";
	cout<< (ptr+i)->precio<<endl;
	}
	return 0;
}

