#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
public:
    Personaje();
    void setNombre(string n);
    string getNombre();
    int getSalud() const;
    void setSalud(int value);

    int getFuerza() const;
    void setFuerza(int value);

    string getTipo() const;
    void setTipo(const string &value);

private:
    string nombre;
    int salud;
    int fuerza;
    string tipo;
};

#endif // PERSONAJE_H
