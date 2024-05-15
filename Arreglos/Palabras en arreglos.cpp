/* Arreglos en C++: Escribe un programa en C++ que solicite al usuario que ingrese 5 
palabras y luego las imprima en el mismo orden en que fueron ingresadas. 
Este ejercicio lo hice bajo los efectos de la marihuana jaja*/

#include<iostream> 
#include<string>  //es la primera vez que uso esta libreria y la use para poder usar palabras en mi arreglo.
using namespace std;

int main(){
    string palabras[5];
    for(int i = 0; i < 5; i++){         // bucle para ingresar palabras
        cout << "Ingrese una palabra: "; cin >> palabras[i];
    }
   for(int i = 0; i < 5; i++){  //bucle para imprimir palabras en la terminal.
        cout << palabras[i] << endl;
   }

}