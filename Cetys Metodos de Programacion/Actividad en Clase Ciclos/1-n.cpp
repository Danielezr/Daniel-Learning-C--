#include <iostream>

using namespace std;

int main(){
    double numero, suma = 0, contador = 1;

    cout << "Introduce un numero: ";
    cin >> numero;

    do{
        suma += 1 / contador;
        contador++;

    } while (contador <= numero);

    cout << "La suma es: " << suma << endl;
}