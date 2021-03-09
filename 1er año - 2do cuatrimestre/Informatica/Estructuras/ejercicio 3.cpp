#include <iostream>
#include <string>

using namespace std;

struct empleado {
	string legajo;
	string puesto;
	int sueldo;
};

void agregar_empleado(int, empleado [3]);
void mostrar_empleados(int, empleado[3]);
void buscar_empleado(int, empleado [3]);

int main(int argc, char *argv[]) {
	
	int op = 1,
		cant = 0;
	empleado personal[3];
	
	while (op != 0){
		
		cout<<"\n\n1. Agregar un empleado"
			<<"\n2. Mostrar todos los empleados"
			<<"\n3. Buscar una empleado por legajo"
			<<"\n0. Salir\n";
		cin >>op;
		
		switch (op) {
		case 1:
			agregar_empleado(cant, personal);
			cant++;
			break;
		case 2:
			mostrar_empleados(cant, personal);
			break;
		case 3:
			buscar_empleado(cant, personal);
			break;
		}
	}
	
	return 0;
}

void agregar_empleado (int i, empleado personal[3]){
	
	cout<<"\nLegajo: ";
	cin >>personal[i].legajo;
	
	cout<<"\nPuesto de trabajo: ";
	cin >>personal[i].puesto;
	
	cout<<"\nSueldo: ";
	cin >>personal[i].sueldo;
	
}
	
void mostrar_empleados(int aux, empleado personal[3]) {
	
	for (int i = 0; i < aux; i++) {
		
		cout<<"\nLegajo: ";
		cout<<personal[i].legajo;
		
		cout<<"\nPuesto: ";
		cout<<personal[i].puesto;
		
		cout<<"\nSueldo: ";
		cout<<personal[i].sueldo;
	}
	cout<<"\n";
}
	
void buscar_empleado(int aux, empleado personal[3]){
	
	string legajo;
	cout<<"\nLegajo: ";
	cin >>legajo;
	
	for (int i = 0; i < aux; i++){
		
		bool encontrado = false;
		
		if(personal[i].legajo == legajo) {
			
			cout<<"\nLegajo: ";
			cout<<personal[i].legajo;
			
			cout<<"\nPuesto de trabajo: ";
			cout<<personal[i].puesto;
			
			cout<<"\nSueldo: ";
			cout<<personal[i].sueldo;
			encontrado = true;
		}
		
		if(i+1 >= aux && encontrado == false) {
			cout<<"\nNo se cargo ese empleado.";
		}
	}
}
	
