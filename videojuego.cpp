#include "videojuego.h"
#include <fstream>

Videojuego::Videojuego()
{
    total = 0;
}

void Videojuego::agregar(const Personaje &p)
{
    if (total >= 5) {
        cout << "El arreglo esta lleno" << endl;
    }
    else {
        arreglo[total++] = p;
    }
    //    i++; // i = i + 1
}

void Videojuego::mostrar()
{
    for (unsigned int j = 0; j < total; j++) {
            Personaje &p = arreglo[j];

        cout << "Nombre: " << p.getNombre() << endl;
        cout << "Tipo:   " << p.getTipo() << endl;
        cout << "Fuerza: " << p.getFuerza() << endl;
        cout << "Salud:  " << p.getSalud() << endl;
    }
}

void Videojuego::respaldar()
{
    fstream archivo("personajes.txt", ios::out);

    if (archivo.is_open()) {
        for (unsigned int j = 0; j < total; j++) {
            Personaje &p = arreglo[j];

            archivo <<  p.getNombre() << endl;
            archivo <<  p.getTipo() << endl;
            archivo <<  p.getFuerza() << endl;
            archivo <<  p.getSalud() << endl;
        }
    }
}

void Videojuego::recuperar()
{
    fstream archivo("personajes.txt", ios::in);

    if (archivo.is_open()) {
        while (!archivo.eof()) {
            Personaje p;
            string linea;

            getline(archivo, linea);
            if (archivo.eof()) {
                break;
            }
            p.setNombre(linea);

            getline(archivo, linea);
            p.setTipo(linea);

            getline(archivo, linea);
            p.setFuerza(stoi(linea));

            getline(archivo, linea);
            p.setSalud(stoi(linea));

            agregar(p);

        }
    }
}
