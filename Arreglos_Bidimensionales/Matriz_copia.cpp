//Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar
//todo su contenido hacia otra matriz.
#include <iostream>

using namespace std;

int main() {
    int arreglo1[2][2];
    int arreglo2[2][2];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Introduce un valor: "; cin >> arreglo1[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arreglo2[i][j] = arreglo1[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arreglo2[i][j] << " ";
        }
        cout << endl;
    }
}