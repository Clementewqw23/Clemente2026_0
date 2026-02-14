#include "validaciones.h"
#include <iostream>
#include <cctype>

using namespace std;

bool esBisiesto(int anio){
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool validarFecha(string fecha){
    if(fecha.length() != 10) return false;
    if(fecha[2] != '/' || fecha[5] != '/') return false;

    int dia = stoi(fecha.substr(0,2));
    int mes = stoi(fecha.substr(3,2));
    int anio = stoi(fecha.substr(6,4));

    if(mes < 1 || mes > 12) return false;

    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    // Febrero y año bisiesto
    if(mes == 2 && esBisiesto(anio)){
        diasMes[1] = 29;
    }

    if(dia < 1 || dia > diasMes[mes - 1]){
        return false;
    }

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
    int contadorDigitos = 0;

    for(char c : numero){
        if(!isdigit(c)){
            cout << "Numero invalido. Solo debe contener digitos.\n";
            return false;
        }
        contadorDigitos++;
    }

    if(contadorDigitos != 9){
        cout << "Numero invalido. Debe tener exactamente 9 digitos.\n";
        return false;
    }

    return true;
}

