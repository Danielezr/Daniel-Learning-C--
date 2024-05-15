/*Escribe un programa en C++ que solicite al usuario que ingrese 5 números enteros. 
Almacena estos números en un arreglo. Luego, ordena los números en el arreglo de 
menor a mayor utilizando cualquier algoritmo de ordenamiento que desees (por ejemplo,
el método de burbuja o el método de selección). Finalmente, muestra los números ordenados en la consola.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[5], tempt = 0;

    cout << "Introduce 5 valores: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(numeros[i] > numeros[j]){
                tempt = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = tempt;
            }
        }
    }
}