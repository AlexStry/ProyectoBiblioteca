#include "Serpiente.h"
using namespace std;

void Serpiente::mover() {
    //En el espacio se va establecer el movimiento de la serpiente
}

void Serpiente::aumentarTamaño() {
    // En este metodo se va impplementar el cambio del tamaño de la serpiente cuando come una fruta
}
//Metodo para cambiar la direcicon de la serpiente 
void Serpiente::cambiarDireccion(const string& nuevaDireccion) {
    direccion = nuevaDireccion;
}
