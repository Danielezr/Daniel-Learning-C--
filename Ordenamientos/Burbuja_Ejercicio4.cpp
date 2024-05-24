// Escribe un programa en C++ que utilice el algoritmo de ordenamiento de burbuja para ordenar dos arreglos de números enteros por separado.
// Luego, combina ambos arreglos ordenados en un solo arreglo también ordenado.
// El programa debe:
// 1. Pedir al usuario que ingrese la cantidad de elementos de cada arreglo.
// 2. Solicitar al usuario que ingrese los elementos de cada arreglo.
// 3. Usar el algoritmo de ordenamiento de burbuja para ordenar ambos arreglos en orden ascendente.
// 4. Combinar ambos arreglos ordenados en un solo arreglo también ordenado.
// 5. Imprimir el arreglo combinado ordenado.
#include<iostream>

using namespace std;

void bubbleSort(int arreglo[], int elementos){
    int aux;
    for(int i = 0; i < elementos - 1; i++){
        for(int j = 0; j < elementos - i - 1; j++){
            if(arreglo[j] > arreglo[j + 1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
}    
void mergeArrays(int arreglo1[], int elementos1, int arreglo2[], int arr_combinados[]){
    for(int i = 0; i < 5; i++){
        arr_combinados[i] = arreglo1[i];
    }
    for(int i = 0; i < 5; i++){
        arr_combinados[elementos1 + i] = arreglo2[i];
    }
    bubbleSort(arr_combinados, 10);
    for(int i = 0; i < 10; i++){
        cout << arr_combinados[i] << endl;
    }
}
int main(){
    int arreglo1[5];
    int arreglo2[5];
    int arr_combinados[10];
    cout << "Primer arreglo: \n";
    for(int i = 0; i < 5; i++){
        cout << "Ingresa un valor: ";
        cin >> arreglo1[i];
    }
    cout << "Segundo arreglo: \n";
    for(int i = 0; i < 5; i++){
        cout << "Ingresa un valor: ";
        cin >> arreglo2[i];
    }
    
    bubbleSort(arreglo1, 5);
    bubbleSort(arreglo2, 5);

    mergeArrays(arreglo1, 10, arreglo2, arr_combinados);

}