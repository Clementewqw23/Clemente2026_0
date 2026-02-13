#include"citas.h"
#include<iostream>
#include<fstream>
#include"validaciones.h"

using namespace std;

void agregarCita(Cita* &citas, int &n){
    Cita* nuevo=new Cita[n+1];

    for(int i=0; i<n; i++){
        nuevo[i]=citas[i];
    }
     cout<<"Nombre completo del cliente: ";
        getline(cin, nuevo[n].nombreCliente);
        cout<<"Nombre de la mascota: ";
        getline(cin, nuevo[n].nombreMascota);
        cout<<"Tipo de mascota: ";
        getline(cin, nuevo[n].tipomascota);
        cout<<"Motivo de cita: ";
        getline(cin, nuevo[n].problema);
        do{
        cout<<"Fecha (DD/MM/AAAA): ";
        getline(cin, nuevo[n].fecha);

        if(!validarFecha(nuevo[n].fecha)){
            cout<<"Fecha invalida.\n";
            continue;
        }

        cout<<"Hora (HH:MM): ";
        getline(cin, nuevo[n].hora);

    if(!validarHora(nuevo[n].hora)){
        cout<<"Hora invalida.\n";
        continue;
    }

    if(!horarioDisponible(citas, n, nuevo[n].fecha, nuevo[n].hora)){
        cout<<"Ya existe una cita en esa fecha y hora.\n";
    }

}while(
    !validarFecha(nuevo[n].fecha) ||
    !validarHora(nuevo[n].hora) ||
    !horarioDisponible(citas, n, nuevo[n].fecha, nuevo[n].hora)
);

        do{
             cout<<"Numero de contacto: ";
        getline(cin, nuevo[n].numero_cel);
        }while(!validarTelefono(nuevo[n].numero_cel));
       
    delete[]citas;
    citas=nuevo;
    n++;
    ordenarCitas(citas, n);
    cout<<"Cita registrada con exito!\n";
}
void guardarEnArchivo(Cita* citas, int n){
    ofstream archivo("citas.txt");

    if(!archivo){
        cout<<"Error al abrir el archivo.\n";
        return;
    }

    for(int i=0; i<n; i++){
        archivo << citas[i].nombreCliente << endl;
        archivo << citas[i].nombreMascota << endl;
        archivo << citas[i].tipomascota << endl;
        archivo << citas[i].problema << endl;
        archivo << citas[i].fecha << endl;
        archivo << citas[i].hora << endl;
        archivo << citas[i].numero_cel << endl;
    }

    archivo.close();
}
void load_archivo(Cita* &citas, int &n){
    ifstream archivo("citas.txt");
    
    if(!archivo){
        return;
    }

    while(true){
        Cita temp;

        if(!getline(archivo, temp.nombreCliente)) break;
        getline(archivo, temp.nombreMascota);
        getline(archivo, temp.tipomascota);
        getline(archivo, temp.problema);
        getline(archivo, temp.fecha);
        getline(archivo, temp.hora);
        getline(archivo, temp.numero_cel);

        Cita* nuevo = new Cita[n+1];

        for(int i=0; i<n; i++){
            nuevo[i] = citas[i];
        }

        nuevo[n] = temp;

        delete[] citas;
        citas = nuevo;
        n++;
    }

    archivo.close();
    
}
void mostrarCita(const Cita & c){
    cout<< "Cliente:"<< c.nombreCliente << endl;
    cout<< "Mascota:"<< c.nombreMascota << "("<< c.tipomascota<<")" << endl;
    cout<<"Fecha"<< c.fecha<<" Hora:"<< c.hora<< endl;
    cout<<"Contacto:"<< c.numero_cel << endl;
    cout<<"Motivo de la cita:"<< c.problema << endl;
    cout<<"--------------------------"<< endl;
}
void buscarPorNombre(Cita citas[], int n){
    string nombreCliente;
    cout<<"Ingrese nombre a buscar: ";
    getline(cin,nombreCliente);

    for(int i=0; i<n; i++){
        if(citas[i].nombreCliente==nombreCliente){
            cout<<"\nCita encontrada:\n";
            cout<<"Nombre completo del cliente: "<< citas[i].nombreCliente;
            cout<<"\nNombre de la mascota: "<<citas[i].nombreMascota;
            cout<<"\nTipo de mascota: "<< citas[i].tipomascota;
            cout<<"\n Fecha de cita: " <<citas[i].fecha;
            cout<<"\n Hora de la cita: "<<citas[i].hora;
            cout<<"\n Contacto: "<<citas[i].numero_cel;
            cout<<"\n Motivo de la cita: "<<citas[i].problema;
            return;
        }
    }
    cout<<"No encontrado.\n";
}

void modificarCita(Cita citas[], int &n){
    string nombreCliente;
    cout<<"Ingrese el nombre del cliente a modificar: ";
    getline(cin, nombreCliente);
    for(int i=0; i<n; i++){
        if(citas[i].nombreCliente==nombreCliente){
            int opcionMod;

           cout<<"\nCita encontrada. Ingrese los nuevos datos:\n";
            mostrarCita(citas[i]);
            cout<<"\n¿Que desea modificar?\n";
            cout<<"1. Fecha\n";
            cout<<"2. Hora\n";
            cout<<"3. Numero de contacto\n";
            cout<<"4. Eliminar cita\n";
            cout<<"Seleccione opcion: ";
            cin>>opcionMod;
            cin.ignore();

            switch(opcionMod){
                case 1:
                    cout<<"Nueva fecha(DD/MM/AAAA): ";
                    getline(cin, citas[i].fecha);
                    break;
                case 2:
                    cout<<"Nueva hora (HH:MM): ";
                    getline(cin, citas[i].hora);
                    break;
                case 3:
                    cout<<"Nuevo numero de contacto: ";
                    getline(cin, citas[i].numero_cel);
                    break;
                case 4:
                    for(int j=i; j<n-1; j++){
                        citas[j]=citas[j+1];
                    }
                    n--;
                    cout<<"Cita eliminada correctamente.\n";
                    break;

                default:
                    cout<<"Opcion invalida.\n";
                    return;
            }
            cout<<"\nCita modificada con exito!\n";
            return; 
        }
    }
    cout<<"No se encontro la cita.\n";
}
bool horarioDisponible(Cita* citas, int n, string fecha, string hora){
    for(int i = 0; i < n; i++){
        if(citas[i].fecha == fecha && citas[i].hora == hora){
            return false;
        }
    }
    return true;
}
bool esPosterior(Cita a, Cita b){
    // Convertimos fecha a AAAAMMDD
    string fa = a.fecha.substr(6,4) + a.fecha.substr(3,2) + a.fecha.substr(0,2);
    string fb = b.fecha.substr(6,4) + b.fecha.substr(3,2) + b.fecha.substr(0,2);

    if(fa > fb) return true;
    if(fa < fb) return false;

    // Si la fecha es igual, comparamos hora
    return a.hora > b.hora;
}
void ordenarCitas(Cita* citas, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(esPosterior(citas[j], citas[j+1])){
                Cita temp = citas[j];
                citas[j] = citas[j+1];
                citas[j+1] = temp;
            }
        }
    }
}

