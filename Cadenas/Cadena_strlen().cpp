//Longitud de una cadena de caracteres - Funcion strlen()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "hola perro";
    int longitud = 0;

    longitud = strlen(palabra);  //La funcion strlen() de la libreria string sirve para saber que tan largo es una cadena de caracteres
    cout << "Numero de digitos de la cadena es: " << longitud << endl;
}