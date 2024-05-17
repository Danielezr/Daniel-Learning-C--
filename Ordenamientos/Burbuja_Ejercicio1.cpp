//1.Pedir al usuario que ingresa la cantidad de elementos del arreglo.
//2.Solicitar al usuario que ingrese los elementos del arreglo.
//3.Usar el algoritmo de ordenamiento de burbuja para ordenar el arreglo
//4.Imprimir el arreglo ordenado

#include<iostream>

using namespace std;

int main(){
    int elementos;
    int aux;

    cout << "Ingresa la cantidad de elementos en el arreglo: ";
    cin >> elementos;

    int arreglo[elementos];

    for(int i = 0; i < elementos; i++){
        cout << "Introduce un valor: ";
        cin >> arreglo[i];
    }
    for(int i = 0; i < elementos; i++){
        for(int j = 0; j < elementos; j++){
            if(arreglo[j] > arreglo[j + 1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    cout << "El orden del arreglo es: ";
    for(int i = 0; i < elementos; i++){
        cout << arreglo[i] << " ";
    }
}