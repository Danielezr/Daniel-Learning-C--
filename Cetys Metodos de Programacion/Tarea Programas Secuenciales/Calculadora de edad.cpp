#include <iostream>

using namespace std;

int main(){
    int dia, mes, año, edadActual;

    cout << "Introduce tu dia de nacimiento: ";
    cin >> dia;

    cout << "Introduce tu mes de nacimiento: ";
    cin >> mes;

    cout << "Introduce tu año de nacimiento: ";
    cin >> año;

    int diaActual, mesActual, añoActual;

    cout << "\nIntroduce el dia actual: ";
    cin >> diaActual;

    cout << "Introduce el mes actual: ";
    cin >> mesActual;

    cout << "Introduce el año actual: ";
    cin >> añoActual;

    edadActual = añoActual - año;

    if (mes > mesActual || mes == mesActual && dia >= diaActual){
        cout << "\nActualmente tienes " << edadActual - 1 << " años.";
    }
    else{
        cout << "\nActualmente tienes " << edadActual << " años.";
    }
}