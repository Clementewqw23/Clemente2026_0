#include <iostream>
#include <string>
using namespace std;

//Actividad 7 – Mini reto final//

class Vehiculo {
protected:
    string marca;
    int velocidadMax;

public:

    Vehiculo(string marca, int velocidadMax) {
        this->marca = marca;
        this->velocidadMax = velocidadMax;
    }


    string getMarca() const {
        return marca;
    }

    int getVelocidadMax() const {
        return velocidadMax;
    }

    void setMarca(string marca) {
        this->marca = marca;
    }

    void setVelocidadMax(int velocidadMax) {
        this->velocidadMax = velocidadMax;
    }

    virtual void mostrarInfo() const {
        cout << "Marca: " << marca << endl;
        cout << "Velocidad maxima: " << velocidadMax << " km/h" << endl;
    }
};


class Carro : public Vehiculo {
private:
    int puertas;

public:
    Carro(string marca, int velocidadMax, int puertas)
        : Vehiculo(marca, velocidadMax) {
        this->puertas = puertas;
    }

    int getPuertas() const {
        return puertas;
    }

    void setPuertas(int puertas) {
        this->puertas = puertas;
    }

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "Puertas: " << puertas << endl;
    }
};


class Moto : public Vehiculo {
private:
    int cilindraje;

public:

    Moto(string marca, int velocidadMax, int cilindraje)
        : Vehiculo(marca, velocidadMax) {
        this->cilindraje = cilindraje;
    }


    int getCilindraje() const {
        return cilindraje;
    }

    void setCilindraje(int cilindraje) {
        this->cilindraje = cilindraje;
    }

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "Cilindraje: " << cilindraje << " cc" << endl;
    }
};

int main() {

    Carro carro("Toyota", 180, 4);
    Moto moto("Yamaha", 200, 250);

    cout << "=== Carro ===" << endl;
    carro.mostrarInfo();

    cout << endl;

    cout << "=== Moto ===" << endl;
    moto.mostrarInfo();

    return 0;
}
