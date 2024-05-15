//Lea 10 calificaciones (enteros) por teclado y los guarde en un arreglo
//Calcule y muestre el promedio de las calificaciones
//Cuente y muestre cuantas calificaciones son reprobatorias
//Cuente y muestre cuantas alificaciones son superiores al promedio
#include<iostream> 

using namespace std;

void promedio(int calificaciones[10]){
    //Declaracion de variables y arreglos
    double promedio;
    int suma = 0;
    int reprobatorias = 0;
    int superiores = 0;

    //Bucle para guardar valores en el arreglo
    for(int i = 0; i < 10; i++){
        cout << "Ingresa la calficacion " << i + 1 << ": "; cin >> calificaciones[i];
    }

    //Bucle para sumar todos los valores
    for(int i = 0; i < 10; i++){
        suma += calificaciones[i];
    }

    promedio = suma / 10;  //Determina el promedio

    //Bucle para contar las calificaciones reprobatorias y superiores
    for(int i = 0; i < 10; i++){
        if(calificaciones[i] < 7){  //si la calificacion es menor a 7 es reprobatoria
            reprobatorias++;
        }
        if(calificaciones[i] > promedio){  //si la calificacion es mayor al promedio, la calificacion es superior.
            superiores++;
        }
    }
    //Imprimir resultados
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    cout << "Hay " << reprobatorias << " calificaciones reprobatorias." << endl;
    cout << "Hay " << superiores << " calificaciones superiores al promedio. " << endl;
}

int main(){
    int calificaciones[10];
    promedio(calificaciones); //Invocacion de funcion con argumento calificaciones[10].
}