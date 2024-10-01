#ifndef SERIES_H
#define SERIES_H

#include "Tipos.h"
#include <map>

// The Series class inherits from the Tipos class and represents a TV series
class Series : public Tipos {
private:
    // Number of episodes and a map to store ratings for each episode
    int numEpisodios;
    map<int, double> episodioRatings; // Key: Episode number, Value: Rating

public:
    // Constructor to initialize the series with ID, name, duration, genre, and number of episodes
    Series(string id, string nombre, int duracion, string genero, int numEpisodios);

    // Method to rate a specific episode of the series
    void rateEpisodio(int episodioNombre, double rating);

    // Override the pure virtual method from the base class to display series-specific information
    void informacion() override;

    // Display information about all the episodes
    void Episodios();

    // Calculate and return the average rating of all episodes
    double getPromedioEpisodios();

    // Return the rating of a specific episode
    double mostrarCalificacionEpisodio(int episodioNombre);
};

#endif
