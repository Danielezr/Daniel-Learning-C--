#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int grados[] = {0, 30, 45, 90, 120, 180, 210, 270, 310, 360};
    double radianes;

    for (int i = 0; i < 10; i++){
        radianes = grados[i] * M_PI / 180;
        
        cout << "El seno de " << grados[i] << " es " << sin(radianes) << endl;
        cout << "El coseno de " << grados[i] << " es " << cos(radianes) << endl;
        cout << "La tangente de " << grados[i] << " es " << tan(radianes) << endl;
        cout << " " << endl;
    }
}