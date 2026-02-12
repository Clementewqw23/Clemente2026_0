#include "validaciones.h"
#include <iostream>
#include <cctype>

using namespace std;

bool validarFecha(string fecha){
    // formato esperado DD/MM/AAAA
    if(fecha.length() != 10) return false;
    if(fecha[2] != '/' || fecha[5] != '/') return false;

    for(int i=0; i<10; i++){
        if(i==2 || i==5) continue;
        if(!isdigit(fecha[i])) return false;
    }

    return true;
}

bool validarHora(string hora){
    // formato HH:MM
    if(hora.length() != 5) return false;
    if(hora[2] != ':') return false;

    if(!isdigit(hora[0]) || !isdigit(hora[1]) ||
       !isdigit(hora[3]) || !isdigit(hora[4]))
       return false;

    return true;
}

bool validarTelefono(string numero){
    if(numero.length() < 8) return false;

    for(char c : numero){
        if(!isdigit(c)) return false;
    }

    return true;
}
