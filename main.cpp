#include <iostream>
#include <string>
#include "CuentaCorriente.h"
#include "FileManager.h"
#include "TextSearcher.h"
#include "MessageCoder.h"
#include "MovieManager.h"

int main() {
    int option;
    std::string filepath, text;
    FileManager fileManager;
    TextSearcher textSearcher;
    MessageCoder messageCoder;
    MovieManager movieManager;

    std::cout << "Bienvenido al sistema de gestión. Seleccione una opción:\n";
    std::cout << "1. Operaciones de cuenta bancaria\n";
    std::cout << "2. Escritura y lectura de archivos\n";
    std::cout << "3. Busqueda de texto en archivos\n";
    std::cout << "4. Codificacion y decodificacion de mensajes\n";
    std::cout << "5. Gestion de peliculas\n";
    std::cout << "0. Salir\n";
    std::cin >> option;

    switch (option) {
        case 1:
            // Aquí irían las llamadas a métodos para manejar la cuenta corriente
            break;
        case 2:
            std::cout << "Ingrese el camino del archivo para escribir/leer: ";
            std::cin >> filepath;
            std::cout << "¿Desea escribir (w) o leer (r)?: ";
            char mode;
            std::cin >> mode;
            if (mode == 'w') {
                std::cout << "Ingrese el texto para guardar: ";
                std::cin.ignore(); // Ignora el salto de línea anterior
                std::getline(std::cin, text);
                fileManager.writeFile(filepath, text);
            } else {
                std::cout << fileManager.readFile(filepath) << std::endl;
            }
            break;
        case 3:
            // Implementación de la búsqueda de texto en archivos
            break;
        case 4:
            // Implementación de la codificación y decodificación de mensajes
            break;
        case 5:{
        int peliculaOption;
            std::cout << "Gestion de peliculas:\n";
            std::cout << "1. Aniadir pelicula\n";
            std::cout << "2. Eliminar pelicula\n";
            std::cout << "3. Mostrar todas las peliculas\n";
            std::cout << "4. Ordenar peliculas por nombre\n";
            std::cout << "5. Cambiar detalles de una pelicula\n";
            std::cout << "0. Regresar al menu principal\n";
            std::cin >> peliculaOption;

            switch (peliculaOption) {
                case 1: {
                    Movie newMovie;
                    std::cout << "Ingrese nombre: "; std::cin >> newMovie.name;
                    std::cout << "Ingrese director: "; std::cin >> newMovie.director;
                    std::cout << "Ingrese anio: "; std::cin >> newMovie.year;
                    std::cout << "Ingrese genero: "; std::cin >> newMovie.genre;
                    std::cout << "Ingrese duracion (HH:MM:SS): "; std::cin >> newMovie.duration;
                    movieManager.addMovie(newMovie);
                    break;
                }
                case 2: {
                    int index;
                    std::cout << "Ingrese el indice de la pelicula a eliminar: ";
                    std::cin >> index;
                    movieManager.removeMovie(index - 1); // Asumiendo que el usuario ingresa índice empezando en 1
                    break;
                }
                case 3: {
                    std::cout << "Peliculas actuales:\n";
                    movieManager.printMovies();
                    break;
                }
                case 4: {
                    movieManager.sortMoviesByName();
                    std::cout << "Peliculas ordenadas por nombre:\n";
                    movieManager.printMovies();
                    break;
                }
                case 5: {
                    int index;
                    Movie updatedMovie;
                    std::cout << "Ingrese el indice de la pelicula a modificar: ";
                    std::cin >> index;
                    std::cout << "Ingrese nuevo nombre: "; std::cin >> updatedMovie.name;
                    std::cout << "Ingrese nuevo director: "; std::cin >> updatedMovie.director;
                    std::cout << "Ingrese nuevo anio: "; std::cin >> updatedMovie.year;
                    std::cout << "Ingrese nuevo genero: "; std::cin >> updatedMovie.genre;
                    std::cout << "Ingrese nueva duracion (HH:MM:SS): "; std::cin >> updatedMovie.duration;
                    movieManager.changeMovieDetails(index - 1, updatedMovie);
                    break;
                }
                case 0:
                    break;
                default:
                    std::cout << "Opcion no valida.\n";
            }
            break;
        }
        case 0:
            std::cout << "Saliendo del programa...\n";
            return 0;
        default:
            std::cout << "Opcion no valida.\n";
    }

    return 0;
}
