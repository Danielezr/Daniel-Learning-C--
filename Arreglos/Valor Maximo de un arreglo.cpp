/*Escribe un programa en C++ que solicite al usuario que ingrese 5 números enteros. 
Almacena estos números en un arreglo. Luego, encuentra y muestra el valor máximo en el arreglo.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[5], valorMaximo = 0;

    cout << "Ingresa 5 valores: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
    }
    for(int i = 0; i < 5; i++){
        if(numeros[i] > valorMaximo){
            valorMaximo = numeros[i];
        }
    }
    cout << "El valor maximo es: " << valorMaximo;
}