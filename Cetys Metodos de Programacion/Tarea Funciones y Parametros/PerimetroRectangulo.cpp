#include <iostream>

using namespace std;

// Funcion para calcular el perimetro de un triangulo

double perimetroRectangulo(double largo, double ancho){
    return 2 * (largo + ancho);
}

// Funcion principal
int main(){
    double largo, ancho;

    cout << "Introduce el largo: ";
    cin >> largo;

    cout << "Introduce el ancho: ";
    cin >> ancho;

    cout << "El resultado es: " << perimetroRectangulo(largo, ancho); // Invocacion de funcion.
}