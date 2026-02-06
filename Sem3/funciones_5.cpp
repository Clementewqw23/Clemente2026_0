#include <iostream>
using namespace std;

int maximo(int arr[], int tam) {
    int mayor = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] > mayor)
            mayor = arr[i];
    }
    return mayor;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "El mayor es: " << maximo(arr, n);
    return 0;
}
