#include "Biblioteca.h"
#include "Libro.h"
#include <iostream>
using namespace std;

int main() {
    Biblioteca biblioteca; // Crea una biblioteca
    // Añade los libros a la biblioteca
    biblioteca += new LibroFisico("Diario de Greg", 300);
    biblioteca += new LibroFisico("Percy Jackson", 350);
    biblioteca += new LibroElectronico("The Hobbit",200);
    biblioteca += new LibroElectronico("Hunger Games", 250);
    biblioteca.muestra_libros(); // Muestra la info de los libros en biblioteca
    // Muestra el costo total
    cout << "Costo total de los libros: " <<biblioteca.calc_costo_total()<< endl;


    return 0;
}
