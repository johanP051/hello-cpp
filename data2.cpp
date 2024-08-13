#include <iostream>
#include <math.h>
#include <iterator>
using namespace std;

// long double x = 2.133e2;
double f = 2.1332221212e6;
int arreglo[] = {1, 2, 3, 15};
float arreglo2[] = {1.3, 1.5, 7.0, 1, 9, 19};


int main(){
	printf("f: %le \n ", f);
	cout << "Tamaño de f: " << sizeof(f) << " tipo: " << typeid(f).name() << endl;

	//Obteniendo la longitud (lenght) de un arreglo: tamaño array / tamaño del tipo de datos que almacena el array 
	//cout << sizeof(arreglo) / sizeof(int) << endl;
	//Otra forma de hallar la longitud del arreglo
	//cout << sizeof(arreglo2) /sizeof(arreglo2[0]);

	// Forma más optima de obtener la longitud de un arreglo
	cout << "Longitud de arreglo2 es: " << std::size(arreglo2) << endl;

	//Imprimiendo los elementos de un arreglo:
	for (int a : arreglo){ // esto es equivalente en Python: for a in arreglo: print (un for loop basado en rangos)
		cout << a << endl;
	}

	// for loop sin usar rangos
	for (int i = 0; i < std::size(arreglo) - 1; i++){
		cout << arreglo[i] << endl;
	}

	return 0;
}