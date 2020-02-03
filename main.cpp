#include <iostream>
#include "personaje.h"
#include "videojuego.h"

using namespace std;

int main()
{
    Videojuego v;
    string op;

    while (true) {
        cout << "1) Agregar Personaje" << endl;
        cout << "2) Mostrar Personajes" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "0) Salir";
        getline(cin, op);

        if (op == "1") {
            Personaje p;
            string s;
            int valor;

            cout << "Nombre: ";
            getline(cin, s);
            p.setNombre(s);

            cout << "Tipo: ";
            getline(cin, s);
            p.setTipo(s);

            cout << "Fuerza: ";
            cin >> valor;
            p.setFuerza(valor);

            cout << "Salud: ";
            cin >> valor; cin.ignore();
            p.setSalud(valor);

            v.agregar(p);
        }
        else if (op == "2") {
            v.mostrar();
        }
        else if (op == "3") {
            v.respaldar();
        }
        else if (op == "4") {
            v.recuperar();
        }
        else if (op == "0") {
            break;
        }
    }

    return 0;
}
