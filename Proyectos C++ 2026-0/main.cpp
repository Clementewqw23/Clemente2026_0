#include<iostream>
#include"usuarios.h"
#include"citas.h"


using namespace std;

int main(){
bool acceso=false;
while(!acceso){
    cout<<"1. Iniciar sesion\n";
    cout<<"2. Registrar usuario\n";
    cout<<"Seleccione una opcion: ";
    int opcionLogin;
    cin>>opcionLogin;
    cin.ignore();

    if(opcionLogin==2){
        registrarUsuario();
    }
    acceso= login();

    if(!acceso){
        cout<<"Intente nuevamente. \n\n";
    }
}

    Cita* citas=nullptr;
    int totalCitas=0;
    load_archivo(citas, totalCitas);
    int opcion;
    do{
        cout<<"\n===== Sistema de Gestion de citas Veterinaria =====\n";
        cout<< "1. Registrar cita\n";
        cout<< "2. Mostrar citas\n";
        cout<<"3. Buscar por nombre\n";
        cout<<"4. Modificar cita\n";
        cout<<"5. Salir\n";
        cout<<"Seleccione una opcion: ";
        cin>> opcion;
        cin.ignore();

        switch(opcion){
            case 1:
            agregarCita(citas, totalCitas);
            break;
            case 2:
            if(totalCitas==0){
                cout<<"No hay citas registradas.\n";
            }else{
                cout<<"\n===Citas registradas===\n";
                for(int i=0; i<totalCitas; i++){
                    mostrarCita(citas[i]);
                }
            } 
            break;

            case 3:
            buscarPorNombre(citas, totalCitas);
            break;

            case 4:
                modificarCita(citas, totalCitas);
            break;

            case 5:
            guardarEnArchivo(citas, totalCitas);
            cout<<"Saliendo del Sistema..."<< endl;
            break;
            default:
            cout<<"Opcion no valida"<< endl;
        }
    } while(opcion!=5);

    delete[]citas;
    return 0;
}


