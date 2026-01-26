#include <iostream>
using namespace std;
int main(){
    int hora;
    cout<<"Digite la hora"<< endl;
    cin>> hora;
    if(hora>=6 and hora<12){
        cout<<"Buenos dias"<< endl;
    } else if(hora>=12 and hora<=18){
        cout<<"Buenas tardes"<< endl;
    }else if(hora>18 and hora<24){
        cout<<"Buenas noches"<< endl;
    }
        else if(hora<=0 or hora>=24){
            cout<<"Hora no valida"<< endl;
        }
    
    
    return 0;

}