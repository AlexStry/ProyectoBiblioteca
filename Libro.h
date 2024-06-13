#ifndef LIBRO_H
#define LIBRO_H
#include <string>
using namespace std;

//Clase abstracta/clase madre de las herencias LibroFisico y LibroElectronico
class Libro {
protected:
    int id; //Identificador
    string titulo; //Titulo
    string tipo; //Tipo de Libro
    static int next_id; //Variable estatica que genra ids
public:
    Libro(string tit, string tip); // Constructor
    virtual ~Libro() {} // Desconstructor
    //Getters
    int get_id();
    string get_titulo();
    string get_tipo();
    virtual double get_precio() = 0; //Metodo virtual para obtener el precio
    virtual string to_string() = 0; // Metodo virtual que representa el libro en cadena
};

//Clase de libro fisico que es herencia de la clase "Libro"
class LibroFisico : public Libro {
private:
    double precio; //Precio de LibroFisico
public:
    LibroFisico(string titulo, double precio); //Constructor
    double get_precio() override; //Sobreescribe para dar el precio
    string to_string() override;//Sobreescribe el metodo para obtener una represetnacion en cadena
};
//Clase de Libros electronicos que es herencia de la clase "Libro"
class LibroElectronico : public Libro{
//Los libros electronicos tienen descuento a comparacion de los libros fisicos
private:
    double precio_base; //Precio base
    double descuento; //Descuento que se aplica al libro
public:
    LibroElectronico(string titulo, double precio_base); //Constructor
    double get_precio() override;//Sobreescribe para obtener el precio
    string to_string() override; // Sobreescirbe para dar representacion en cadena
};

#endif
