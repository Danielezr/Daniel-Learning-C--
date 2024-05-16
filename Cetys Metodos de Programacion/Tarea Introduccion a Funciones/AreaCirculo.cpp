#include <iostream>

#include <math.h>

using namespace std;

void area(){ // Funcion para calcular el area de un circulo
    double radio, area;

    cout << "Introduce el radio: ";
    cin >> radio;

    area = M_PI * pow(radio, 2); // M_PI contiene el valor de pi

    cout << "El area es: " << area << endl;
}

int main(){ // Funcion principal
    area();
}