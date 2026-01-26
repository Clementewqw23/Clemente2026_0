#include<iostream>
using namespace std;
int main(){
    int temperatura;
    cout<<"Digite la temperatura actual"<< endl;
    cin>> temperatura;
    if(temperatura>30){
        cout<<"Encender ventilador";
    } else {
        cout<<"Apagar ventilador";
    }
return 0;
    }