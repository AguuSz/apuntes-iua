#include <iostream>
#include <string>

using namespace std;

struct cancion {
	string artista;
	string titulo;
	int duracion;
	int tamano;
};

void agregar_cancion(int, cancion [3]);
void mostrar_canciones(int, cancion[3]);
void buscar_cancion(int, cancion [3]);
int main(int argc, char *argv[]) {
	
	int op = 1,
		cant = 0;
	cancion album[3];
	
	while (op != 0){
			
		cout<<"\n\n1. Agregar una nueva canción"
			<<"\n2. Mostrar todas las canciones"
			<<"\n3. Buscar una canción por título"
			<<"\n0. Salir\n";
		cin >>op;
		
		switch (op) {
		case 1:
			agregar_cancion(cant, album);
			cant++;
			break;
		case 2:
			mostrar_canciones(cant, album);
			break;
		case 3:
			buscar_cancion(cant, album);
			break;
		}
	}

	return 0;
}

void agregar_cancion (int i, cancion album[3]){
	
	cout<<"\n\nCancion n°"<<i+1;
	
	cout<<"\nArtista: ";
	cin >>album[i].artista;
	
	cout<<"\nTitulo: ";
	cin >>album[i].titulo;
	
	cout<<"\nDuracion (seg): ";
	cin >>album[i].duracion;
	
	cout<<"\nTamaño (KB): ";
	cin >>album[i].tamano;
}
	
void mostrar_canciones(int aux, cancion album[3]) {
	
	for (int i = 0; i < aux; i++) {
		
		cout<<"\n\nCancion n°"<<i+1;
		
		cout<<"\nArtista: ";
		cout<<album[i].artista;
		
		cout<<"\nTitulo: ";
		cout<<album[i].titulo;
		
		cout<<"\nDuracion: ";
		cout<<album[i].duracion;
		cout<<" segundos";
		
		cout<<"\nTamaño: ";
		cout<<album[i].tamano;
		cout<<"KB";
	}
}

void buscar_cancion(int aux, cancion album[3]){
	
	string titulo;
	cout<<"\nTitulo: ";
	cin >>titulo;
	
	for (int i = 0; i < aux; i++){
		if(album[i].titulo == titulo) {
			
			cout<<"\n\nCancion n°"<<i+1;
			
			cout<<"\nArtista: ";
			cout<<album[i].artista;
			
			cout<<"\nTitulo: ";
			cout<<album[i].titulo;
			
			cout<<"\nDuracion: ";
			cout<<album[i].duracion;
			cout<<" segundos";
			
			cout<<"\nTamaño: ";
			cout<<album[i].tamano;
			cout<<"KB";
		}
	}
}
