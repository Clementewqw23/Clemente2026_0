#include <iostream>
using namespace std;

bool esPar(int num) {
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (esPar(n))
        cout << "El numero es PAR";
    else
        cout << "El numero es IMPAR";

    return 0;
}
