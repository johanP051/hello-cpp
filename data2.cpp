#include <iostream>
#include <math.h>
using namespace std;

// long double x = 2.133e2;
double f = 2.1332221212e6;

int main(){
	printf("f: %le \n ", f);
	cout << "Tamaño de f: " << sizeof(f) << " tipo: " << typeid(f).name() << endl;
}