//2. Escribir un programa utilizando punteros y funciones en la cual se desea 
//	cargar en un vector con las ventas diarias de un negocio, 3 como máximo. 
//	La carga finaliza cuando el monto igual a cero.  Crear una estructura 
//	Factura, en donde tenga los siguientes atributos: numero, fecha y monto 
//	total. Además, se pide:
//	
//	- Cantidad de ventas cargadas.
//	
//	- Calcular la recaudación del día de manera recursiva.
//	
//	- Guardar los datos en un archivo.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


typedef struct {
	int numero;
	string fecha;
	float monto;
} Factura;

int sumar(Factura ventas[3], int pos) {
	if(pos == 0){
		return ventas[pos].monto;
	}
	return ventas[pos].monto + sumar(ventas, pos -1);
}
int main(int argc, char *argv[]) {
	
	Factura ventas[3];
	int aux = 1;
	
	for (int i = 0; i < 3; i++) {
		cout<<"\n\nVenta n° "<<i+1;
		cout<<"\nIngrese el monto: ";
		cin>>aux;
		if(aux == 0) {		
			aux = i;
			break;
		}
		ventas[i].monto = aux;
		ventas[i].numero = i+1;
		cout<<"Cuando se vendió?: ";
		cin>>ventas[i].fecha;
		aux = i+1;
	}
	
	
	cout<<"\nSe cargaron "<<aux<<" ventas";
	
	cout<<"\nSe recaudaron $"<<sumar(ventas, aux);
	
	ofstream archivo;
	archivo.open("ventas.txt", fstream::app);
	for(int i = 0; i < aux; i++){
		archivo<<"Venta n "<<ventas[i].numero
				<<"\nFecha: "<<ventas[i].fecha
				<<"\nMonto: $"<<ventas[i].monto;
	}
	archivo<<"\n\nMonto total del dia: $"<<sumar(ventas, aux)<<"\n\n\n";
	archivo.close();
	return 0;
}

