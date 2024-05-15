/* Escribe un programa en C++ que solicite al usuario que ingrese 10 números enteros. 
Almacena estos números en un arreglo. Luego, calcula y muestra la suma de los números 
pares y la suma de los números impares por separado. */

#include<iostream>

using namespace std;

int main(){
    int numeros[10];

    for(int i = 0; i < 10; i++){
        cout << "Ingresa un valor: "; cin >> numeros[i];
    }
    
    int par = 0, impar = 0, elemento;
    
    for(int i = 0; i < 10; i++){
        elemento = numeros[i];
        
        if(elemento % 2 == 0){
            par += elemento;
        }
        else{
            impar += elemento;
        }
    }
    cout << "\nLa suma de todos los numeros pares es: " << par << endl;

    cout << "La suma de todos los numeros impares es: " << impar;

    return 0;
}