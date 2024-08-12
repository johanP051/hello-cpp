#include <iostream>
#include <string>
using namespace std;

void str_to_int(){
    // string to int: stoi()
    string str_age = "18";
    int int_age = stoi(str_age);
    cout << "str_age: " << str_age << " es de tipo: " << typeid(str_age).name() << endl;
    cout << "int_age: " << int_age << " es de tipo: " << typeid(int_age).name() << endl;
}

void number_to_str(){
    // int or float to string: to_string(int_number)
    int i = 2;
    float f = 3.2;
    string i_to_s = to_string(i);
    string f_to_s = to_string(f);
    cout << "i = " << i << " es de tipo " << typeid(i).name() << endl;
    cout << "i_to_s = " << i_to_s << " es de tipo " << typeid(i_to_s).name() << endl;
    cout << "f = " << f << " es de tipo " << typeid(f).name() << endl;
    cout << "f_to_s = " << f_to_s << " es de tipo " << typeid(f_to_s).name() << endl;
}

float str_to_f(string str){
    float str_to_float = stof(str);
    return str_to_float;
}

void f_to_i(){
    // float to int
    float fx = 3.3;
    int ix = int(fx);
    cout << "fx: " << fx << " es de tipo " << typeid(fx).name() << endl;
    cout << "ix: " << ix << " es de tipo " << typeid(ix).name() << endl;

    // other form float to int
    float fx1 = 4.5;
    cout << "fx1: " << fx1 << " es de tipo " << typeid(fx1).name() << endl;
    int ix1 = fx1;
    cout << "ix1: " << ix1 << " es de tipo " << typeid(ix1).name() << endl;
}

void i_to_f(){
    // int to float
    int ix2 = 2;
    float fx2 = float(ix2);
    cout << "ix2: " << ix2 << " es de tipo " << typeid(ix2).name() << endl;
    cout << "fx2: " << fx2 << " es de tipo " << typeid(fx2).name() << endl;

    // other form int to float
    int ix3 = 4;
    float fx3 = ix3;
    cout << "ix3: " << ix3 << " es de tipo " << typeid(ix3).name() << endl;
    cout << "fx3: " << fx3 << " es de tipo " << typeid(fx3).name() << endl;
}



int main(){
    printf("\nConvirtiendo de string a entero:\n");
    str_to_int();

    printf("\nConvirtiendo de número a string:\n");
    number_to_str();

    printf("\nConvirtiendo de string a float:\n");
    string cadena;
    cout << "Inserte un número: ";
    cin >> cadena;
    
    cout << "La función str_to_f retorna el valor: " << str_to_f(cadena) << " de tipo " << typeid(str_to_f(cadena)).name() << endl;

    printf("\nConvirtiendo de float a int:\n");
    f_to_i();

    printf("\nConvirtiendo de int a float:\n");
    i_to_f();

    return 0;
}