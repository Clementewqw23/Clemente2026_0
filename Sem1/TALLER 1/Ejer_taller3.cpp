#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"ROMBO"<< endl;
    float D, d, area;
    float lado, perimetro;
    cout<< "Ingrese la diagonal mayor:"<< endl;
    cin>> D;
    while(D<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> D;
    }
    cout<< "Ingrese la diagonal menor:"<< endl;
    cin>> d;
    while(d<=0){
        cout<< "Ingrese un numero positivo"<< endl;
        cin>> d;
    }
    area= (D*d)/2;
    lado= sqrt(((D/2)*(D/2))+((d/2)*(d/2)));
    perimetro=4*lado;
    cout<<"Los resultados son los siguientes:"<< endl;
    cout<<"Diagonal mayor:"<< D<< endl;
    cout<<"Diagonal menor:"<< d<< endl;
    cout<<"Area:"<< area<< endl;
    cout<<"Lado:"<< lado<< endl;
    cout<<"Perimetro:"<< perimetro<< endl;
    return 0;
}
   