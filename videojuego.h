#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;
#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    size_t cont;
public:
    Videojuego();
    void agregar(const Personaje &p);
    void mostrar();
    void respaldar();
    void recuperar();

    friend ostream& operator<<(ostream &out, const Videojuego &v)
    {
        cout << left << 
        setw(8) << "Nombre" << 
        setw(8) << "Tipo" <<
        setw(7) << "Fuerza" << 
        setw(4) << "Salud" << endl;

        for (size_t i = 0; i < v.cont; i++) {
            const Personaje &p = v.arreglo[i];

            cout << p << endl;
        }
        return out;
    }
};

#endif // VIDEOJUEGO_H
