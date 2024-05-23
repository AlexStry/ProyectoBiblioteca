#ifndef SERPIENTE_H
#define SERPIENTE_H
#include "Objeto.h"
#include <string>
using namespace std;

class Serpiente : public Objeto {
    private:
    int tamaño;
    string direccion;
    //variables
    public:
    void mover(); //Movimiento de la serpiente
    void aumentarTamaño(); //Aumento de taamño de la serpiente
    void cambiarDireccion(const string& nuevaDireccion); //Metodo para cambiar la direccion de la serpiente
};
