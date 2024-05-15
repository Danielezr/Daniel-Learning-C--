/* Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[5], suma = 0, mayor = 0;
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
        suma += numeros[i];
        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    bool esIgual = false;
    for(int i = 0; i < 5; i++){
        
        if(mayor == (suma - numeros[i])){  
            esIgual = true;
        }
    }
    if(esIgual){
        cout << "El numero " << mayor << " es igual a la suma de los demas numeros.";
    }
    else{
        cout << "No hay ningun valor equivalente a la suma del resto de numeros";
    }
}