#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include<string>
using namespace std;

struct Libro {
    int id;
    string titulo;
    string autor;
    int anio;
    bool disponible;
};

struct Usuario {
    int id;
    string nombre;
    string carrera;
};

struct Prestamo {
    int idLibro;
    int idUsuario;
};

//funciones
void guardarLibrosEnArchivo();
void cargarLibrosDesdeArchivo();
void inicializar();
void liberarMemoria();
void menu();

void agregarLibro();
void listarLibros();
Libro* buscarLibroPorId(int id);

void agregarUsuario();
void listarUsuarios();

void prestarLibro();
void devolverLibro();
void listarPrestamos();

#endif