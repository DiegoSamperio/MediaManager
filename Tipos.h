#ifndef TIPOS_H
#define TIPOS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

// The Tipos class is the base class for different types of media (movies, series, videos)
class Tipos {
private:
    // Common attributes for all media types
    string id;        // Unique identifier
    string nombre;    // Name of the media
    int duracion;     // Duration in minutes
    string genero;    // Genre of the media
    vector<double> ratings; // A list of ratings for the media

public:
    // Constructor to initialize the common attributes for any media type
    Tipos(string id, string nombre, int duracion, string genero);

    // Pure virtual method to ensure derived classes implement their own version of informacion()
    virtual void informacion() = 0;

    // Method to add a rating to the media
    void rate(double rating);

    // Method to calculate and return the average rating
    double getPromRate();

    // Getter methods to access private attributes
    string getId();
    string getNombre();
    int getDuracion();
    string getGenero();
};

#endif
