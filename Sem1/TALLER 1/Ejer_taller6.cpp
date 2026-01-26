#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"TRIANGULO INSCRITO:"<< endl;
    float L1, L2, L3;
    float radio, area;
    cout<< "ingrese el lado 1:"<< endl;
    cin>> L1;
     while(L1<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> L1;
    }
    cout<< "ingrese el lado 2:"<< endl;
    cin>> L2;
     while(L2<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> L2;
    }
    cout<< "ingrese el lado 3:"<< endl;
    cin>> L3;
     while(L3<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> L3;
    }
    cout<< "ingrese el radio:"<< endl;
    cin>> radio;
     while(radio<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> radio;
    }
    
    area=(L1*L2*L3/(4*radio));
    cout<<"RESULTADOS:"<< endl;
    cout<<"Lado 1:"<< L1<< endl;
    cout<<"Lado 2:"<< L2<< endl;
    cout<<" Lado 3:"<< L3<< endl;
    cout<<"Radio:"<< radio<< endl;
    cout<<"Area:"<< area<< endl;
    return 0;
}