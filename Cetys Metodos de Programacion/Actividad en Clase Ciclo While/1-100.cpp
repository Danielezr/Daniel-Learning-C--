#include <iostream>

using namespace std;

int main(){
    int x = 1;

    cout << "Numeros entre 1 y 100 que son divisibles entre 3: " << endl;

    cout << "1 ";

    while(x <= 100){
        if(x % 3 == 0){
            cout << x << " ";
        }
        x++;
    }
    cout << "100" << endl;
}