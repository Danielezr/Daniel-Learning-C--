// Este codigo lo que hace es mostrar todas las tablas de multiplicas del 1 al 10.
#include <iostream>

using namespace std;

int main() {

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      cout << i << "x" << j << "=" << i * j << endl;
      if (j == 10) {
        cout << endl;
      }
    }
  }
}
