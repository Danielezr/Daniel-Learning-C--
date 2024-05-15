//Cadenas de caracteres

#include<iostream>
#include<string.h>

using namespace std;

int main(){
   // char palabra[] = "Daniel";
   // char palabra2[] = {'D', 'a', 'n', 'i', 'e', 'l'};
    char nombre[20];

    cout << "Introduce tu nombre: "; 
    
    cin.getline(nombre,20,'\n'); //Manera mas segura de introducir valores en una cadena. cin.getline(variable, [numero de espacios de la cadena], 'n' = cuando haya un salto de linea)
    gets(nombre);                //Manero menos segura de introducir valores en una cadena.
    
    cout << nombre << endl;
    return 0;
}