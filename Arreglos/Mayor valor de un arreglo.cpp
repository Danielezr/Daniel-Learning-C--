/*Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.*/

#include<iostream>

using namespace std;

int main(){
    int numeros[5], mayor = 0;
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    cout << "El elemento mayor es: " << mayor;
}