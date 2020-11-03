#include <iostream>
#include <string>
using namespace std;


class vehiculo {
	
private:
	string tipo;
	int capacidad;
	string patente;
	string color;
	
public:
	vehiculo();
	
	void setTipo(string tip);
	string getTipo();
	
	void setCapacidad(int cap);
	int getCapacidad();
	
	void setPatente(string pat);
	string getPatente();
	
	void setColor(string col);
	string getColor();
	
};

vehiculo::vehiculo(){
}

void vehiculo::setTipo(string tip){
	tipo = tip;
}
string vehiculo::getTipo(){
	return tipo;
}

void vehiculo::setCapacidad(int cap){
	capacidad = cap;
}
int vehiculo::getCapacidad(){
	return capacidad;
}

void vehiculo::setPatente(string pat){
	patente = pat;
}
string vehiculo::getPatente(){
	return patente;
}

void vehiculo::setColor(string col){
	color = col;
}
string vehiculo::getColor(){
	return color;
}
