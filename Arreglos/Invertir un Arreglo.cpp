/* Escribe un programa en C++ que solicite al usuario que ingrese 5 números enteros. 
Almacena estos números en un arreglo. Luego, invierte el orden de los elementos en 
el arreglo y muestra el arreglo invertido en la consola. */

#include<iostream>

using namespace std;

int main (){
    int numeros[5];

    cout << "Introduce 5 valores: " << endl;  //Inicio del bucle para pedir valores al usuario
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": "; cin >> numeros[i];
    }
    int inicio = 0, fin = 4, tempt = 0; //variables para invartir los numeros
    while(inicio <= fin){   //inicio del bucle para invertir
        tempt = numeros[inicio];    // tempt es la variable temporal donde guardare el primero valor.
        numeros[inicio] = numeros[fin];  //asigno el ultimo valor a la variable del primer valor.
        numeros[fin] = tempt;  // asigno el primer valor al ultimo valor
        inicio++;  //decrementamos y aumentamos para poder recorrer todos los valores e invertirlos
        fin--;
    }
    for(int i = 0; i < 5; i++){
        cout << numeros[i] << endl; //bucle para imprimir nuestros numeros invertidos
    }
}