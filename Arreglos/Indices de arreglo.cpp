/*Escribe un programa que lea de la entrada estándar un vector de números 
y muestre en la salida estándar los números del vector con sus índices asociados.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {10, 20, 30, 40, 50}, contador = 0;
    for(int i = 0; i < 5; i++){
        cout << contador << " -> " << numeros[i] << endl;
        contador++;
    }
    return 0;
}