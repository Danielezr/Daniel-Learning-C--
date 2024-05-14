// Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
#include <iostream>

using namespace std;

int main()
{
    // Inicializacion del primer arreglo
    int arreglo1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // Inicializacion del segundo arreglo
    int arreglo2[3][3] = {
        {3, 5, 3},
        {92, 43, 12},
        {32, 6, 3}};
    
    int suma[3][3]; // Arreglo llamado suma para guardar la suma de los valores

    // Bucle para almacenar la suma de los valores de ambos arreglos
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma[i][j] = arreglo1[i][j] + arreglo2[i][j];
        }
    }
    // Bucle para imprimir la suma de los arreglos
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << suma[i][j] << " ";
        }
        cout << endl;
    }
}