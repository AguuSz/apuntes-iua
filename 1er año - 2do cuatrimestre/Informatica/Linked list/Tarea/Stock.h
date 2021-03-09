#include <iostream>
#include <string>

using namespace std;

class Stock {
private:
	int codigo;
	string nombre;
	int cantidad;
	float precio;
	
public:
	void setCodigo(int cod){
		codigo = cod;
	}
	int getCodigo(){
		return codigo;
	}
	void setNombre(string nom){
		nombre = nom;
	}
	string getNombre(){
		return nombre;
	}
	void setCantidad(int cant){
		cantidad = cant;
	}
	int getCantidad(){
		return cantidad;
	}
	void setPrecio(float prec){
		precio = prec;
	}
	float getPrecio(){
		return precio;
	}
};
