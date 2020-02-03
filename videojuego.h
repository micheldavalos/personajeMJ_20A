#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;
#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    unsigned int total;
public:
    Videojuego();
    void agregar(const Personaje &p);
    void mostrar();
    void respaldar();
    void recuperar();
};

#endif // VIDEOJUEGO_H
