#include "Objeto.h"
//Obtener y devolver la posicion del objeto
Posicion Objeto::getPosicion() const {
    return posicion;
}
//Establecer la posicion del objeto
void Objeto::setPosicion(const Posicion& p) {
    posicion = p; //Asignamos la nueva posicion a el miembro 'posicion'
}
