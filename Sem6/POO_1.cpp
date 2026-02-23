#include<iostream>
#include<string>
using namespace std;
//activdad 1: Clase vs Objeto
//actividad 2:Encapsulamiento (private + get/set)
//Actividad 3 – Uso de this->
//Actividad 4 – Constructores y sobrecarga




class celular{
    private:
    int bateria;
    string marca;
    string modelo;

    public:
    
    celular(){
        marca="Descononcida";
        modelo="Generico";
        bateria=100;
    }

    celular(string marca, string modelo){
        this->marca=marca;
        this->modelo=modelo;
        bateria=100;
    }    
    celular(string marca, string modelo, int bateria){
        this->marca=marca;
        this->modelo=modelo;

        if(bateria>=0 && bateria<=100){
            this->bateria = bateria;
        }else{
            this->bateria=100;
        }
    }
    string getmarca()const{
        return marca;
    }
    string getmodelo()const{
        return modelo;
    }
    int getbateria()const{
        return bateria;
    }

    void setmarca(string marca){
       this-> marca=marca;
    }
    void setmodelo(string modelo){
       this-> modelo=modelo;
    }
    void setbateria(int bateria){
        if(bateria>=0 && bateria<=100){
           this-> bateria=bateria;
        }else{
            cout<<"Bateria Invalida"<< bateria<<endl;
        }
    }
    void mostrarInfo()const{
        cout<<"Marca: "<< marca<< endl;
        cout<<"Modelo: "<< modelo<< endl;
        cout<<"Bateria: "<< bateria<<"%"<< endl;
    }
};



int main(){
    celular cel1;

    celular cel2("Samsung", "A50");

    celular cel3("Iphone", "iphone 13", 85);
    

    cel1.mostrarInfo();
    cel2.mostrarInfo();
    cel3.mostrarInfo();

    cel1.setbateria(150);
    cel1.setbateria(-20);

    cel2.setbateria(150);
    cel2.setbateria(-20);



    return 0; 
}

//PREGUNTA 1: ¿Qué significa decir que un objeto es una “instancia” de una clase?
// significa que fue creado a partir de esa clase y tiene sus propios valores, a pesar de tener la misma estructura y comportamiento definidos por la clase.

//PREGUNTA 2: ¿Qué problema evita el encapsulamiento?
//evita que los atributos de un objeto sean modificados de forma incorrecta o directa, protegiendo la integridad de los datos

//PREGUNTA 3: ¿Qué pasaría si no usas this-> cuando el nombre del parámetro y el atributo son iguales?
//l programa no puede diferenciar entre el atributo del objeto y el parámetro del método, se crea una confusión,
// por lo que se asigna el valor al parámetro en lugar del atributo, o el atributo queda sin modificarse, generando errores o valores incorrectos.

//PREGUNTA 4: ¿Por qué es útil tener constructores sobrecargados?
//Estos permiten crear objetos de distintas formas según la información disponible,
// facilitando la inicialización correcta de los atributos y evitando errores o valores no deseados.