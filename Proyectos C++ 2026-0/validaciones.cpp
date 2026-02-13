#include "validaciones.h"
#include <iostream>
#include <cctype>

using namespace std;

bool validarFecha(string fecha){
    if(fecha.length() != 10) return false;
    if(fecha[2] != '/' || fecha[5] != '/') return false;

    int dia = stoi(fecha.substr(0,2));
    int mes = stoi(fecha.substr(3,2));
    int anio = stoi(fecha.substr(6,4));

    if(dia < 1 || dia > 31) return false;
    if(mes < 1 || mes > 12) return false;
    if(anio < 2024) return false;

    return true;
}

bool validarHora(string hora){
    if(hora.length() != 5) return false;
    if(hora[2] != ':') return false;

    int h = stoi(hora.substr(0,2));
    int m = stoi(hora.substr(3,2));

    if(h < 0 || h > 23) return false;
    if(m < 0 || m > 59) return false;

    return true;
}

bool validarTelefono(string numero){
    if(numero.length() < 9){
    cout<< "Numero invalido"<< endl;
    return false;
}
    for(char c : numero){
        if(!isdigit(c)){
        cout<<"Numero invalido"<< endl;
        return false;
    }
}
    return true;
}
