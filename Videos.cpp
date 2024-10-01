#include "Videos.h"

// Constructor implementation for Video, inheriting from the base class Tipos
Video::Video(string Titulo, string youtuber, int duracion, string genero) 
    : Tipos("", Titulo, duracion, genero) { // Use the base class constructor to initialize common properties
    this->Titulo = Titulo;
    this->youtuber = youtuber;
}

// Method to display information about the video, overriding the virtual method in Tipos
void Video::informacion() {
    cout << "Video: " << Titulo << endl;           // Print the title of the video
    cout << "Canal: " << youtuber << endl;         // Print the creator or channel name
    cout << "Duración: " << getDuracion() << " minutos" << endl;  // Print the video duration
    cout << "Género: " << getGenero() << endl;     // Print the video genre
    cout << "Calificación promedio: " << getPromRate() << endl; // Print the average rating
}
