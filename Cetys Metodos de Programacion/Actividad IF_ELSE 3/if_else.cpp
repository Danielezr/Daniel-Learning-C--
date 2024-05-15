// Realizar un programa que lea la edad de una persona y de acuerdo a su edad imprima alguna de las siguientes frases
// La persona es recien nacida
// La persona esta cursando el kinder
// La persona esta cursando la secundaria
// La persona esta cursando la preparatoria
// La persona esta cursando la carrera universitaria
// La persona ya se graduo de la Universidad
#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 1)
    {

        cout << "La persona es un recien nacido." << endl;
    }

    else if (edad <= 5)
    {

        cout << "La persona esta cursando el kinder." << endl;
    }

    else if (edad <= 11)
    {

        cout << "La persona esta cursando la primaria." << endl;
    }

    else if (edad <= 14)
    {

        cout << "La persona esta cursando la secundaria." << endl;
    }

    else if (edad <= 17)
    {

        cout << "La persona esta cursando la preparatoria." << endl;
    }

    else if (edad >= 18 && edad <= 23)
    {

        cout << "La persona esta cursando la universidad." << endl;
    }

    else
    {

        cout << "La persona ya se graduó de la universidad" << endl;
    }
}