#include "videojuego.h"

Videojuego::Videojuego()
{
    i = 0;
}

void Videojuego::agregar(const Personaje &p)
{
    if (i >= 5) {
        cout << "El arreglo esta lleno" << endl;
    }
    else {
        arreglo[i++] = p;
    }
    //    i++; // i = i + 1
}

void Videojuego::mostrar()
{
    for (unsigned int j = 0; j < i; j++) {
            Personaje &p = arreglo[j];

        cout << "Nombre: " << p.getNombre() << endl;
        cout << "Tipo:   " << p.getTipo() << endl;
        cout << "Fuerza: " << p.getFuerza() << endl;
        cout << "Salud:  " << p.getSalud() << endl;
    }
}
