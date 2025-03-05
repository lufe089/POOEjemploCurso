//
// Created by zalon on 5/03/2025.
//

#ifndef CURSO_H
#define CURSO_H
#include "Salon.h"


class Curso {
private:
    std::string nombreCurso;
    int codigo;
    Salon salon;
public:
    Curso () = default;
    Curso(std::string nombreCurso, int codigo);
    void asignarSalon(Salon salon);
    void mostrarInfo();
};



#endif //CURSO_H
