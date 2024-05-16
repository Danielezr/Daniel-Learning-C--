//Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus respectivos valores y por ultimo sumarlos.
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cad1[100];
    char cad2[100];

    cout << "Introduce un numero entero: ";
    cin.getline(cad1, 100, '\n');
    cout << "Introduce un numero real: ";
    cin.getline(cad2, 100, '\n');

    cout << "Resultado: " << atoi(cad1) + atof(cad2) << endl;
}