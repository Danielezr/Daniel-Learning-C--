#include <iostream>

using namespace std;

void temperatura(){ // Funcion para convertir los grados
    double centigrados, fahrenheit;

    cout << "Introduce la temperatura en grados centigrados: ";
    cin >> centigrados;

    fahrenheit = (centigrados * 9 / 5) + 32; // Formula para la conversion

    cout << "La temperatura en grados fahrenheit es: " << fahrenheit << endl;
}

int main(){ // Funcion principal
    temperatura();
}