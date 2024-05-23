#include "Tablero.h"

//Constructores
Tablero::Tablero() : ancho(0), altura(0), serpiente() {}

Tablero::Tablero(int ancho, int altura, const Serpiente& serpiente)
    : ancho(ancho), altura(altura), serpiente(serpiente) {}

void Tablero::dibujar() {
    //Creacion del tablero
}

bool Tablero::checarColision(const Posicion& p) {
    //Aqui se implementa el metodo de colision
}
