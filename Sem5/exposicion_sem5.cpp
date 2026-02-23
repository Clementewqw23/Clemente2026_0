#include<iostream>
#include<string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
};


class Persona {
public:
    void saludar() {
        cout << "Hola, soy una persona";
    }
};

void setEdad(int edad) {
    edad = edad; // error lógico
}


void setEdad(int edad) {
    this->edad = edad;
}
