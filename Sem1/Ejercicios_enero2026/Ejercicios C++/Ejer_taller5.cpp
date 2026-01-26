#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"TRIANGLULO"<< endl;
    float L1, L2, b;
    float h, area, perimetro;
    cout<< "Ingrese el lado 1:"<< endl;
    cin>> L1;
     while(L1<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> L1;
    }
    cout<< "Ingrese el lado 2:"<< endl;
    cin>>L2;
     while(L2<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> L2;
    }
    cout<< "Ingrese la base:"<< endl;
    cin>> b;
     while(b<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> b;
    }
    cout<< "Ingrese la altura:"<< endl;
    cin>> h;
     while(h<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> h;
    }
    area=(b*h)/2;
    perimetro= L1+L2+b;
    cout<<"RESULTADOS:"<< endl;
    cout<<"Lado 1:"<< L1<< endl;
    cout<<"Lado 2:"<< L2<< endl;
    cout<<" Base:"<< b<< endl;
    cout<<"Altura:"<< h<< endl;
    cout<<"Area:"<< area<< endl;
    cout<<"Perimetro:"<< perimetro<< endl;
    return 0;
}