#ifndef MOVIEMANAGER_H
#define MOVIEMANAGER_H

#include "Movie.h"  // Incluye la definición de Movie aquí
#include <string>
#include <iostream>
#include <algorithm> // Incluye también aquí para el sort

class MovieManager {
private:
    Movie movies[100]; // Asumimos un máximo de 100 películas
    int size = 0;
public:
    void addMovie(const Movie& movie);
    void removeMovie(int index);
    void sortMoviesByName();
    void changeMovieDetails(int index, const Movie& newDetails);
    void printMovies();
};

#endif
