#include "Series.h"

// Constructor implementation for the Series class
Series::Series(string id, string nombre, int duracion, string genero, int numEpisodios) 
    : Tipos(id, nombre, duracion, genero) {
    this->numEpisodios = numEpisodios;
}

// Method to rate a specific episode
void Series::rateEpisodio(int episodioNombre, double rating) {
    if (episodioNombre >= 1 && episodioNombre <= numEpisodios) {
        episodioRatings[episodioNombre] = rating; // Store the rating for the episode
    }
}

// Method to display series-specific information
void Series::informacion() {
    cout << "Series: " << getNombre() << endl;
    cout << "ID: " << getId() << endl;
    cout << "Duration per episode: " << getDuracion() << " minutes" << endl;
    cout << "Genre: " << getGenero() << endl;
    cout << "Average Rating: " << getPromRate() << endl;
}

// Method to display information about all the episodes and their ratings
void Series::Episodios() {
    cout << "Episodes of the series " << getNombre() << ":" << endl;
    for (int i = 1; i <= numEpisodios; i++) {
        cout << "Episode " << i << ": ";
        if (episodioRatings.find(i) != episodioRatings.end()) {
            cout << "Rating: " << episodioRatings[i] << endl;
        } else {
            cout << "Rating: Not available" << endl;
        }
    }
}

// Method to calculate and return the average rating of all episodes
double Series::getPromedioEpisodios() {
    double sum = 0.0;
    int count = 0;

    for (const auto& pair : episodioRatings) {
        sum += pair.second; // Sum the ratings of all episodes
        count++;
    }

    return (count > 0) ? sum / count : 0.0; // Return average or 0 if no ratings
}

// Method to return the rating of a specific episode
double Series::mostrarCalificacionEpisodio(int episodio) {
    if (episodioRatings.find(episodio) != episodioRatings.end()) {
       return episodioRatings[episodio]; // Return the rating of the episode
    } else {
        return 0; // Return 0 if no rating is available
    }
}
