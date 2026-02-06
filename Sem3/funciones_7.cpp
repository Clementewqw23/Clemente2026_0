#include <iostream>
using namespace std;

bool validarOpcion(int op, int min, int max) {
    if (op >= min && op <= max)
        return true;
    else
        return false;
}

int main() {
    int opcion;
    cout << "Ingrese una opcion (1-5): ";
    cin >> opcion;

    if (validarOpcion(opcion, 1, 5))
        cout << "Opcion valida";
    else
        cout << "Opcion invalida";

    return 0;
}
