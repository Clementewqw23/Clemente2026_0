#include <iostream>
using namespace std;

bool estaOrdenado(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (estaOrdenado(arr, n))
        cout << "El arreglo esta ordenado";
    else
        cout << "El arreglo NO esta ordenado";

    return 0;
}
