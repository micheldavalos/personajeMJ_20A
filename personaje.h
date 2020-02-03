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

    friend ostream & operator << (ostream &out, const Personaje &p)
    {
        out << p.fuerza << endl;
        out << p.salud << endl;
        return out;
    }

    friend istream & operator >> (istream &in,  Personaje &c)
    {
        cout << "Fuerza: ";
        in >> c.fuerza;
        cout << "Salud: ";
        in >> c.salud;
        return in;
    }

private:
    string nombre;
    int salud;
    int fuerza;
    string tipo;
};




#endif // PERSONAJE_H
