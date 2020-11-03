#include <iostream>
#include <string>

using namespace std;

struct cancion {
	string artista;
	string titulo;
	int duracion;
	int tamano;
};

int main(int argc, char *argv[]) {
	
	cancion temon;


	cout<<"\nArtista: ";
	cin >>temon.artista;
	
	cout<<"\nTitulo: ";
	cin >>temon.titulo;
	
	cout<<"\nDuracion (seg): ";
	cin >>temon.duracion;
	
	cout<<"\nTamaño (KB): ";
	cin >>temon.tamano;



	cout<<"\nArtista: ";
	cout<<temon.artista;
	
	cout<<"\nTitulo: ";
	cout<<temon.titulo;
	
	cout<<"\nDuracion: ";
	cout<<temon.duracion;
	cout<<" segundos";
	
	cout<<"\nTamaño: ";
	cout<<temon.tamano;
	cout<<"KB";

	return 0;
}

