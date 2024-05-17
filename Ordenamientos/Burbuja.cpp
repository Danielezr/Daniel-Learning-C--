//Metodo Burbuja

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {1,4,5,3,2};
    int i, j, aux;

    for(i = 0; i < 5; i++){      //Bucle externo
        for(j = 0; j < 5; j++){  //Bucle interno
            if(numeros[j] > numeros[j+1]){   //Condicional que comprueba si "numeros[j]" es mayor al valor almecenado en el siguiente indice. El siguiente indice es representado por [j + 1].
                aux = numeros[j];            //Variable auxiliar sirve para intercambiar los valores de dos variables
                numeros[j] = numeros[j+1];   //Si numeros[j] fue mayor entonces tomara el valor del siguiente indice [j + 1] y continuara evaluando hasta que ya no encuentre un numero mas grande.
                numeros[j+1] = aux;          
            }
        }
    }
    //Imprimir ordenamiento
    cout << "Orden ascendente: ";
    for(i = 0; i < 5; i++){
        cout << numeros[i] << " ";
    }
    cout << "Orden descendente: ";
    for(i = 4; i >= 0; i--){
        cout << numeros[i] << " ";
    }
}