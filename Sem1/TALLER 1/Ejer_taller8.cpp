#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float L1,L2,L3;
    float semiperimetro, area;
    cout<<"TRIANGULO FORMULA DE HERON"<< endl;
    cout<<"Ingrese el lado 1:"<< endl;
    cin>> L1;
    while(L1<0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> L1;
}
    cout<<"Ingrese el lado 2:"<< endl;
    cin>> L2;
    while(L2<0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> L2;
}
    cout<<"Ingrese el lado 3:"<< endl;
    cin>> L3;
    while(L3<0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> L3;
}
semiperimetro=(L1+L2+L3)/2;
area= sqrt(semiperimetro*(semiperimetro-L1)*(semiperimetro-L2)*(semiperimetro-L3));
cout<<"RESULTADOS:"<< endl;
cout<<"Lado 1:"<< L1<< endl;
cout<<"Lado 2:"<< L2<< endl;
cout<<"Lado 3:"<< L3<< endl;
cout<<"Area:"<< area<< endl;
cout<<"Semiperimetro:"<< semiperimetro<< endl;
return 0;
}