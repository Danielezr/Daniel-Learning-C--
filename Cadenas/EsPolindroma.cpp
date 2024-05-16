//Hacer un programa que determine si una palabra es polindroma.
#include<iostream>
#include<string.h>

using namespace std;

//Funcion para determinar si la palabra es polindroma
bool EsPolindroma(char palabra[]){
    char copia[100]; 
    
    strcpy(copia, palabra);   //copia y alamacena la palabra orginal en la variable llamada copia.

    strrev(palabra);         //Invierte el orden de la palabra original
    
    //Compara si la inversion y la original son iguales
    if(strcmp(copia, palabra) == 0){   
        return true;
    }
    else{
        return false;
    }
    
}

//Funcion principal
int main(){
    char palabra[100];

    cout << "Introduce una palabra: ";
    cin.getline(palabra, 100, '\n');   //Guarda cadena introducida por el usuario

    if(EsPolindroma(palabra)){     //Imprimir resultados invocando la funcion EsPolindroma.
        cout << "La palabra " << palabra << " es polindroma." << endl;
    }

    else{
        cout << "La palabra no es polindroma.";
    }

}