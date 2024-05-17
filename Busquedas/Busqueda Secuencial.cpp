//Busqueda secuencial

//a[5] = {3,5,1,4,2}; dato = 4;

#include<iostream>

using namespace std;

int main(){
    int a[] = {3,5,1,4,2};
    int i, dato;
    char band = 'F';

    dato = 4;
    //Busqueda Secuencial

    i = 0;
    while((band == 'F') && (i < 5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }
    if (band == 'F'){
        cout << "El numero no existe";
    }
    else if(band == 'V'){
        cout << "El numero a sido encontrado en la posicion: " << i - 1 << endl;
    }
}