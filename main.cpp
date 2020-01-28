#include <iostream>
#include "personaje.h"

using namespace std;

int main()
{
    Personaje p;
    string s;
    int valor;

    cout << "Nombre: ";
    cin >> s;
    p.setNombre(s);

    cout << "Tipo: ";
    cin >> s;
    p.setTipo(s);

    cout << "Fuerza: ";
    cin >> valor;
    p.setFuerza(valor);

    cout << "Salud: ";
    cin >> valor;
    p.setSalud(valor);

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Tipo:   " << p.getTipo() << endl;
    cout << "Fuerza: " << p.getFuerza() << endl;
    cout << "Salud:  " << p.getSalud() << endl;

    return 0;
}
