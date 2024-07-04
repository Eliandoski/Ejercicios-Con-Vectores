//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

//6) Se tiene un vector de N nombres de personas. Diseñe la función que retorne el nombre de una persona aleatoriamente

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para obtener un nombre aleatorio de un vector de nombres
string NombAleatorio(string nombres[], int total) {
    int indiceAleatorio = rand() % total;
    return nombres[indiceAleatorio];
}

int main() {
    srand(time(NULL));

    string nombres[] = {"Elian", "Juan", "Marcos", "Julian", "Matias", "Manuel", "Pablo"};

    int total = sizeof(nombres) / sizeof(nombres[0]);

    string nombAleatorio = NombAleatorio(nombres, total);
    cout << "Nombre Aleatorio: " << nombAleatorio << endl;
    
    return 0;
}