//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

/*7) Diseñe la función que invierte el orden de los elementos de un vector.
Por ejemplo, si el vector tiene estos elementos: 10, 3, 6, 78, 19, 100, 14
la función debe invertirlos de esta forma:  14, 100, 19,  78, 6, 3, 10*/

#include <iostream>

using namespace std;

// Función para invertir el orden de los elementos de un vector
void InvertirVector(int x[], int total) {
    for (int i = 0; i < total / 2; ++i) {
        int temp = x[i];
        x[i] = x[total - i - 1];
        x[total - i - 1] = temp;
    }
}

// Función para imprimir un vector
void ImprVector(int x[], int total) {
    for (int i = 0; i < total; ++i) {
        cout << x[i] << " ";
    }
}

int main() {
    int x[] = {5, 12, 4, 78, 16, 55, 20};
    int total = sizeof(x) / sizeof(x[0]);

    cout << "Vector Original: ";
    ImprVector(x, total);

    InvertirVector(x, total);

    cout << endl << "Vector Invertido: ";
    ImprVector(x, total);

    return 0;
}