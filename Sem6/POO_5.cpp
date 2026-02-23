#include<iostream>
#include<string>
using namespace std;
//Actividad 5 – Herencia
///Parte A – Clase base
///Parte B – Clases derivadas
///Parte C – Pruebas

//ACTIVIDAD 5: Parte A – Clase base
class Persona{
    private:
    string nombre;
    int edad;

    public:

    Persona(string nombre, int edad){
        this->nombre=nombre;
        if(edad>=0){
            this-> edad= edad;
        }else{
            this->edad=0;
        }
    }
    
    string getNombre()const{
        return nombre;
    }
    int getEdad()const{
        return edad;
    }

    void setNombre(string nombre){
        this->nombre=nombre;
    }

    void setEdad(int edad){
        if(edad>=0){
            this->edad= edad;
        }else{
            cout<<"Edad invalida"<< endl;
        }
    }

    void mostrar()const{
        cout<<"Nombre: "<< nombre<<endl;
        cout<<"Edad: "<< edad<< endl;
    }
};

//ACTIVIDAD 5: Parte B-Clases derivadas//

class Estudiante: public Persona{
    private:
    string carrera;
    public:
    Estudiante(string nombre, int edad, string carrera)
        :Persona(nombre, edad){
            this->carrera= carrera;
        }
    void estudiar()const{
        cout<<"El estudiante esta estudiando la carrera de "<< carrera<< endl;

    }
    void mostrar()const{
        Persona::mostrar();
        cout<<"Carrera: "<< carrera<< endl;
    }
};

class Profesor : public Persona {
private:
    string materia;

public:
    Profesor(string nombre, int edad, string materia)
        : Persona(nombre, edad) {
        this->materia = materia;
    }

    void enseñar() const {
        cout << "El profesor esta enseñando " << materia << endl;
    }

    void mostrar() const {
        Persona::mostrar();
        cout << "Materia: " << materia << endl;
    }
};

// Parte C – Pruebas

int main() {

    Estudiante est("Juan", 20, "Ingenieria de Sistemas");
    Profesor prof("Carlos", 45, "Programacion");

    cout << "=== Estudiante ===" << endl;
    est.mostrar();
    est.estudiar();

    cout << endl;

    cout << "=== Profesor ===" << endl;
    prof.mostrar();
    prof.enseñar();

    return 0;
}
//PREGUNTA 5: ¿Qué atributos y métodos comparten Estudiante y Profesor gracias a Persona?
//Gracias a la clase persona, estudiante como profesor comparten los atributos de nombre y edad,
 //asi como getNombre(), getEdad(), setNombre(), setEdad() y mostrar().//
