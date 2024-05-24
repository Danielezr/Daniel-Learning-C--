// Ordenamiento de Burbuja
// Pedir al usuario que ingrese la cantidad de cadenas del arreglo.
// Solicitar al usuario que ingrese las cadenas del arreglo.
// Usar el algoritmo de ordenamiento de burbuja para ordenar el arreglo en orden alfabético.
// Imprimir el arreglo ordenado.
#include<iostream>
#include<string.h>

using namespace std;

void ordenAlfabetico(char cadena[][100], int elementos){   //Funcion para ordenar alfabeticamente las cadenas
    char aux[100];                                         //cadena aux para guardar valores temporales
    for(int i = 0; i < elementos; i++){                    //Bucle para hacer ordenamiento de burbuja.
        for(int j = 0; j < elementos; j++){
            if(strcmp(cadena[j], cadena[j + 1]) > 0){      // strcmp para comparar cual es mayor alfabeticamente con "> 0"
                strcpy(aux, cadena[j]);                    // strcpy copia el contenido de una variable en otra variable
                strcpy(cadena[j], cadena[j + 1]);
                strcpy(cadena[j + 1], aux);
            }
        }
    }
    for(int i = 0; i <= elementos; i++){                   //Bucle para imprimir las cadenas organizadas alfabeticamente
        cout << cadena[i] << endl;
    }
}

int main(){
    int elementos;                                         //Variable para saber el numero de cadenas
    const int max = 100;                                   //Limite de caracteres en el arreglo
    
    cout << "Ingresa el numero de cadenas: ";              //El usuario ingresa el numero de cadenas
    cin >> elementos;          
    cin.ignore();                                          //cin.ignore sirve para olvidarse de el "enter" introducido por el usuario y que no nos afecte al momento de introducir los siguiente valores.

    char cadena[elementos][max];                           //Inicializamos la cadena de una manera bidimensional para guardar el numero de cadenas y el maximo numero de caracteres.
    
    for(int i = 0; i < elementos; i++){                    //Pide al usuario las cadenas
        cout << "Ingresa una cadena: ";
        cin.getline(cadena[i],max);  
    }

    cout << "\nOrganizacion alfabetica: " << endl;  
    ordenAlfabetico(cadena, elementos);                    //Invocacion de funcion
}