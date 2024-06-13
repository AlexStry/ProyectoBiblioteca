#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Libro.h"
using namespace std;

//Clase de biblioteca donde iran los libros
class Biblioteca {
private: 
    Libro* libros[100]; //Arreglo de punteros
    int num_libros; //Cantidad de libros en la biblioteca
public:
    Biblioteca(); // Constructor
    ~Biblioteca(); //Descontructor
    Biblioteca& operator+=(Libro* libro); //Sobrecarga += para añadir libros a la biblioteca
    void muestra_libros(); //Muestra libros en la biblioteca
    double calc_costo_total(); //Costo total de los libros en la biblioteca
};
#endif
