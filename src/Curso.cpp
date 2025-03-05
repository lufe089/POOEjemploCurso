//
// Created by zalon on 5/03/2025.
//

#include "Curso.h"

#include <iostream>
#include <ostream>

Curso::Curso(std::string nombreCurso, int codigo){
    Curso::nombreCurso = nombreCurso;
    this->codigo = codigo;
}

void Curso::asignarSalon(Salon salon) {
    this->salon = salon;
    // Dos formas de hacer lo mismo Curso::salon = salon;

}

void Curso::mostrarInfo() {
    std::cout << this->nombreCurso << " cod: " << this->codigo << std::endl;
    std::cout << "Esta es la informacion del salon: \n";
    this->salon.mostrarInfo();

}
