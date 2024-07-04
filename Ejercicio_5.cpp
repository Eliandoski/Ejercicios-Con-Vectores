//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

/*5)  El vector X tiene los siguientes elementos: {10, 12, 6, 7, 15, 7, 9, 19}
Diseñe la función que imprime una barra vertical por cada elemento del vector. Por ejemplo:
* * * * * * * * * * (10)
* * * * * * * * * * * * (12)
* * * * * * (6)
* * * * * * * (7)
* * * * * * * * * * * * * * *(15) */

#include<iostream>

using namespace std;

// Función para imprimir barras verticales según el valor de cada elemento del arreglo
void ImprimirBarras(int x[], int size) {
    char caracter = '|'; 

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < x[i]; ++j) {
            cout << caracter;
        }
        cout << " (" << x[i] << ")" << endl;
    }
}

int main() {
    int x[] = {5, 7, 2, 7, 1, 3, 10, 12};
    int size = sizeof(x) / sizeof(x[0]);  

    ImprimirBarras(x, size);

    return 0;
}