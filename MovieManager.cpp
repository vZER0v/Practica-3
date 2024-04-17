#include "MovieManager.h"
#include <algorithm>

void MovieManager::addMovie(const Movie& movie) {
    if (size < 100) {
        movies[size++] = movie;
    } else {
        std::cerr << "Array is full, cannot add more movies." << std::endl;
    }
}

void MovieManager::removeMovie(int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            movies[i] = movies[i + 1];
        }
        size--;
    } else {
        std::cerr << "Index out of range." << std::endl;
    }
}

void MovieManager::sortMoviesByName() {
    std::sort(movies, movies + size, [](const Movie& a, const Movie& b) {
        return a.name < b.name;
    });
}

void MovieManager::changeMovieDetails(int index, const Movie& newDetails) {
    if (index >= 0 && index < size) {
        movies[index] = newDetails;
    } else {
        std::cerr << "Index out of range." << std::endl;
    }
}

void MovieManager::printMovies() {
    if (size == 0) {
        std::cout << "No movies to display." << std::endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        std::cout << "Movie " << i + 1 << ":\n"
                  << "Name: " << movies[i].name << "\n"
                  << "Director: " << movies[i].director << "\n"
                  << "Year: " << movies[i].year << "\n"
                  << "Genre: " << movies[i].genre << "\n"
                  << "Duration: " << movies[i].duration << "\n" << std::endl;
    }
}
