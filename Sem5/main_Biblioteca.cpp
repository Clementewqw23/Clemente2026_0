#include <iostream>
#include <string>
#include <cctype>
#include<fstream>
#include"biblioteca.h"
using namespace std;

/*==================== BITÁCORA IA ====================
Herramienta IA usada: ChatGPT

Objetivo del uso:
- Estructurar el sistema de biblioteca
- Usar punteros y memoria dinámica correctamente

Preguntas que hice a la IA:
1) bibliotecas a utilizar al poner diferentes archivos
2) cual era el comando para poner en la terminar para el uso de varios archivos?
3) ¿Cómo se relaciona mi proyecto con este trabajo?

Qué sugerencias acepté:
- Uso de punteros para buscar libros
- - Reasignación manual de arreglos dinámicos para permitir crecimiento de datos sin usar vector.


Qué sugerencias rechacé:
- Uso de vector (no permitido)

Test manual diseñado por mí:
Entrada:
1) Agregar libro (id 1)
2) Agregar usuario (id 1)
3) Prestar libro
4) Listar préstamos
Salida esperada:
- Libro no disponible
- Préstamo mostrado correctamente
*/

int main() {
    inicializar();
    cargarLibrosDesdeArchivo();
    menu();
    guardarLibrosEnArchivo();
    liberarMemoria();
    return 0;
}


