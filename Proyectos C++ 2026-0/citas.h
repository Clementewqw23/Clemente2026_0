#ifndef CITAS_H
#define CITAS_H
#include<string>
using namespace std;

struct Cita{
    string nombreCliente;
    string nombreMascota;
    string tipomascota;
    string fecha;
    string hora;
    string numero_cel;
    string problema;
};

void agregarCita(Cita* &citas, int &n);
void guardarEnArchivo(Cita* citas, int n);
void load_archivo(Cita* &citas, int &n);
void mostrarCita(const Cita & c);
void buscarPorNombre(Cita citas[], int n);
void modificarCita(Cita citas[], int &n);
#endif