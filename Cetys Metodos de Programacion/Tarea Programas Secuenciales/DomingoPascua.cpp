#include <iostream>

using namespace std;

int main(){
    int año, a, b, c, d, e, n;

    cout << "Introduce un año: ";
    cin >> año;

    a = año % 19;
    b = año % 4;
    c = año % 7;
    d = (19 * a + 24) % 30;
    e = (2 * b + 4 * c + 6 * d + 5) % 7;
    n = (22 + d + e);

    if (n <= 31){
        cout << "El domingo de Pascua es el " << n << " de marzo";
    }
    else{
        cout << "El domingo de Pascua es el " << n - 31 << " de abril";
    }
    return 0;
}