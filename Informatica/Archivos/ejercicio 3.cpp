#include <iostream>
#include <fstream>

using namespace std;

typedef struct{
	string nombre, marca, precio, fecha, tamano;
}producto;

void cargar_datos(producto [3]);
void leer_datos();

int main(int argc, char *argv[]) {
	
	
	producto prod[3];
	
	char op = ' ';
	
	while (op != 'c' || op != 'C'){
		cout<<"\n\nA. Cargar lista de productos."
			<<"\nB. Leer la lista de productos."
			<<"\nC. Salir.\n";
		
		cin >>op;
		
		switch (op){
		case 'a':
		case 'A':
			cargar_datos(prod);
			break;
			
		case 'b':
		case 'B':
			leer_datos();
			break;
		}
	}
	return 0;
}

void cargar_datos(producto prod[3]){
	
	cout<<"Al ingresar los datos no utilice espacios"<<endl;
	
	for (int i = 0; i < 3; i++){
		
		cout<<"\nNombre: ";
		cin>>prod[i].nombre;
		
		cout<<"\nMarca: ";
		cin>>prod[i].marca;
		
		cout<<"\nPrecio unitario: ";
		cin>>prod[i].precio;
		
		cout<<"\nFecha de elaboración: ";
		cin>>prod[i].fecha;
		
		cout<<"\nTamaño: ";
		cin>>prod[i].tamano;
	}
	
	ofstream archivo_escritura;
	
	archivo_escritura.open("Listado_Producto.txt");
	
	for (int i = 0; i < 3; i++){
		archivo_escritura 	<<"Nombre:"<<prod[i].nombre << endl
			<<"Marca:"<<prod[i].marca << endl
			<<"Precio_unitario:"<<prod[i].precio << endl
			<<"Fecha_de_elaboracion:"<<prod[i].fecha << endl
			<<"Tamaño:"<<prod[i].tamano << endl;
	}	
	archivo_escritura.close();
}
	
	void leer_datos(){
		
		ifstream archivo_lectura;
		archivo_lectura.open("Listado_Producto.txt");
		
		string lectura = " ";
		
		while (!archivo_lectura.eof()){
			archivo_lectura>>lectura;
			cout<<lectura<<endl;
		}
		
		archivo_lectura.close();
	}
		
