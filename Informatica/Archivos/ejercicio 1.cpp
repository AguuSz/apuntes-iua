#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	
	string nombre, marca, precio, fecha, tamano;
	
	cout<<"Ingrese el nombre del producto: ";
	cin >>nombre;
	
	cout<<"\nMarca: ";
	cin >>marca;
	
	cout<<"\nPrecio unitario: ";
	cin >>precio;
	
	cout<<"\nFecha de elaboraci�n: ";
	cin >>fecha;
	
	cout<<"\nTama�o: ";
	cin >>tamano;
	
	ofstream archivo_escritura;
	
	archivo_escritura.open("Datos_Producto.txt");
	
	archivo_escritura 	<<"Nombre: "<<nombre
						<<"\nMarca: "<<marca
						<<"\nPrecio unitario: "<<precio
						<<"\nFecha de elaboracion: "<<fecha
						<<"\nTama�o: "<<tamano;
	
	
	archivo_escritura.close();
	
	
	return 0;
}

