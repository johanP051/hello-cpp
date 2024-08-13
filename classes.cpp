#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        string color;

        void info(){
            cout << "El carro es de marca: " << brand << ", Modelo: " << model << ", Año: " << year << " y es de color: " << color << endl;
        }
        
        void andar(float distance){
            cout << "El carro se ha movido: " << distance << " km" << endl;
        }
    Car(string marca, string modelo, int ano, string _color){
        brand = marca;
        model = modelo;
        year = ano;
        color = _color;
    }
};

int main(){
    Car micarro("Toyota", "Land Cruiser Prado", 2025, "Gris");
    micarro.info();
    micarro.andar(100);
    return 0;
}