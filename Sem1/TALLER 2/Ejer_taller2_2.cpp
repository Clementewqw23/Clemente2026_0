#include<iostream>
using namespace std;
int main(){
    int edad;
    cout<<"DIGITE SU EDAD"<< endl;
    cin>> edad;
    if (edad>=18){
        cout<<"Acceso permitido";
    }else{
        cout<<"Acceso denegado";
    }
    return 0;
}