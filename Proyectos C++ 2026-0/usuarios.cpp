#include "usuarios.h"
#include <iostream>
#include <fstream>
#include<conio.h>

using namespace std;

bool login(){
    string usuario, password;
    string userFile, passFile;

    cout<<"Usuario: ";
    getline(cin, usuario);
    cout<<"Contra: ";
    char ch;
    password = "";

    while((ch = _getch()) != '\r'){
        if(ch == '\b'){
            if(!password.empty()){
                password.pop_back();
                cout << "\b \b";
            }
        } else {
            password += ch;
            cout << "*";
        }
    }

    cout << endl;

        ifstream archivo("usuarios.txt");

        if(!archivo){
            cout<<"No hay usuarios registrados.\n";
            return false;
        }

    string linea;

    while(getline(archivo, linea)){
    size_t pos = linea.find(",");

    if(pos != string::npos){
        userFile = linea.substr(0, pos);
        passFile = linea.substr(pos + 1);

        if(usuario == userFile && password == passFile){
            cout<<"Acceso concedido.\n";
            archivo.close();
            return true;
        }
    }
}

    archivo.close();
    cout<<"Usuario o contra incorrectos.\n";
    return false;
}

void registrarUsuario(){
    string usuario, password;

    cout<<"Nuevo usuario: ";
    getline(cin, usuario);
    cout<<"Nueva contra: ";
    char ch;
    password = "";

    while((ch = _getch()) != '\r'){ 
        if(ch == '\b'){ 
            if(!password.empty()){
                password.pop_back();
                cout << "\b \b";
            }
        } else {
            password += ch;
            cout << "*";
            }
        }         

cout << endl;

    ofstream archivo("usuarios.txt", ios::app);

    archivo << usuario << "," << password << endl;

    archivo.close();

    cout<<"Usuario registrado con exito.\n";
}

