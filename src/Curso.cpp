//
// Created by zalon on 5/03/2025.
//

#include "Curso.h"

Curso::Curso(std::string nombreCurso, int codigo){
    Curso::nombreCurso = nombreCurso;
    Curso::codigo = codigo;
}

std::string Curso::getNombreCurso() {
    return nombreCurso;
}

int Curso::getCodigo() {
    return codigo;
}

void Curso::setNombreCurso(std::string nombreCurso) {
    this->nombreCurso = nombreCurso;
}

void Curso::setCodigo(int codigo) {
    this->codigo = codigo;
}

void Curso::asignarSalon(Salon salon) {
    salonAsignado = salon;
}

Salon Curso::getSalonAsignado() {
    return salonAsignado;
}
