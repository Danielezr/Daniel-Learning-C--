/* Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena
y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla. */

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[100];
    int longitud;

    cout << "Introduce una palabra: ";
    cin.getline(palabra, 100, '\n');

    longitud = strlen(palabra);

    if(longitud > 10){
        cout << "La palabra " << palabra << " supera los 10 caracteres." << endl;
    }
    else{
        cout << "La palabra no supera los 10 caracteres." << endl;
    }
}