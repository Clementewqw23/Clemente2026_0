#include <iostream>

using namespace std;
int main(){

    cout<< "Promedio";
float a1, a2, a3;
float promedio;

cout<< "Ingrese tres numeros";
cout<< "Ingrese el primer numero: ";
cin>> a1;
cout<< "Ingrese el segundo numero: ";
cin>> a2;
cout<< "Ingrese el tercer numero: ";
cin>> a3;
promedio=(a1+a2+a3)/3;
cout<< "Resultado: "<< promedio; 

return 0;
}