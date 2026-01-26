#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"TRAPECIO"<< endl;
    float B, b, h, area;
    cout<<"ingrese la base mayor:"<< endl;
    cin>> B;
    while(B<=0){
        cout<< "Ingrese un numero postivo"<< endl;
        cin>> B;
    }
    cout<<"Ingrese la base menor:"<< endl;
    cin>>b;
    while(B<=0){
        cout<< "Ingrese un numero postivo"<< endl;
        cin>> b;
    }
    cout<<" Ingrese la altura:"<< endl;
    cin>> h;
    while(B<=0){
        cout<< "Ingrese un numero postivo"<< endl;
        cin>> h;
    }
    area= ((B+b)*h)/2;
    cout<< "Los resultados son:"<< endl;
    cout<< "Base mayor:"<< B<< endl;
    cout<<"Base menor:"<< b<< endl;
    cout<<"Altura:"<< h<< endl;
    cout<<"Area:"<<area<< endl;
}