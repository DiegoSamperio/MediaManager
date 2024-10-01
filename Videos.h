#ifndef VIDEOS_H
#define VIDEOS_H

#include <iostream>
#include "Tipos.h"

// The Video class inherits from the Tipos class, representing an online video
class Video : public Tipos {
private:
    // Attributes specific to a video
    string Titulo;   // Title of the video
    string youtuber; // The channel or content creator who made the video

public:
    // Constructor to initialize the video object with title, creator, duration, and genre
    Video(string Titulo, string youtuber, int duracion, string genero);

    // Override the pure virtual method from the base class to display video-specific information
    void informacion() override;
};

#endif
