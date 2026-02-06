#include<iostream>
using namespace std;
int main(){
    string dia[7];
    int tem[7];
    int conta_tem=0;
    int temp_max;
    int temp_min;
    string dia_max, dia_min;
   int i;
    for(i = 0; i < 7; i++){
        cout<<"Ingrese el dia: "<< endl;
        cin>> dia[i];
        cout<<"Ingrese temperatura del dia: "<< endl;
        cin>> tem[i];
        if(i==0){
            temp_max=tem[i];
            temp_min = tem[i];
            dia_max = dia[i];
            dia_min = dia[i];
        }    
        if(tem[i]< temp_min){
            temp_min = tem[i];
            dia_min = dia[i];
        }
        if(tem[i] > temp_max){
            temp_max = tem[i];
            dia_max = dia[i];
        }
         if(tem[i] > 30){
            conta_tem= conta_tem + 1;    
        }

    }
    cout<< "Temperatura Maxima: "<< temp_max<<"("<<dia_max<<")"<< endl;
        cout<< "Temperatura minima: "<< temp_min<<"("<< dia_min<<")"<< endl;
        cout<< "Dias mayores a 30: "<< conta_tem;

    return 0;
}

