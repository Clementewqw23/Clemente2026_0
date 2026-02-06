#include <iostream>
using namespace std;

int minimo(int arr[], int tam) {
    int menor = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] < menor)
            menor = arr[i];
    }
    return menor;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "El menor es: " << minimo(arr, n);
    return 0;
}
