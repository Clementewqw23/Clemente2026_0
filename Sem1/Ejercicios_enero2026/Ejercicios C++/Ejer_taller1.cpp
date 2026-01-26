#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float lado, area;
    float perimetro, diagonal;
    cout<<" CUADRADO"<< endl;
    cout<<" Ingrese el lado del cuadrado:" << endl;
    cin>> lado;
    while(lado<=0){
        cout<<" Ingrese un numero positvo:"<< endl;
        cin>> lado;
    }
    area= lado * lado;
    perimetro= lado * 4;
    diagonal= lado * sqrt(2);
    cout<<" Los resultados son los siguientes:"<< endl;
    cout<<"lado:"<< lado << endl;
    cout<<"Area:"<< area  <<endl;
    cout<<"perimetro:"<< perimetro<< endl;
    cout<<"diagonal:"<< diagonal<<endl;


return 0;

    
}