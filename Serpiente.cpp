#include "Serpiente.h"
using namespace std;
//Constructor
Serpiente::Serpiente() : tamaño(0), direccion("") {}

Serpiente::Serpiente(int tamaño, const string& direccion) : tamaño(tamaño), direccion(direccion) {}

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
