/*Escribe un programa en C++ que solicite al usuario que ingrese 5 números enteros. 
Almacena estos números en un arreglo. Luego, cuenta y muestra la cantidad de números 
pares y la cantidad de números impares en el arreglo.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[5], par = 0, impar = 0;
    
    cout << "Introduce 5 valores: " << endl;
    
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
    }
    
    for(int i = 0; i < 5; i++){
        
        if(numeros[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    
    cout << "En el arreglo hay " << par << " numeros pares." << endl;
   
    cout << "En el arreglo hay " << impar << " numeros impares." << endl;
}