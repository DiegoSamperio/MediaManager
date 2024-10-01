#include "Tipos.h"

// Constructor to initialize the common attributes for any media
Tipos::Tipos(string id, string nombre, int duracion, string genero) {
    this->id = id;             // Set the unique ID
    this->nombre = nombre;     // Set the name of the media
    this->duracion = duracion; // Set the duration in minutes
    this->genero = genero;     // Set the genre
}

// Method to add a rating to the media
void Tipos::rate(double rating) {
    ratings.push_back(rating); // Store the rating in the vector
}

// Method to calculate and return the average rating of the media
double Tipos::getPromRate() {
    if (ratings.empty()) { // If there are no ratings, return 0
        return 0.0;
    }

    double sum = 0.0;
    for (double rating : ratings) { // Sum all the ratings
        sum += rating;
    }

    return sum / ratings.size(); // Return the average rating
}

// Getter methods to access private attributes
string Tipos::getId() {
    return id;
}

string Tipos::getNombre() {
    return nombre;
}

int Tipos::getDuracion() {
    return duracion;
}

string Tipos::getGenero() {
    return genero;
}

