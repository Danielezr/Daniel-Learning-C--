#include <iostream>

using namespace std;

void cuenta(){ // Funcion para saber el total
    double subtotal, total;

    cout << "Cual es el subtotal de la cuenta?: ";
    cin >> subtotal;

    total += subtotal * 0.15;

    cout << "El total de la cuenta es: " << total << endl;
}

int main(){ // Funcion principal
    cuenta();
}
