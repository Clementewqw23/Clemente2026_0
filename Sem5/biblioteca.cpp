#include"biblioteca.h"
#include<iostream>
#include<fstream>

using namespace std;

Libro* libros = nullptr;
int numLibros = 0, capLibros = 0;

Usuario* usuarios = nullptr;
int numUsuarios = 0, capUsuarios = 0;

Prestamo* prestamos = nullptr;
int numPrestamos = 0, capPrestamos = 0;

void inicializar() {
    capLibros = 5;
    libros = new Libro[capLibros];

    capUsuarios = 3;
    usuarios = new Usuario[capUsuarios];

    capPrestamos = 5;
    prestamos = new Prestamo[capPrestamos];
}

void guardarLibrosEnArchivo() {
    ofstream archivo("libros.txt");
    if (!archivo) return;

    for (int i = 0; i < numLibros; i++) {
        archivo << libros[i].id << "|"
                << libros[i].titulo << "|"
                << libros[i].autor << "|"
                << libros[i].anio << "|"
                << libros[i].disponible << endl;
    }
    archivo.close();
}

void cargarLibrosDesdeArchivo() {
    ifstream archivo("libros.txt");
    if (!archivo) return;

    while (!archivo.eof()) {
        Libro l;
        string disponibleStr;

        string idStr, anioStr;

        if (!getline(archivo, idStr, '|')) break;
        getline(archivo, l.titulo, '|');
        getline(archivo, l.autor, '|');
        getline(archivo, anioStr, '|');
        getline(archivo, disponibleStr);

        l.id = stoi(idStr);
        l.anio = stoi(anioStr);
        l.disponible = (disponibleStr == "1");

        if (numLibros == capLibros) {
            capLibros *= 2;
            Libro* nuevo = new Libro[capLibros];
            for (int i = 0; i < numLibros; i++)
                nuevo[i] = libros[i];
            delete[] libros;
            libros = nuevo;
        }

        libros[numLibros++] = l;
    }
    archivo.close();
}

void menu() {
    int op;
    do {
        cout << "\n--- BIBLIOTECA ---\n";
        cout << "1. Agregar libro\n";
        cout << "2. Listar libros\n";
        cout << "3. Agregar usuario\n";
        cout << "4. Listar usuarios\n";
        cout << "5. Prestar libro\n";
        cout << "6. Devolver libro\n";
        cout << "7. Listar prestamos\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> op;

        switch (op) {
            case 1: agregarLibro(); break;
            case 2: listarLibros(); break;
            case 3: agregarUsuario(); break;
            case 4: listarUsuarios(); break;
            case 5: prestarLibro(); break;
            case 6: devolverLibro(); break;
            case 7: listarPrestamos(); break;
        }
    } while (op != 0);
}

// -------- LIBROS --------
void agregarLibro() {
    if (numLibros == capLibros) {
        capLibros *= 2;
        Libro* nuevo = new Libro[capLibros];
        for (int i = 0; i < numLibros; i++)
            nuevo[i] = libros[i];
        delete[] libros;
        libros = nuevo;
    }

    Libro l;
    cout << "ID: "; cin >> l.id;

    if (buscarLibroPorId(l.id) != nullptr) {
        cout << "ID repetido.\n";
        return;
    }

    cin.ignore();
    cout << "Titulo: "; getline(cin, l.titulo);
    cout << "Autor: "; getline(cin, l.autor);
    cout << "Anio: "; cin >> l.anio;
    l.disponible = true;

    libros[numLibros++] = l;
    cout << "Libro agregado.\n";
}

void listarLibros() {
    for (int i = 0; i < numLibros; i++) {
        cout << libros[i].id << " | "
             << libros[i].titulo << " | "
             << libros[i].autor << " | "
             << (libros[i].disponible ? "Disponible" : "Prestado") << endl;
    }
}

Libro* buscarLibroPorId(int id) {
    for (int i = 0; i < numLibros; i++)
        if (libros[i].id == id)
            return &libros[i];
    return nullptr;
}

// -------- USUARIOS --------
void agregarUsuario() {
    if (numUsuarios == capUsuarios) {
        capUsuarios *= 2;
        Usuario* nuevo = new Usuario[capUsuarios];
        for (int i = 0; i < numUsuarios; i++)
            nuevo[i] = usuarios[i];
        delete[] usuarios;
        usuarios = nuevo;
    }

    Usuario u;
    cout << "ID: "; cin >> u.id;
    cin.ignore();
    cout << "Nombre: "; getline(cin, u.nombre);
    cout << "Carrera: "; getline(cin, u.carrera);

    usuarios[numUsuarios++] = u;
    cout << "Usuario agregado.\n";
}

void listarUsuarios() {
    for (int i = 0; i < numUsuarios; i++) {
        cout << usuarios[i].id << " | "
             << usuarios[i].nombre << " | "
             << usuarios[i].carrera << endl;
    }
}

// -------- PRESTAMOS --------
void prestarLibro() {
    int idLibro, idUsuario;
    cout << "ID Libro: "; cin >> idLibro;
    cout << "ID Usuario: "; cin >> idUsuario;

    Libro* l = buscarLibroPorId(idLibro);
    if (l == nullptr) {
        cout << "Libro no existe.\n";
        return;
    }
    if (!l->disponible) {
        cout << "Libro no disponible.\n";
        return;
    }

    if (numPrestamos == capPrestamos) {
        capPrestamos *= 2;
        Prestamo* nuevo = new Prestamo[capPrestamos];
        for (int i = 0; i < numPrestamos; i++)
            nuevo[i] = prestamos[i];
        delete[] prestamos;
        prestamos = nuevo;
    }

    prestamos[numPrestamos++] = {idLibro, idUsuario};
    l->disponible = false;
    cout << "Prestamo registrado.\n";
}

void devolverLibro() {
    int idLibro;
    cout << "ID Libro: "; cin >> idLibro;

    for (int i = 0; i < numPrestamos; i++) {
        if (prestamos[i].idLibro == idLibro) {
            Libro* l = buscarLibroPorId(idLibro);
            if (l) l->disponible = true;

            prestamos[i] = prestamos[numPrestamos - 1];
            numPrestamos--;
            cout << "Libro devuelto.\n";
            return;
        }
    }
    cout << "Prestamo no encontrado.\n";
}

void listarPrestamos() {
    for (int i = 0; i < numPrestamos; i++) {
        cout << "Libro ID: " << prestamos[i].idLibro
             << " | Usuario ID: " << prestamos[i].idUsuario << endl;
    }
}

// -------- MEMORIA --------
void liberarMemoria() {
    delete[] libros;
    delete[] usuarios;
    delete[] prestamos;
}