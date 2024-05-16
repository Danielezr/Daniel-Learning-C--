/*Crear una cadena que tenga la siguiene frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre, 
por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal(NombreDelUsuario)"*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola que tal ";
    char nombre[100];
    char saludo[100];

    cout << "Ingresa tu nombre: ";
    cin.getline(nombre, 100, '\n');  //Almacena cadena de manera segura.

    strcpy(saludo, palabra1);  //saludo = "Hola que tal"

    strcat(saludo, nombre); //saludo = "Hola que tal(nombredelusuario)"

    cout << saludo;  //Imprime saludo
}