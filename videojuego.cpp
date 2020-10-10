#include "videojuego.h"
#include <fstream>
#include <iomanip>

Videojuego::Videojuego()
{
    cont = 0;
}

void Videojuego::agregar(const Personaje &p)
{
    if (cont >= 5) {
        cout << "El arreglo esta lleno" << endl;
    }
    else {
        arreglo[cont++] = p;
    }
    //    i++; // i = i + 1
}

void Videojuego::mostrar()
{
    if (cont == 0) {
        cout << "No existen personajes" << endl;
        
        return;
    }
    
    cout << *this << endl;

    

//        cout << "Nombre: " << p.getNombre() << endl;
//        cout << "Tipo:   " << p.getTipo() << endl;
//        cout << "Fuerza: " << p.getFuerza() << endl;
//        cout << "Salud:  " << p.getSalud() << endl;
}

void Videojuego::respaldar()
{
    fstream archivo("personajes.txt", ios::out);

    if (archivo.is_open()) {
        for (unsigned int j = 0; j < cont; j++) {
                Personaje &p = arreglo[j];

                archivo << p.getNombre() << endl;
                archivo << p.getTipo() << endl;
                archivo << p.getFuerza() << endl;
                archivo << p.getSalud() << endl;
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

            getline(archivo, linea, '\n');
            if (archivo.eof()) {
                break;
            }
            p.setNombre(linea);

            getline(archivo, linea);
            p.setTipo(linea);

            getline(archivo, linea);
            int fuerza = stoi(linea);
            p.setFuerza(fuerza);

            getline(archivo, linea);
            int salud = stoi(linea);
            p.setSalud(salud);

            agregar(p);
        }
    }
}
