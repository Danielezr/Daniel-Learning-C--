//Pedir al usuario una cadena de caractres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres.

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[30];
    char palabra2[30];
    int longitud;

    cout << "Introduce una cadena de caracteres: "; 
    cin.getline(palabra,30,'\n');

    longitud = strlen(palabra);

    for(int i = 0; i < longitud; i++){
        palabra2[i] = palabra[i];
    }
    for(int i = 0; i < longitud; i++){
        cout << palabra2[i];
    }
}