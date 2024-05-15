/*Escribe un programa en C++ que solicite al usuario que ingrese 5 números enteros. Almacena estos números en un arreglo. 
Luego, calcula la suma de todos los elementos en el arreglo e imprime el resultado.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[5], suma = 0;

    cout << "Ingresa 5 valores: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
    }
    for(int i = 0; i < 5; i++){
        suma += numeros[i];
    }
    cout << "La suma de todos los valores del arreglos es: " << suma << endl;
}