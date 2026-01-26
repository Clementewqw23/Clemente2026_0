#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float base, altura, area;
    float perimetro, diagonal;
    cout<<"RECTANGULO"<< endl;
    cout<<"Ingrese la base del rectangulo:"<< endl;
    cin>> base;
    while(base<=0){
        cout<<"Ingrese un numero postivo:"<< endl;
        cin>> base;
    }
     cout<<"Ingrese la altura del rectangulo:"<< endl;
     cin>>altura;
    while(altura<=0){
        cout<<"Ingrese un numero postivo:"<< endl;
        cin>> altura;
    }
    area= base*altura;
    perimetro=2*(base+altura);
    diagonal=sqrt((base*base)+(altura*altura));
    cout<<"Los resultados son:"<< endl;
    cout<<"Base:"<< base<< endl;
    cout<<"altura:"<< altura<< endl;
    cout<<"area:"<< area<< endl;
    cout<<"perimetro:"<< perimetro<< endl;
    cout<<"diagonal:"<< diagonal<< endl;
  
return 0;
}