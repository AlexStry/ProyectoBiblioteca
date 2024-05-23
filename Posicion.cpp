#include "Posicion.h"

Posicion::Posicion() : x(0), y(0) {} //Constructor

Posicion::Posicion(int x, int y) : x(x), y(y) {}
//Metodo par obtener y devolver la coordenada de x
int Posicion::getX() const {
    return x;
}
//Metodo para establecer la coordenada de x
void Posicion::setX(int x) {
    this->x = x;
}
//Metodo para obtener y devolver la coordeanada de y
int Posicion::getY() const {
    return y;
}
//Metodo para establecer la coordenada de y
void Posicion::setY(int y) {
    this->y = y;
}
