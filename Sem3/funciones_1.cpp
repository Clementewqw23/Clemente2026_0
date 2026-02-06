#include <iostream>
using namespace std;

int mayor(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    cout << "El mayor es: " << mayor(num1, num2);
    return 0;
}
