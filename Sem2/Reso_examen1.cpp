#include <iostream>
using namespace std;

int main(){
int num, cant_num;
    int maximo, minimo;

    int suma_pares_pos = 0, contador_pares_pos = 0;
    int contador_primos = 0;
    int mayor_digito_impares= 0;
    bool existe_digitos_impares= false;

    cout<<"Ingrese la cantidad de numeros: ";
    cin>>cant_num;

    // lectura del primer numero
    cin>> num;
    maximo = minimo = num;

    for(int i=1; i<= cant_num; i++)

        if(i>1){
            cin>> num;

        // maximo y minimo
        if (num>maximo) maximo = num;
        if (num<minimo) minimo = num;

        // numeros primos
        if(num>1){
            bool es_primo = true;
            for( int d=2; d<= num -1; d++){
                if( num% d==0){
                    es_primo= false;
                }
            }
            if(es_primo){
                contador_primos++;
            
        }

        // num pares positivos
        if( num>0 && num%2==0){
            suma_pares_pos += num;
            contador_pares_pos++;
        }

        // digitos impares, pares
        int aux= abs(num);
        int cont_impares = 0, cont_pares= 0;

        while ( aux>0){
            int digito = aux % 10;
            if (digito %2==0)
            cont_pares++;
            else
            cont_impares++;
            aux/=10;
        }

        if(cont_impares > cont_pares){
            if (!existe_digitos_impares || num > mayor_digito_impares){
                mayor_digito_impares = num;
                existe_digitos_impares = true;
            }
        }
    }

    cout<<"\nMaximo: "<< maximo;
    cout<<"\nMinimo: "<< minimo;

    if(contador_primos > 0)
        cout<<"\nCantidad de numeros primos: "<< contador_primos;
    else
        cout<<"\nCantidad de primos: NO EXISTE";

        if(contador_pares_pos >0)
        cout<<"\nPromedio de numeros pares positivos: "
        << (float)suma_pares_pos / contador_pares_pos;
        else
        cout <<"\nPromedio de pares positivos: NO EXISTE";

        if(existe_digitos_impares)
        cout<<"\nMayor con mas digitos impares que pares: "
        << mayor_digito_impares;
        else
        cout<<"\nMayor con mas digitos impares que pares: NO EXISTE";

        return 0;
}
    
