/*Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en orden inverso—del último al primer elemento.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[6]; 
    for(int i = 0; i < 6; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
    }
    for(int i = 5; i >= 0; i--){
        cout << numeros[i] << endl;
    }
}