//2. Crear un programa que gestione el listado de celulares que están a la venta.
//	Para ello crear una estructura Celular, en la cual contenga los siguientes
//	datos: marca, modelo y precio. Cargar el vector de estructura con los
//	siguientes datos:
//	marca		modelo		precio (dolares)
//	SAMSUNG 	S10		        500
//	XIAOMI 		NOTE8 		100
//	APPLE		IPHONE11	1000
//	SAMSUNG	J7		        30
//	LG		         G7		        450
//	
//	
//	Luego crear un menú que permita las opciones (crear para cada una una función)
//	a. mostrar listado completo
//	b. mostrar listado con precio menores a x. (x es ingresado por teclado)
//	c. generar un archivo con el listado de celulares menores a x.
//	Supuesto: Se asume que el listado cargado están todos disponibles.
//	Puntaje: 35 puntos. 

#include <iostream>
#include <fstream>
using namespace std;

typedef struct {
	string marca;
	string modelo;
	float precio;
} Celular;

void mostrar_stock (Celular stock[5]) {
	cout<<"Marca\tModelo\tPrecio (dolares)\n";
	for (int i = 0; i < 5; i++) {
		cout<<stock[i].marca<<"\t"
			<<stock[i].modelo<<"\t"
			<<stock[i].precio<<"\n";
	}
}

void filtrar_precios (Celular stock[5]) {
	float precio = 0;
	cout<<"Precios menores a: U$D ";
	cin>>precio;
	
	cout<<"Marca\tModelo\tPrecio (dolares)\n";
	for (int i = 0; i < 5; i++) {
		if(stock[i].precio < precio) {
			cout<<stock[i].marca<<"\t"
				<<stock[i].modelo<<"\t"
				<<stock[i].precio<<"\n";
		}
	}
}


void archivo_filtrado (Celular stock[5]){
	float precio = 0;
	cout<<"Precios menores a: U$D ";
	cin>>precio;
	
	ofstream archivo;
	archivo.open("Stock_filtrado.txt", ios::app);
	archivo<<"Marca\tModelo\tPrecio (dolares)\n";
	for (int i = 0; i < 5; i++) {
		if(stock[i].precio < precio) {
			archivo<<stock[i].marca<<"\t"
				<<stock[i].modelo<<"\t"
				<<stock[i].precio<<"\n";
		}
	}
	archivo.close();
}
	
int main(int argc, char *argv[]) {
	
	char op = ' ';
	Celular stock[5];
	
	stock[0].marca = "SAMSUNG";
	stock[0].modelo = "S10";
	stock[0].precio = 500;
	stock[1].marca = "XIAOMI";
	stock[1].modelo = "NOTE8";
	stock[1].precio = 100;
	stock[2].marca = "APPLE";
	stock[2].modelo = "IPHONE11";
	stock[2].precio = 1000;
	stock[3].marca = "SAMSUNG";
	stock[3].modelo = "J7";
	stock[3].precio = 30;
	stock[4].marca = "LG";
	stock[4].modelo = "G7";
	stock[4].precio = 450;
	
	while(op != '0'){
		cout<<"\na. Mostrar listado completo"
			<<"\nb. Mostrar listado con precio menores a ..." 
			<<"\nc. Generar un archivo con el listado de celulares menores a ..."
			<<"\n0. Salir\n";
		cin>>op;
		
		switch (op) {
		case 'a':
			mostrar_stock(stock);
			break;
		case 'b': 
			filtrar_precios(stock);
			break;
		case 'c':
			archivo_filtrado(stock);
			break;
		}
	}
	return 0;
}

