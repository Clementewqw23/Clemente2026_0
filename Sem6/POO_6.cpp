#include <iostream>
#include <string>
using namespace std;
//Actividad 6 – Polimorfismo básico

// Clase base

class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = (edad >= 0) ? edad : 0;
    }

    virtual void rol() const {
        cout << "Soy una persona" << endl;
    }

    virtual void mostrar() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }

    virtual ~Persona() {} // buena práctica
};

// Clase Estudiante

class Estudiante : public Persona {
private:
    string carrera;

public:
    Estudiante(string nombre, int edad, string carrera)
        : Persona(nombre, edad) {
        this->carrera = carrera;
    }

    void rol() const override {
        cout << "Soy estudiante" << endl;
    }

    void mostrar() const override {
        Persona::mostrar();
        cout << "Carrera: " << carrera << endl;
    }
};


// Clase Profesor

class Profesor : public Persona {
private:
    string materia;

public:
    Profesor(string nombre, int edad, string materia)
        : Persona(nombre, edad) {
        this->materia = materia;
    }

    void rol() const override {
        cout << "Soy profesor" << endl;
    }

    void mostrar() const override {
        Persona::mostrar();
        cout << "Materia: " << materia << endl;
    }
};


int main() {

    Persona* personas[2];

    personas[0] = new Estudiante("Juan", 20, "Ingenieria de Sistemas");
    personas[1] = new Profesor("Carlos", 45, "Programacion");

    for (int i = 0; i < 2; i++) {
        personas[i]->rol();      // POLIMORFISMO
        personas[i]->mostrar();
        cout << "------------------" << endl;
    }

    // Liberar memoria
    delete personas[0];
    delete personas[1];

    return 0;
}

//PREGUNTA 6: ¿Qué ventaja da el polimorfismo?
// permite tratar objetos de distintas clases derivadas como si fueran del mismo tipo base, 
//ejecutando el comportamiento correcto según el objeto real, lo que hace el código más flexible y extensible.