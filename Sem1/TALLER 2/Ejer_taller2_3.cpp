#include<iostream>
using namespace std;
int main(){
    int nota;
    cout<<"Digite la nota"<< endl;
    cin>> nota;
    if (nota>=90){
        cout<<"Excelente";
    } else if(nota>=70){
        cout<<"Aprobado";
    } else{
        cout<<"Reprobado";

    }
    return 0;
}