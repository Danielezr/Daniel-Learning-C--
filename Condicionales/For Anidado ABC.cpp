// este bucle lo que hace es imprimir el abc completo y despues va eliminando la primera letra con la que empieza y termina en la z.
#include <iostream>

using namespace std;

int main() {

  for (char inicio = 'a'; inicio <= 'z'; inicio++){
    for (char letra = inicio; letra <= 'z'; letra++){
      cout << letra << " ";
    }
    cout << endl;
  }
}