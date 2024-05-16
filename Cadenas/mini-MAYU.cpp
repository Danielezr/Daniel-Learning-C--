//Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no.
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //declaracion de variables y cadenas
    char cadena1[100];
    char cadena2[100];

    //Pide al usuario las cadenas
    cout << "Ingresa una palabra: ";
    cin.getline(cadena1, 100, '\n');
    
    cout << "Ingresa una palabra: ";
    cin.getline(cadena2, 100, '\n');

    //Convierte cadenas en mayusculas
    strupr(cadena1);
    strupr(cadena2);

    //Compara si son iguales
    if(strcmp(cadena1, cadena2) == 0){
        cout << "Las cadenas " << cadena1 << " y " << cadena2 << " son iguales." << endl;
    }
    else{
        cout << "No son iguales" << endl;
    }
}