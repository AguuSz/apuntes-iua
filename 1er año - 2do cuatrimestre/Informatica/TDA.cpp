#include <iostream>
using namespace std;

typedef struct {
	string nombre;
	int edad;
	int nota;
} alumno;


void mostrar_alumno (alumno a);


int main(int argc, char *argv[]) {
	
	alumno curso [10];
	
	curso [0].nombre = "Aure";
	curso [0].edad = 19;
	curso [0].nota = 10;
	mostrar_alumno (curso[0]);
	return 0;
}


void mostrar_alumno (alumno a){
	cout<<"Nombre: "<<a.nombre<<"\n"
		<<"Edad: "<<a.edad<<"\n"
		<<"Nota: "<<a.nota<<"\n";
}
