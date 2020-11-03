//3. Escribir un programa utilizando punteros y funciones en la cual se desea 
//  cargar en un vector los valores que toma un sensor de temperatura colocando en 
//	una pileta de natación, que debe estar entre los 34 y 36 grados siendo esta 
//	la temperatura óptima para nadar. El sensor puede tomar valores entre 0 y 50
//	inclusive, cada 1 hora. Cuando el sensor toma un valor menor a 34 activa la 
//	caldera para calentar el agua. Reservar un espacio de memoria de 24, una 
//	para cada temperatura. Se pide:
//	
//	- Cantidad de veces que se activó la caldera en un día.
//	
//	- Calcular el promedio de temperatura del agua en todo un día.
//	
//	- Ordenar las temperaturas con quick sort.
//	
//	- Guardar los datos en un archivo.

#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

void quicksort(int a[], int primero, int ultimo) {
	int i, d, pivote, tmp;
	
	pivote = a[(primero + ultimo) / 2];
	i = primero;
	d = ultimo;
	
	do {
		while (a[i] < pivote)
			i++;
		while (a[d] > pivote)
			d--;
		
		if (i <= d) {
			tmp = a[i];  // Swapping
			a[i] = a[d];
			a[d] = tmp;
			i++;
			d--;
		}
	} while (i <= d);
	
	if (primero < d)
		quicksort(a, primero, d); // Llamada recursiva
	if (i < ultimo)
		quicksort(a, i, ultimo); // Llamada recursiva
}

void guardar (int *ptr, float prom, int contador) {
	ofstream archivo;
	archivo.open("Temperaturas.txt");
	for (int i = 0; i < 24; i++){
		archivo<<i<<":00 "<<ptr[i]<<"\n";
	}
	archivo<<"Temperatura promedio: "<<prom
		<<"\nSe prendio "<<contador<<" veces la caldera";
	
	archivo.close();
}
int main(int argc, char *argv[]) {
	
	srand(time(NULL)); //Funcion para generar numeros random
	
	int contador = 0;
	int *ptr;
	float prom = 0;
	ptr = new int[24];
	
	for (int i = 0; i < 24; i++) {
		ptr[i] = rand () % 51;
		cout<<"\n"<<i<<":00 Temperatura: "<<ptr[i]<<"°C";
		if(ptr[i] < 34) {
			if(ptr[i-1] > 33){
				cout<<"\nPRENDIENDO CALDERA...";
				contador++;
			}
		}
		else {
			if(ptr[i-1] < 34) {				
				cout<<"\nCALDERA APAGADA...";
			}
		}
	}
	
	for (int i = 0; i < 24; i++) {
		prom += float(ptr[i]) / 24;
	}
	cout<<"\n\nEl promedio de la temperatura del agua ayer fue de "<<prom<<"°C"
		<<"\nPero prendimos "<<contador<<" veces la caldera";
	
	guardar(ptr, prom, contador);
	
	quicksort(ptr, 0, 23);
	
	cout<<"\n\nLas ordenamos por simple placer: ";
	for (int i = 0; i < 24; i++){
		cout << ptr[i] << " ";
	}


	delete ptr;
	
	return 0;
}

