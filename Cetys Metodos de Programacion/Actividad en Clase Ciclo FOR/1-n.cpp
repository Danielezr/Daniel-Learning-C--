#include <iostream>

using namespace std;

int main(){
    int n, suma = 0;

    cout << "Introduce un numero: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        suma += i;
    }

    cout << suma;
}