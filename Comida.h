#ifndef COMIDA_H
#define COMIDA_H
#include "Objeto.h"

class Comida : public Objeto {
    public:
    Comida(); //Constructor
    void revivir(); //Metodo para crear mas comida
};
