#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, x1, x2;

    cout << "Introduce el valor a: ";
    cin >> a;

    cout << "Introduce el valor b: ";
    cin >> b;

    cout << "Introduce el valor c: ";
    cin >> c;

    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "El resultado de la ecuacion cuadratica es: " << x1 << " y " << x2 << endl;
}