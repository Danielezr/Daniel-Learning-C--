#include<iostream>

using namespace std;

int main(){
    int calificaciones[10];
    double suma = 0, promedio;
    int reprobatorias = 0;
    int superiores = 0;

    for(int i = 0; i < 10; i++){
        cout << "Ingresa la calficacion " << i + 1 << ": "; cin >> calificaciones[i];
    }
    
    for(int i = 0; i < 10; i++){
        suma += calificaciones[i];
    }
    promedio = suma / 10;
    for(int i = 0; i < 10; i++){
        if(calificaciones[i] < 7){
            reprobatorias++;
        }
        if(calificaciones[i] > promedio){
            superiores++;
        }
    }
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    cout << "Hay " << reprobatorias << " calificaciones reprobatorias." << endl;
    cout << "Hay " << superiores << " calificaciones superiores al promedio. " << endl;

}