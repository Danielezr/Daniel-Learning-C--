#include <iostream>

using namespace std;

int main(){
    int año;

    cout << "Introduce un año: ";
    cin >> año;

    if (año % 400 == 0){
        cout << año << " es bisiesto";
    }

    else if (año % 100 != 0 && año % 4 == 0){
        cout << año << " es bisiesto";
    }
    
    else{
        cout << año << " no es bisiesto";
    }

    return 0;
}