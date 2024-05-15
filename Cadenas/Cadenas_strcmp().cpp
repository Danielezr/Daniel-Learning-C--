//Comparar cadenas - Funcion strcmp()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "Jaja"; 
    char palabra2[] = "Hola";

    if(strcmp(palabra1, palabra2) > 0){
        cout << palabra1 << " esta despues alfabeticamente";
    } 
}