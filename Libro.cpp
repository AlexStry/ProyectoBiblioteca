#include "Libro.h"
#include <sstream>

int Libro::next_id = 0; //Variable estatica

//Constructor clase Libro
Libro::Libro(string tit, string tip) : id(next_id++), titulo(tit), tipo(tip) {}

//Getters
int Libro::get_id() {
    return id;
}

string Libro::get_titulo() {
    return titulo;
}


string Libro::get_tipo(){
    return tipo;
} //Final de los getters

//Constructor LibroFisico
LibroFisico::LibroFisico(string titulo, double precio)
    : Libro(titulo, "fisico"),precio(precio) {}

double LibroFisico::get_precio() { //Getter
    return precio;
}

//Representacion en cadena de LibroFisico
string LibroFisico::to_string() {
    return "Id: " + std::to_string(get_id()) +" Tipo: fisico Titulo: "+ get_titulo() + " Precio: $" + std::to_string(get_precio());
}
//Constructor
LibroElectronico::LibroElectronico(string titulo, double precio_base)
    : Libro(titulo,"electronico"), precio_base(precio_base), descuento(0.1) {}

double LibroElectronico::get_precio() {// getter
    return precio_base *(1 - descuento);
}

//Representacion en cadena
string LibroElectronico::to_string(){
    return "Id: " + std::to_string(get_id()) + " Tipo: electronico Titulo: " + get_titulo() + " Precio con descuento: $" + std::to_string(get_precio());
}
