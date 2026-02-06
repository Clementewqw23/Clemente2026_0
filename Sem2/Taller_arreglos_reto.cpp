#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de dias: ";
    cin >> n;

    int ganancia;
    int racha_actual = 0;
    int racha_maxima = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Dia " << i << " (ganancia o perdida): ";
        cin >> ganancia;

        if (ganancia > 0) {
            racha_actual++;

            if (racha_actual > racha_maxima) {
                racha_maxima = racha_actual;
            }
        } else {
            racha_actual = 0; // se rompe la racha
        }
    }

    cout << "\nMayor racha positiva: "
         << racha_maxima << " dias consecutivos" << endl;

    return 0;
}
