#include <iostream>
using namespace std;

int sumaArreglo(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arreglo[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "La suma es: " << sumaArreglo(arreglo, n);
    return 0;
}
