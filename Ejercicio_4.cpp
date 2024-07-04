//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

/*4) Diseñe la función que calcula la sumatoria de N elementos enteros almacenados en un vector. 
También diseñe la función que calcule el promedio de esos elementos*/

#include<iostream>

using namespace std;

// Función para calcular la sumatoria de los elementos de un vector
int Suma(int x[], int total){
    int suma = 0;
    for (int k = 0; k < total; k++)
    {
        suma += x[k];
    }
    return suma;
}

// Función para calcular el promedio de los elementos de un vector
double Prom(int x[], int total){
    if (total == 0) return 0;  
    int suma = Suma(x, total);
    return (double)suma / total;
}

int main(){

    int x[] = {15, 24, 14, 4, 2, 7, 88, 1, 76, 32, 21};

    int total = sizeof(x) / sizeof(int);

    int suma = Suma(x, total);
    cout << endl << "Sumatoria de los elementos del vector: " << suma << endl;

    double prom = Prom(x, total);
    cout << endl << "Promedio de los elementos del vector: " << prom << endl;
    return 0;
}