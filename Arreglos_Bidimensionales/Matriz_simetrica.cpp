/* Desarrollar un programa que determine si una matriz es simétrica o no. 
   Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/
#include <iostream>

using namespace std;

int main(){
    //Inicialicion de arreglo
    int arreglo[100][100], filas, columnas;
    bool esSimetrico = false;
    
    cout << "Ingresa el numero de filas: "; cin >> filas;          
    cout << "Ingresa el numero de columnas: "; cin >> columnas;

    //Introduce valores en el arreglo
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingresa un valor para arreglo[" << i << "][" << j << "]:"; cin >> arreglo[i][j];
        }
    }
    //Comprueba si un arreglo es cuadrado y posteriormente verifica si es igual a la matriz transpuesta.
    if(filas == columnas){
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas; j++){
                if(arreglo[i][j] == arreglo[j][i]){   //Verifica matriz transpuesta
                    esSimetrico = true;
                }
            }
        }
    }
    //Impresion de resultados
    if(esSimetrico){
        cout << "La matriz es simetrica";
    }
    else{
        cout << "La matriz no es simetrica";
    }
}
