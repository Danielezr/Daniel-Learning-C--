#include <iostream>

using namespace std;

int main(){
    for (char inicio = 'a'; inicio <= 'z'; inicio++){
        for (char letra = inicio; letra <= 'z'; letra++){
            cout << letra << " ";
        }
        cout << endl;
    }
}