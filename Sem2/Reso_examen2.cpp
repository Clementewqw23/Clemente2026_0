#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int M, X;

    cout<<"Ingrese M: ";
    cin>> M;

    for(int i=1; i<= M; i++){
        cin >> X;

        int aux=abs(X);
        int suma_digitos=0;
        int cantidad_digitos=0;

        // calculo de suma de digitos y cantidad de digitos
        while(aux>0){
            int digito= aux %10;
            suma_digitos += digito;
            cantidad_digitos++;
            aux /=10;
        }

        //aplicacion de reglas con prioridad
        if(suma_digitos %2== 0 && X % 4== 0){
            cout<< "A"<< endl;
        }
        else if(cantidad_digitos % 2 != 0 && X % 6== 0){
            cout<< "B"<< endl;
        }
        else if(cantidad_digitos == 3){
            cout<< "C"<< endl;
        }
        else{
            cout<<"D"<< endl;
        }    
        
    }
    return 0;
}