#include <iostream>

using namespace std;

// Funcion para covertir metros a pies.
double metros_a_ft(double metros){
    return metros * 3.28084;
}

// Funcion principal.
int main(){
    double metros;

    cout << "Ingresa tu altura en metros: ";
    cin >> metros;

    cout << "Tu altura en pies es " << metros_a_ft(metros);
}