#include "Biblioteca.h"
#include <iostream>
using namespace std;

//Constructor
Biblioteca::Biblioteca() : num_libros(0){}

//Descontructor
Biblioteca::~Biblioteca() {
    for (int i = 0; i < num_libros; ++i) {
        delete libros[i]; //borra los libros 
    }
}
//Se sobrecarga el operador para añadir un libro a la biblioteca
Biblioteca& Biblioteca::operator+=(Libro* libro) {
    if (num_libros < 100) { //Verifica que no pase el limite del arreglo
        libros[num_libros++] = libro; //Añade el libro
    }
    return *this;
}
//Metodo que muestra la info de los libros
void Biblioteca::muestra_libros() {
    cout << "Libros en la biblioteca:" << endl;
    for (int i = 0; i < num_libros; ++i) {
        cout << libros[i]->to_string() << endl;//Llama el to_string de los libros
    }
}
//Metodo para calcular el costo total de los libros en la biblioteca
double Biblioteca::calc_costo_total() {
    double total = 0;
    for (int i = 0; i<num_libros; ++i) {
        total += libros[i]->get_precio(); //suma el precio de cada libro a "total"
    }
    return total; //Regresa la suma de "total"
}
