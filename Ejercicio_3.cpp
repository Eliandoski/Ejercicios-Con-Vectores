//Estudiante: Cifuentes González Elian
//Fecha de entrega: 03/07/2024
//Curso: 1ro de TI

//3) Diseñe la función que determine si un entero existe dentro de un vector de enteros

#include<iostream>

using namespace std;

// Función para determinar si un entero existe dentro de un vector de enteros
bool ExisteEnVector(int x[], int total, int numero){
    for (int k = 0; k < total; k++)
    {
        if (x[k] == numero)
        {
            return true;  
        }
    }
    return false;  
}

// Función para imprimir el contenido de un vector
void ImprimeVector(int x[], int total){
    for (int k = 0; k < total; k++)
    {
        cout << x[k] << " ";
    }
    cout << endl;
}

int main(){
    int x1[] = {10, 9, 24, 4, 2, 7, 15, 1, 24, 45, 12};
    int x2[] = {5, 2, 9, 8, 18, 8, 3};

    int total1 = sizeof(x1) / sizeof(int);
    int total2 = sizeof(x2) / sizeof(int);
    
    int num1 = 15;
    int num2 = 10;
    
    cout << "Vector Nº 1: ";
    ImprimeVector(x1, total1);

    cout << "Vector Nº 2: ";
    ImprimeVector(x2, total2);

    if (ExisteEnVector(x1, total1, num1)) {
        cout << "El número " << num1 << " se encuentra en el primer vector" << endl;
    } else {
        cout << "El número " << num1 << " no se encuentra en el primer vector" << endl;
    }

    if (ExisteEnVector(x2, total2, num2)) {
        cout << "El número " << num2 << " se encuentra en el segundo vector" << endl;
    } else {
        cout << "El número " << num2 << " no se encuentra en el segundo vector" << endl;
    }

    return 0;
}