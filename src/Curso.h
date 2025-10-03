#ifndef CURSO_H
#define CURSO_H
#include "Salon.h"


class Curso {
private:
    std::string nombreCurso; // Atributos de clase
    int codigo;
    Salon salon;
public:
    // Constructor por defecto, si no se va a hacer ninguna implementación especificca se usa ese constructor
    Curso () = default;
    Curso(std::string nombreCurso, int codigo);
    void asignarSalon(Salon salon);
    void mostrarInfo();
};



#endif //CURSO_H
