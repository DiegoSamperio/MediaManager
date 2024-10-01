#include "Pelicula.h"

// Constructor implementation for the Pelicula class, inheriting from Tipos
Pelicula::Pelicula(string id, string nombre, int duracion, string genero) 
    : Tipos(id, nombre, duracion, genero) {}

// Method to display movie-specific information
void Pelicula::informacion() {
    cout << "Movie: " << getNombre() << endl;          // Print the name of the movie
    cout << "ID: " << getId() << endl;                 // Print the movie's unique ID
    cout << "Duration: " << getDuracion() << " minutes" << endl; // Print the movie's duration
    cout << "Genre: " << getGenero() << endl;          // Print the movie's genre
    cout << "Average Rating: " << getPromRate() << endl; // Print the movie's average rating
}