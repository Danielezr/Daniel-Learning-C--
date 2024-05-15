/*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.*/
#include<iostream>

using namespace std;

int main(){
    //Inicializacion de matrices
    int arreglo1[100][100];
    int arreglo2[100][100];
    int producto[100][100];
    int filas, columnas;


    cout << "Ingresa el numero de filas: "; cin >> filas;
    cout << "Ingresa el numero de columnas: "; cin >> columnas;

    //Ingresar valores en la primera matriz 
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingresa valores para arreglo1[" << i << "][" << j << "]: "; 
            cin >> arreglo1[i][j];
        }
    }
    cout << endl; //salto de linea
    
    //Ingresar valores en la segunda matriz 
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingresa valores para arreglo2[" << i << "][" << j << "]: "; 
            cin >> arreglo2[i][j];
        }
    }

    //Multiplica valores de los arreglos y guarda resultados en el arreglo llamado "producto"
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            producto[i][j] = arreglo1[i][j] * arreglo2[i][j];
        }
    }

    cout << "El resultado es: ";
    cout << endl;
    //Bucle para imprimir el producto de ambos arreglos
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }
    
}