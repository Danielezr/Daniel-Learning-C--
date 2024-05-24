// Escribe un programa en C++ que utilice el algoritmo de ordenamiento de burbuja para ordenar un arreglo de números flotantes en orden ascendente. 
// El programa debe:
// 1. Pedir al usuario que ingrese la cantidad de elementos del arreglo.
// 2. Solicitar al usuario que ingrese los elementos del arreglo.
// 3. Usar el algoritmo de ordenamiento de burbuja para ordenar el arreglo en orden ascendente.
// 4. Imprimir el arreglo ordenado.
#include<iostream>

using namespace std;

void bubbleSortFloat(float arreglo[], int elementos){
    float aux;
    for(int i = 0; i < elementos - 1; i++){
        for(int j = 0; j < elementos - i - 1; j++){
            if(arreglo[j] > arreglo[j + 1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    cout << "El orden ascendente es: " << endl;
    for(int i = 0; i < elementos; i++){
        cout << arreglo[i] << endl;
    }
}
int main(){
    int elementos;
    
    cout << "Introduce el numero de elementos: ";
    cin >> elementos;

    float arreglo[100];

    for(int i = 0; i < elementos; i++){
        cout << "Introduce un valor:";
        cin >> arreglo[i];
    }

    bubbleSortFloat(arreglo, elementos);
}
