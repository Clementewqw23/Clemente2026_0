#include<iostream>
using namespace std;
int main(){
    int opcion;
    cout<<"Digite una opcion(1-4)"<< endl;
    cin>> opcion;
    switch(opcion){
        case 1:
        cout<<"Opcion 1 seleccionada"<< endl;
        cout<<"Suma"<< endl;
        break;
        case 2:
        cout<<"Opcion 2 seleccionada"<< endl;
        cout<<"Resta"<< endl;
        break;
        case 3:
        cout<<"Opcion 3 seleccionada"<< endl;
        cout<<"Multiplicar"<< endl;
        break;
        case 4:
        cout<<"Opción 4 seleccionada"<< endl;
        cout<<"Dividid"<< endl;
        break;
        default:
        cout<<"Opcion no validad";
    }
    return 0;
}