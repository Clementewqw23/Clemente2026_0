#include <iostream>
using namespace std;

bool buscar(int arr[], int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (arr[i] == valor)
            return true;
    }
    return false;
}

int main() {
    int n, x;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Valor a buscar: ";
    cin >> x;

    if (buscar(arr, n, x))
        cout << "El valor existe";
    else
        cout << "El valor NO existe";

    return 0;
}
