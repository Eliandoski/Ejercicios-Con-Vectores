//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

//1) Diseñe la función que ordene un vector usando el algoritmo de ordenación secuencial

#include<iostream>
#include<time.h>
#include<cstdlib>

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

    const int MAX = 10; 
    int x[] = {15, 3, 7, 9, 2, 4, 6, 8, 10, 1};    

    cout<<endl<<"Vector Original";
    ImprimeVector(x, MAX); 
    
    cout<<endl<<endl<<"Vector Ordenado";
    OrdenSecuencial(x, MAX);
    ImprimeVector(x, MAX); 

    return 0;
}