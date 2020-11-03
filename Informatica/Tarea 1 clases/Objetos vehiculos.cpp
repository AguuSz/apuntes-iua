#include <iostream>
#include <string>
#include "vehiculo.h"

using namespace std;

int main(int argc, char *argv[]) {
	vehiculo vector[2];
	
	string tipo, patente, color;
	int capacidad;
	
	for(int i = 0; i < 2; i++){
		cout<<"\n\nQue tipo de vehiculo es?: ";
		cin >>tipo;
		vector[i].setTipo(tipo);
		
		cout<<"\nQue capacidad tiene el/la "<<vector[i].getTipo()<<"?: ";
		cin >>capacidad;
		vector[i].setCapacidad(capacidad);
		
		cout<<"\nDime la patente del/de la "<<vector[i].getTipo()<<": ";
		cin >>patente;
		vector[i].setPatente(patente);
		
		cout<<"\nDe que color es el/la "<<vector[i].getTipo()<<": ";
		cin >>color;
		vector[i].setColor(color);
	}
	
	for (int i = 0; i < 2; i++) {
		cout<<"\n\nTenemos un/a "<<vector[i].getTipo()
			<<", con capacidad de "<<vector[i].getCapacidad()<<" pasajeros"
			<<", cuya patente es "<<vector[i].getPatente()
			<<" y es de color "<<vector[i].getColor();
	}
	return 0;
}

