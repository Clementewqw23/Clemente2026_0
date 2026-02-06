#include <iostream>
using namespace std;

int main() {
    int asistencia[3][5];
    int total_aula = 0;

    for (int i = 0; i < 3; i++) {
        cout << "\nEstudiante " << i + 1 << endl;

        for (int j = 0; j < 5; j++) {
            cout << "Dia " << j + 1 << " (1 = asistio, 0 = falto): ";
            cin >> asistencia[i][j];
        }
    }

    cout << "\n--- RESULTADOS ---\n";

    for (int i = 0; i < 3; i++) {
        int total_estudiante = 0;

        for (int j = 0; j < 5; j++) {
            total_estudiante += asistencia[i][j];
            total_aula += asistencia[i][j];
        }

        cout << "Estudiante " << i + 1
             << " - Asistencias: " << total_estudiante;

        if (total_estudiante == 5) {
            cout << " (Asistencia perfecta)";
        }

        cout << endl;
    }

    cout << "\nTotal de asistencias del aula: "
         << total_aula << endl;

    return 0;
}
