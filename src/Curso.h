//
// Created by zalon on 5/03/2025.
//

#ifndef CURSO_H
#define CURSO_H

#include <string>
#include "Salon.h" // Para relacionar Curso con Salon

class Curso {
private:
    std::string nombreCurso;
    int codigo;
    Salon salonAsignado;

public:
    Curso() = default;
    Curso(std::string nombreCurso, int codigo);

    std::string getNombreCurso();
    int getCodigo();

    void setNombreCurso(std::string nombreCurso);
    void setCodigo(int codigo);

    void asignarSalon(Salon salon);
    Salon getSalonAsignado();
};



#endif //CURSO_H
