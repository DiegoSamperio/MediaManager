#include <iostream>
#include <vector>
#include <string>
#include "Tipos.h"
#include "Pelicula.h"
#include "Series.h"
#include "Videos.h"
using namespace std;

int main() {
    // Create a vector to store movie objects
    std::vector<Pelicula*> pelicula;

    // Add movies to the collection and assign ratings
    Pelicula* pelicula1 = new Pelicula("123", "Mario bros", 92, "Aventura");
    pelicula.push_back(pelicula1);
    pelicula1->rate(4.6);
    Pelicula* pelicula2 = new Pelicula("456", "Ready player one", 140, "Ciencia ficción");
    pelicula.push_back(pelicula2);
    pelicula2->rate(4.1);
    Pelicula* pelicula3 = new Pelicula("431", "El señor de los anillos", 178, "Aventura");
    pelicula.push_back(pelicula3);
    pelicula3->rate(4.4);
    Pelicula* pelicula4 = new Pelicula("595", "Matrix", 136, "Acción");
    pelicula.push_back(pelicula4);
    pelicula4->rate(4.3);
    Pelicula* pelicula5 = new Pelicula("157", "Interestelar", 169, "Ciencia ficción");
    pelicula.push_back(pelicula5);
    pelicula5->rate(4.6);
    Pelicula* pelicula6 = new Pelicula("458", "El caballero de la noche", 152, "Acción");
    pelicula.push_back(pelicula6);
    pelicula6->rate(4.5);
    Pelicula* pelicula7 = new Pelicula("675", "Pulp fiction", 154, "Crimen");
    pelicula.push_back(pelicula7);
    pelicula7->rate(3.9);
    Pelicula* pelicula8 = new Pelicula("921", "Forrest Gump", 142, "Drama");
    pelicula.push_back(pelicula8);
    pelicula8->rate(4.4);
    Pelicula* pelicula9 = new Pelicula("889", "El padrino", 175, "Drama");
    pelicula.push_back(pelicula9);
    pelicula9->rate(4.6);
    Pelicula* pelicula10 = new Pelicula("117", "Infiltrados", 151, "Suspenso");
    pelicula.push_back(pelicula10);
    pelicula10->rate(4.2);

    // Create a vector to store series objects
    std::vector<Series*> serie;

    // Add series to the collection, rate individual episodes, and assign an average rating
    Series* series1 = new Series("789", "The Legend of Zelda", 15, "Aventura", 13);
    serie.push_back(series1);
    series1->rate(4.10);
    series1->rateEpisodio(1, 4.1);
    series1->rateEpisodio(2, 4.8);
    series1->rateEpisodio(3, 5.0);
    series1->rateEpisodio(4, 3.8);
    series1->rateEpisodio(5, 4.0);
    series1->rateEpisodio(6, 3.5);
    series1->rateEpisodio(7, 3.2);
    series1->rateEpisodio(8, 5.0);
    series1->rateEpisodio(9, 4.2);
    series1->rateEpisodio(10, 3.3);
    series1->rateEpisodio(11, 4.0);
    series1->rateEpisodio(12, 4.2);
    series1->rateEpisodio(13, 4.3);
    double promedio = series1->getPromedioEpisodios();
    series1->rate(promedio);

    Series* series2 = new Series("987", "Tribunal", 60, "Drama", 10);
    serie.push_back(series2);
    series2->rate(4.17);
    series2->rateEpisodio(1, 3.5);
    series2->rateEpisodio(2, 4.0);
    series2->rateEpisodio(3, 4.8);
    series2->rateEpisodio(4, 4.7);
    series2->rateEpisodio(5, 5.0);
    series2->rateEpisodio(6, 3.5);
    series2->rateEpisodio(7, 3.6);
    series2->rateEpisodio(8, 5.0);
    series2->rateEpisodio(9, 4.2);
    series2->rateEpisodio(10, 3.4);
    promedio = series2->getPromedioEpisodios();
    series2->rate(promedio);

    Series* series3 = new Series("321", "Los anillos del poder", 52, "Ciencia ficción", 8);
    serie.push_back(series3);
    series3->rate(3.96);
    series3->rateEpisodio(1, 3.4);
    series3->rateEpisodio(2, 4.3);
    series3->rateEpisodio(3, 3.4);
    series3->rateEpisodio(4, 4.1);
    series3->rateEpisodio(5, 4.3);
    series3->rateEpisodio(6, 4.0);
    series3->rateEpisodio(7, 4.2);
    series3->rateEpisodio(8, 4.6);
    promedio = series3->getPromedioEpisodios();
    series3->rate(promedio);

    // Create a vector to store video objects
    std::vector<Video*> video;

    // Add videos to the collection and assign ratings
    Video* video1 = new Video("Ibai", "Velada del año", 16, "Suspenso");
    video.push_back(video1);
    video1->rate(4.2);
    Video* video2 = new Video("MrBeast", "Yates", 14, "Acción");
    video.push_back(video2);
    video2->rate(3.8);
    Video* video3 = new Video("Trebor", "Arrasando con hank", 15, "Videojuego");
    video.push_back(video3);
    video3->rate(2.4);
    Video* video4 = new Video("Kings League", "Chup Chup joranda 4", 140, "Drama");
    video.push_back(video4);
    video4->rate(4.3);
    Video* video5 = new Video("Esttik", "3kg de comida en 30 minutos", 12, "Comida");
    video.push_back(video5);
    video5->rate(3.9);
    Video* video6 = new Video("Dude perfect", "Estereotipos de vecinos", 22, "Comedia");
    video.push_back(video6);
    video6->rate(4.2);
    Video* video7 = new Video("MrBeast", "Isla privada", 32, "Acción");
    video.push_back(video7);
    video7->rate(3.7);
    Video* video8 = new Video("Trebor", "Tara vs Hak", 18, "Videojuego");
    video.push_back(video8);
    video8->rate(3.8);
    Video* video9 = new Video("Kings League", "Chup Chup joranda 5", 134, "Drama");
    video.push_back(video9);
    video9->rate(3.6);
    Video* video10 = new Video("Esttik", "Mi vuelta a USA", 13, "Comida");
    video.push_back(video10);
    video10->rate(4.1);

    // Variables for user input
    string id = "";
    string nombre = "";
    int duracion = 0;
    string genero = "";
    int numEpisodios = 0;
    double calificacion = 0;
    bool y = false;
    bool x = false;

    // Main loop to interact with the user and manage the media content
    while (!x) {
        int opcion = 0;
        int opcion1 = 0;
        int opcion2 = 0;
        int capitulo = 0;

        // Display main menu options
        cout << "What would you like to watch?" << endl;
        cout << "Movies (1)" << endl;
        cout << "Series (2)" << endl;
        cout << "Videos (3)" << endl;
        cout << "Exit (4)" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Movies menu
                cout << "MOVIES:" << endl;
                y = false;
                while (!y) {
                    cout << "View movie list (1) \nAdd a movie (2) \nReturn to main menu (3)" << endl;
                    cin >> opcion1;

                    if (opcion1 == 1) {
                        // List all movies
                        for (int i = 0; i < pelicula.size(); i++) {
                            Pelicula* peli = pelicula.at(i);
                            cout << peli->getNombre() << " (" << i << ")" << endl;
                        }

                        // Allow the user to select and view details of a movie
                        cout << "Which movie would you like to view?" << endl;
                        cin >> opcion2;
                        Pelicula* peli = pelicula.at(opcion2);
                        cout << "---------------------------" << endl;
                        peli->informacion();
                        cout << "---------------------------" << endl;

                        // Prompt the user to rate the movie
                        cout << "Would you like to rate the movie? \nYes (1) \nNo (2)" << endl;
                        cin >> opcion2;
                        if (opcion2 == 1) {
                            cout << "What rating would you give? (1-5)" << endl;
                            cin >> calificacion;
                            calificacion = (calificacion + peli->getPromRate()) / 2;
                            peli->rate(calificacion);
                            cout << "The new rating is: " << peli->getPromRate() << endl;
                        } else if (opcion2 == 2) {
                            cout << "The rating remains: " << peli->getPromRate() << endl;
                        }
                    } else if (opcion1 == 2) {
                        // Add a new movie to the collection
                        cout << "Enter the movie ID:" << endl;
                        cin.ignore();
                        getline(cin, id);
                        cout << "Enter the movie name:" << endl;
                        getline(cin, nombre);
                        cout << "Enter the movie duration:" << endl;
                        cin >> duracion;
                        cout << "Enter the movie genre:" << endl;
                        cin.ignore();
                        getline(cin, genero);
                        Pelicula* peli = new Pelicula(id, nombre, duracion, genero);
                        pelicula.push_back(peli);
                        cout << "Give a rating to the movie (1-5)" << endl;
                        cin >> calificacion;
                        peli->rate(calificacion);
                        peli->informacion();
                    } else if (opcion1 == 3) {
                        y = true;
                    } else {
                        cout << "Invalid option. Please select a valid option." << endl;
                    }
                }
                break;

            case 2:
                // Series menu
                cout << "SERIES:" << endl;
                y = false;
                while (!y) {
                    cout << "View series list (1) \nAdd a series (2) \nReturn to main menu (3)" << endl;
                    cin >> opcion1;

                    if (opcion1 == 1) {
                        // List all series
                        for (int i = 0; i < serie.size(); i++) {
                            Series* seri = serie.at(i);
                            cout << seri->getNombre() << " (" << i << ")" << endl;
                        }

                        // Allow the user to select and view details of a series
                        cout << "Which series would you like to view?" << endl;
                        cin >> opcion2;
                        Series* seri = serie.at(opcion2);
                        seri->informacion();
                        seri->Episodios();

                        // Prompt the user to rate an episode
                        cout << "Would you like to rate an episode? \nYes (1) \nNo (2)" << endl;
                        cin >> opcion2;
                        if (opcion2 == 1) {
                            cout << "Which episode?" << endl;
                            cin >> capitulo;
                            cout << "What rating would you give? (1-5)" << endl;
                            cin >> calificacion;
                            calificacion = (calificacion + seri->mostrarCalificacionEpisodio(capitulo)) / 2;
                            seri->rateEpisodio(capitulo, calificacion);
                            seri->rate(seri->getPromedioEpisodios());
                            cout << "The new rating is: " << seri->getPromRate() << endl;
                        } else {
                            cout << "The rating remains: " << seri->getPromRate() << endl;
                        }
                    } else if (opcion1 == 2) {
                        // Add a new series to the collection
                        cout << "Enter the series ID:" << endl;
                        cin.ignore();
                        getline(cin, id);
                        cout << "Enter the series name:" << endl;
                        getline(cin, nombre);
                        cout << "Enter the duration per episode:" << endl;
                        cin >> duracion;
                        cout << "Enter the series genre:" << endl;
                        cin.ignore();
                        getline(cin, genero);
                        cout << "How many episodes does the series have?" << endl;
                        cin >> numEpisodios;
                        Series* seri = new Series(id, nombre, duracion, genero, numEpisodios);
                        serie.push_back(seri);
                        for (int j = 1; j <= numEpisodios; j++) {
                            cout << "Rate episode " << j << " (1-5)" << endl;
                            cin >> calificacion;
                            seri->rateEpisodio(j, calificacion);
                        }
                        seri->rate(seri->getPromedioEpisodios());
                        seri->informacion();
                        seri->Episodios();
                    } else if (opcion1 == 3) {
                        y = true;
                    } else {
                        cout << "Invalid option. Please select a valid option." << endl;
                    }
                }
                break;

            case 3:
                // Videos menu
                cout << "VIDEOS:" << endl;
                y = false;
                while (!y) {
                    cout << "View video list (1) \nAdd a video (2) \nReturn to main menu (3)" << endl;
                    cin >> opcion1;

                    if (opcion1 == 1) {
                        // List all videos
                        for (int i = 0; i < video.size(); i++) {
                            Video* vide = video.at(i);
                            cout << vide->getNombre() << " (" << i << ")" << endl;
                        }

                        // Allow the user to select and view details of a video
                        cout << "Which video would you like to view?" << endl;
                        cin >> opcion2;
                        Video* vide = video.at(opcion2);
                        vide->informacion();

                        // Prompt the user to rate the video
                        cout << "Would you like to rate the video? \nYes (1) \nNo (2)" << endl;
                        cin >> opcion2;
                        if (opcion2 == 1) {
                            cout << "What rating would you give? (1-5)" << endl;
                            cin >> calificacion;
                            calificacion = (calificacion + vide->getPromRate()) / 2;
                            vide->rate(calificacion);
                            cout << "The new rating is: " << vide->getPromRate() << endl;
                        } else {
                            cout << "The rating remains: " << vide->getPromRate() << endl;
                        }
                    } else if (opcion1 == 2) {
                        // Add a new video to the collection
                        cout << "Enter the video channel:" << endl;
                        cin.ignore();
                        getline(cin, id);
                        cout << "Enter the video name:" << endl;
                        getline(cin, nombre);
                        cout << "Enter the video duration:" << endl;
                        cin >> duracion;
                        cout << "Enter the video genre:" << endl;
                        cin.ignore();
                        getline(cin, genero);
                        Video* vide = new Video(id, nombre, duracion, genero);
                        video.push_back(vide);
                        cout << "Rate the video (1-5)" << endl;
                        cin >> calificacion;
                        vide->rate(calificacion);
                        vide->informacion();
                    } else if (opcion1 == 3) {
                        y = true;
                    } else {
                        cout << "Invalid option. Please select a valid option." << endl;
                    }
                }
                break;

            case 4:
                // Exit the program
                x = true;
                break;

            default:
                cout << "Invalid option. Please select a valid option." << endl;
                break;
        }
    }

    return 0;
}
