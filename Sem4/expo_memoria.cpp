#include <iostream>
using namespace std;

// Función que reserva memoria dinámica
int* reservarMemoria(int n) {
    int* arreglo = new int[n];
    return arreglo;
}

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int* datos = reservarMemoria(n);

    // Uso de la memoria    
    for (int i = 0; i < n; i++) {
        datos[i] = i + 1;
        cout << datos[i] << " ";
    }

    // Liberar memoria
    delete[] datos;

    return 0;
}
