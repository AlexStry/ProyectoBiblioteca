#ifndef POSICION_H
#define POSICION_H

class Posicion {
    private:
    int x;
    int y;
    //variables
    public:
    Posicion();
    Posicion(int x, int y); //Constructor
    int getX() const;
    void setX(int x);
    //Metodos que obtienen y establecen la coordenada de x
    int getY() const;
    void setY(int y);
    //Metodos que obtienen y establecen la coordenada de y
};
