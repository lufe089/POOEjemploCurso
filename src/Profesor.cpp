//
// Created by zalon on 5/03/2025.
//

#include "Profesor.h"

// Definición del constructor
Profesor::Profesor(std::string nombre, std::string id)
{
    Profesor::nombre = nombre;
    Profesor::id = id;
}

// Definición de métodos
std::string Profesor::getNombre() {
    return nombre;
}

std::string Profesor::getId() {
    return id;
}

void Profesor::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Profesor::setId(std::string id) {
    this->id = id;
}

void Profesor::agregarCurso(Curso curso) {
    cursos.push_back(curso);
}

std::vector<Curso> Profesor::getCursos() {
    return cursos;
}