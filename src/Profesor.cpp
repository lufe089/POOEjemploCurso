//
// Created by zalon on 5/03/2025.
//

#include "Profesor.h"

#include <iostream>
#include <ostream>

Profesor::Profesor(std::string nombre, std::string id) {
    this->nombre = nombre;
    this->id = id;
}

void Profesor::agregarCurso(Curso curso) {
    //FIXME: Verificar que no exista previamente
    this->cursos.push_back(curso);
}

void Profesor::mostrarCursos() {
    std::cout << "La profesora " << this->nombre << "Tiene estos cursos: " << std::endl;

    for (int i = 0; i < this->cursos.size(); i++) {
        Curso cursoMostrar = this->cursos[i];
        cursoMostrar.mostrarInfo();
    }
}
