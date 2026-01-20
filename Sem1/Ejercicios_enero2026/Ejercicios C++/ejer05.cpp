#include <iostream>

using namespace std;
int main(){

    cout<< "Promedio"<< endl;
float a1, a2, a3;
float promedio;

cout<< "Ingrese tres numeros"<< endl;
cout<< "Ingrese el primer numero: "<< endl;
cin>> a1;
cout<< "Ingrese el segundo numero: "<< endl;
cin>> a2;
cout<< "Ingrese el tercer numero: "<< endl;
cin>> a3;
promedio=(a1+a2+a3)/3;
cout<< "Resultado: "<< promedio; 

return 0;
}