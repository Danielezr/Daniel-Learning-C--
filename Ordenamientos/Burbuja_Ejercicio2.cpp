// Ordenamiento de Burbuja
// Pedir al usuario que ingrese la cantidad de cadenas del arreglo.
// Solicitar al usuario que ingrese las cadenas del arreglo.
// Usar el algoritmo de ordenamiento de burbuja para ordenar el arreglo en orden alfabético.
// Imprimir el arreglo ordenado.
#include<iostream>
#include<string.h>

using namespace std;

void ordenAlfabetico(char cadena[][100], int elementos){
    char aux[100];

        for(int i = 0; i < elementos; i++){
         for(int j = 0; j < elementos; j++){
            if(strcmp(cadena[j], cadena[j + 1]) > 0){
                strcpy(aux, cadena[j]);
                strcpy(cadena[j], cadena[j + 1]);
                strcpy(cadena[j + 1], aux);
            }
        }
    }
    for(int i = 0; i <= elementos; i++){
        cout << cadena[i] << endl;
    }
}

int main(){
    int elementos;
    const int max = 100;
    
    cout << "Ingresa el numero de cadenas: ";
    cin >> elementos;
    cin.ignore();

    char cadena[elementos][max];
    
    for(int i = 0; i < elementos; i++){
        cout << "Ingresa una cadena: ";
        cin.getline(cadena[i],max);
        
    }
    cout << "\nOrganizacion alfabetica: " << endl;
    ordenAlfabetico(cadena, elementos);
    

}