# Media Manager: Movies, Series, and Videos

This C++ project is a media manager that allows users to view, rate, and add movies, series, and videos. The program showcases object-oriented programming (OOP) concepts, such as inheritance, polymorphism, and encapsulation, through the management of different types of media content.

## Features
- Manage a collection of movies, series, and videos.
- View detailed information about each media item.
- Rate media content (both individual episodes for series and entire items).
- Add new movies, series, and videos to the collection.

## Classes Overview
The project uses multiple classes for handling media types:
- **Pelicula**: Represents a movie with its own attributes (ID, name, duration, genre, and rating).
- **Series**: Represents a TV series that includes multiple episodes, each with its own rating.
- **Video**: Represents an online video from platforms like YouTube with details such as the creator, duration, and genre.

## Object-Oriented Concepts
- **Inheritance**: `Pelicula`, `Series`, and `Video` inherit common properties from the base class `Tipos`.
- **Polymorphism**: Each media type implements its own version of the `informacion()` method to display specific details.
- **Encapsulation**: Data attributes are kept private and accessed via getter and setter methods.

## Project Details
- **First version**: October 2024
- **Authors**: Diego Samperio Arce, Saúl Alfredo
- **Development timeline**: Mid-2023

## How to Run
1. Clone the repository.
2. Compile the project using a C++ compiler.
3. Run the program and choose between movies, series, or videos to view, rate, or add.

## License
This project is licensed under the MIT License.
