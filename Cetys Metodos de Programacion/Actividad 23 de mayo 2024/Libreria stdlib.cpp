#include <iostream>
#include <cstdlib>

using namespace std;

void arreglorandom(int arreglo[]){
    int suma = 0;
    for(int i = 0; i < 10; i++){
        arreglo[i] = rand()%100;
    }
    for(int i = 0; i < 10; i++){
        suma += arreglo[i];
    }
    cout << suma / 10;
}


int main(){
    int arreglo[10];
    arreglorandom(arreglo);
}