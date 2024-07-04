//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

//2) Diseñe el programa que calcule el tamaño del vector de enteros utilizando el operador sizeof

#include<iostream>

using namespace std;

// Función para ordenar un vector usando el algoritmo de ordenación secuencial
void OrdenSecuencial(int x[], int total){
    for (int k = 0; k < total; k++)
    {
        for (int j=k+1; j < total; j++)
        {
            if (x[k] > x[j])
            {
             int aux = x[k];
             x[k] = x[j];
             x[j] = aux;
            }
        }
    }
}

// Función para imprimir el contenido de un vector
void ImprimeVector(int x[], int total){
    for (int k = 0; k < total; k++)
    {
        cout<<endl<<x[k];
    }
}

int main(){

    int x[] = {10, 6, 34, 4, 2, 7, 20, 1, 85, 33, 39};

    cout<<endl<<"Tamaño del vector "<<sizeof(x);

    cout<<endl<<"Tamaño de un entero "<<sizeof(int);

    int MAX = sizeof(x) / sizeof(int);

    
    cout<<endl<<"Vector Original";
    ImprimeVector(x, MAX); 
    cout<<endl<<endl<<"Vector Ordenado";
    OrdenSecuencial(x, MAX);
    ImprimeVector(x, MAX); 

    return 0;
}