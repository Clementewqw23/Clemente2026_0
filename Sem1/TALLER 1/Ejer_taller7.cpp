#include<iostream>
#include<cmath>
using namespace std;
int main(){
float L1, L2, L3, radio;
float semiperimetro, area;
    cout<<"TRIANGULO CIRCUNSCRITO"<< endl;
cout<<"Ingrese el lado1"<< endl;
cin>> L1;
while(L1<=0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> L1;
}
cout<<"Ingrese el lado2"<< endl;
cin>> L2;
while(L2<=0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> L2;
}
cout<<"Ingrese el lado3"<< endl;
cin>> L3;
while(L3<=0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> L3;
}
cout<<"Ingrese el radio"<< endl;
cin>> radio;
while(radio<=0){
    cout<< "ingrese un numero positivo "<< endl;
    cin>> radio;
}
semiperimetro=(L1+L2+L3)/2;
area=semiperimetro*radio;
cout<<"RESULTADOS:"<< endl;
cout<<"Lado 1:"<< L1<< endl;
cout<<"Lado 2:"<< L2<< endl;
cout<<"Lado 3:"<< L3<< endl;
cout<<"radio:"<< radio<< endl;
cout<<"Area:"<< area<< endl;
cout<<"Semiperimetro:"<< semiperimetro<< endl;
}