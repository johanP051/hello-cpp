#include <iostream>
#include <math.h>
#include <format>
using namespace std;

int age;
string name;

int main() {
    cout << "Insert your name: ";
    // cin >> name; si ingresaramos un nombre con espacios, solo va a leer la primera cadena, ya que cin no lee los espacios
    getline(cin, name); // getline sirve para leer una cadena completa con espacios
    cout << "Insert your age: ";
    cin >> age;
    age = abs(age);
    cout << endl << "Hello " << name << " your age is " << age << endl;
    /*printf("Hello %s your age is %d", name.c_str(), age); En caso de querer usar printf para formatear la salida
     *  usamos los formatting strings %d  para enteros %s para strings, sin embargo despues del string, como argumento debemos indicar variable.c_str()
     * para convertir la variable a un string de C, pues printf viene de C
     */
    return 0;
}