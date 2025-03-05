//
// Created by zalon on 5/03/2025.
//

#ifndef PROFESOR_H
#define PROFESOR_H

#include "Curso.h"
#include <vector>

class Profesor {

private:
    std::string nombre;
    std::string id;
    std::vector<Curso> cursos;

public:
    Profesor() = default;
    Profesor(std::string nombre, std::string id);
    void agregarCurso(Curso curso);
    void mostrarCursos();
};



#endif //PROFESOR_H
