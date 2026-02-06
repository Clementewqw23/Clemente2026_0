#include <iostream>
using namespace std;

float promedio(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return (float)suma / tam;
}

int main() {
    int n;
    cout << "Cantidad de notas: ";
    cin >> n;

    int notas[n];
    for (int i = 0; i < n; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
        while(notas[i]<0 && notas[i]>20){
            cout<<"Nota invalida"<< endl;
        }
    }

    cout << "El promedio es: " << promedio(notas, n);
    return 0;
}
