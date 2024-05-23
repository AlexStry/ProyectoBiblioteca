#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Serpiente.h"
#include "Comida.h"

class Juego {
    private:
    Tablero tablero;
    Serpiente serpiente;
    Comida comida;
    //varibles

    public:
    Juego(); //Constructor
    void empezarJuego(); //Comenzar el juego
    void terminarJuego(); //Terminar el juego
};
