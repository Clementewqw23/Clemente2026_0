#include<iostream>
#include<string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    void setDatos(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }

    void cumplirAnios() {
        edad++;
    }
};
