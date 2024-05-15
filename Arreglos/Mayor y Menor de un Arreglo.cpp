/*Escribe un programa en C++ que solicite al usuario que ingrese 5 números enteros. 
Almacena estos números en un arreglo. Luego, encuentra y muestra el número mayor y 
el número menor de los números ingresados.*/

#include <iostream>

using namespace std;
int main() {
  int numeros[5], elemento;

  for(int i = 0; i < 5; i++){
    cout << "Introduce un valor: "; cin >> numeros[i];
  }
  
  int mayor = numeros[0], menor = numeros[0];
  
  for(int i = 0; i < 5; i++){
    elemento = numeros[i];
    
    if(elemento > mayor){
      mayor = elemento;
    }
    
    if(elemento < menor){
      menor = elemento;
    }
  }
  
  cout << "\nEl numero mayor es: " << mayor << endl;
  
  cout << "El numero menor es: " << menor << endl;
}