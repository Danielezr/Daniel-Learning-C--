//Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
//La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
#include <iostream>

using namespace std;

int main(){
    int arreglo[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    int arregloTrans[3][3];
    cout << "Arreglo original: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arreglo[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arregloTrans[i][j] = arreglo[j][i];
        }
    } 
    cout << "Arreglo transpuesto: " << endl;       
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arregloTrans[i][j] << " ";
        }
        cout << endl;
    }
}