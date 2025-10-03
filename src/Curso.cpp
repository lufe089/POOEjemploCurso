#include "Curso.h"

#include <iostream>

Curso::Curso(std::string nombreCurso, int codigo){    
    // Variables de instancia
    this ->nombreCurso = nombreCurso;
    this->codigo = codigo;
}

void Curso::asignarSalon(Salon salon) {
    this->salon = salon;
}

void Curso::mostrarInfo() {
    std::cout << this->nombreCurso << " cod: " << this->codigo << std::endl;
    std::cout << "Esta es la informacion del salon: \n";
    this->salon.mostrarInfo();

}
