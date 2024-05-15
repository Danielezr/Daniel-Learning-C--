//Pedir al usuario una cadena de caractres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres.
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[] = "Daniel";
    char nombre2[20];

    strcpy(nombre2, nombre);

    cout << nombre2 << endl;
}