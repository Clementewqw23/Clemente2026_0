#include<iostream>
using namespace std;
int main(){
    int gastos[7];
    int gastos_totales = 0;
    float promedio;
    int i;
    int conta_prom=0;

    cout<<"Ingrese gastos diarios: "<< endl;
    for(i = 0; i < 7; i++){
        cin>> gastos[i];
        gastos_totales = gastos_totales + gastos[i];
    }
    promedio=gastos_totales/7;
    cout<<"Gasto total: "<< gastos_totales << endl;
    cout<<"Promedio de gasto: "<< promedio << endl;
    for(i = 0; i < 7; i++){
        if(gastos[i] > promedio)
        conta_prom= conta_prom + 1;    
    }
    cout << conta_prom << endl;
    return 0;
}