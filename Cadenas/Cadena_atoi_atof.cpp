//Transformar una cadena a numeros - Funcion atoi() y atof()
//atoi = "123" -> 123
//atof = "123.45" -> 123.45
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cad[] = "123";
    char cad2[] = "123.45";
    int entero, flotante;

    entero = atoi(cad);
    flotante = atof(cad2);

    cout << entero << endl;
    cout << flotante << endl;
}