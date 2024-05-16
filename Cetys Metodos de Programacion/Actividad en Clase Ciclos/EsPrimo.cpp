#include <iostream>

using namespace std;

int main(){
    int x;
    bool primo = true;

    cout << "Ingresa un numero: ";
    cin >> x;

    if(x == 2){
        cout << "Tu numero SI es primo";
    }

    else if(x == 1){
        cout << "Tu numero NO es primo";
    }

    else{
        for (int i = 2; i < x; i++){
            if (x % i == 0){
                primo = false;
                break;
            }
        }

        if (primo){
            cout << "Tu numero SI es primo";
        }

        else{
            cout << "Tu numero NO es primo";
        }
    }
}