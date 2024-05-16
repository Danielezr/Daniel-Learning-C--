//Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas, caso contrario no convertirlo.
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[100];
    char letra[] = "A";
    
    cout << "Introduce tu nombre en MAYUSCULAS: ";
    cin.getline(palabra, 100, '\n');

    if(palabra[0] == letra[0]){
        cout << strlwr(palabra) << endl;
    }
    else{
        cout << "No comienza por A";
    }

}