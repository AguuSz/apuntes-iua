#include <iostream>
#include <fstream>

using namespace std;

struct producto{
	string nombre, marca, precio, fecha, tamano;
};

int main(int argc, char *argv[]) {
	
	producto prod;
	
	cout<<"Ingrese el nombre del producto: ";
	cin >>prod.nombre;
	
	cout<<"\nMarca: ";
	cin >>prod.marca;
	
	cout<<"\nPrecio unitario: ";
	cin >>prod.precio;
	
	cout<<"\nFecha de elaboración: ";
	cin >>prod.fecha;
	
	cout<<"\nTamaño: ";
	cin >>prod.tamano;
	
	ofstream archivo_escritura;
	
	archivo_escritura.open("Datos_Producto_Estructura.txt");
	
	archivo_escritura 	<<"Nombre: "<<prod.nombre
						<<"\nMarca: "<<prod.marca
						<<"\nPrecio unitario: "<<prod.precio
						<<"\nFecha de elaboracion: "<<prod.fecha
						<<"\nTamaño: "<<prod.tamano;
	
	archivo_escritura.close();
	
	
	return 0;
}
