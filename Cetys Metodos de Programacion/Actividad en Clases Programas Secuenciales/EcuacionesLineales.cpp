#include <iostream>

using namespace std;

int main(){

    double a, b, c, d, e, f, x, y;

    cout << "Introduce el valor de a: ";
    cin >> a;

    cout << "Introduce el valor de b: ";
    cin >> b;

    cout << "Introduce el valor de c: ";
    cin >> c;

    cout << "Introduce el valor de d: ";
    cin >> d;

    cout << "Introduce el valor de e: ";
    cin >> e;

    cout << "Introduce el valor de f: ";
    cin >> f;

    x = ((c * e) - (b * f)) / ((a * e) - (b * d));

    y = ((a * f) - (c * d)) / ((a * e) - (b * d));

    cout << "Resultado de x: " << x << endl;

    cout << "Resultado de y: " << y << endl;

    return 0;
}