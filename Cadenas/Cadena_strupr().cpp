//Pasar una palabra a MAYUSCULA - Funcion strupr()
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "daniel";

    strupr(palabra);

    cout << palabra << endl;
}