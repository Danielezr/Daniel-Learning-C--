#include <iostream>

using namespace std;

int main(){
    double velocidad_inicial, aceleracion, tiempo, velocidad, distancia;

    cout << "Introduce la velocidad inicial: ";
    cin >> velocidad_inicial;

    cout << "Introduce la acelaracion: ";
    cin >> aceleracion;

    cout << "Introduce el tiempo transcurrido: ";
    cin >> tiempo;

    velocidad = (velocidad_inicial + (aceleracion * tiempo));

    distancia = (velocidad_inicial * tiempo) + (0.5 * aceleracion * (tiempo * tiempo));

    cout << "La velocidad es: " << velocidad << endl;

    cout << "La distancia es: " << distancia << endl;

    return 0;
}