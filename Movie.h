#ifndef MOVIE_H
#define MOVIE_H

#include <string>

struct Movie {
    std::string name;
    std::string director;
    int year;
    std::string genre;
    std::string duration; // HH:MM:SS format
};

#endif
