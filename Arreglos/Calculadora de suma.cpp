/* Escribe un programa en C++ que utilice un arreglo para almacenar las calificaciones de 5 exámenes. 
Solicita al usuario que ingrese las calificaciones de cada examen y almacena estas calificaciones en el arreglo. 
Luego, calcula el promedio de las calificaciones ingresadas y muestra el promedio calculado en la consola. */
#include<iostream>

using namespace std;

int main(){
    float calificaciones[5];  //Para este ejercicio utilice el tipo de dato float por que fue el unico que funciono jaja
    float promedio = 0;
    
    for(int i = 0; i < 5; i++){ //bucle para pedir la calificacion de cada examen
        cout << "Calificacion del examen " << i+1 << ": "; cin >> calificaciones[i];  //utilice "i+1" para que el programa pida "Calificacion del examen 1"
    }                                                                                 //Si no hubiese agregado el +1, el programa hubiese imprimido primero: "Calficacion del examen 0"
    for(int i = 0; i < 5; i++){
        promedio += calificaciones[i];  // acumular las calificaciones en el acumulador "promedio"
    }
    promedio /= 5.0;
    cout << "el promedio es: " << promedio; //resultados
    return 0;

}