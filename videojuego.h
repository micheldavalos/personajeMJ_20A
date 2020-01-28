#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;
#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    unsigned int i;
public:
    Videojuego();
    void agregar(const Personaje &p);
    void mostrar();
};

#endif // VIDEOJUEGO_H
