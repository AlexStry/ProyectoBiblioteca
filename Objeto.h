#ifndef OBJETO_H
#define OBJETO_H
#include "Posicion.h"

class Objeto {
    protected:
    Posicion posicion;
    //variables

    public:
    Objeto();
    Posicion getPosicion() const; //Obtener la posicion de un objeto
    void setPosicion(const Posicion& p); //establecer la posicion del objeto
};
