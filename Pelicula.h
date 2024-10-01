#ifndef PELICULA_H
#define PELICULA_H

#include "Tipos.h"

// The Pelicula class inherits from the Tipos class and represents a movie
class Pelicula : public Tipos {
public:
    // Constructor to initialize the movie with ID, name, duration, and genre
    Pelicula(string id, string nombre, int duracion, string genero);

    // Override the pure virtual method from the base class to display movie-specific information
    void informacion() override;
};

#endif