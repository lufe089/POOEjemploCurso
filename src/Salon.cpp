#include "Salon.h"
#include <iostream>

/***
 * Inicializa la clase
 */
Salon::Salon(std::string nombreSalon, int capacidad) {

    this->nombreSalon = nombreSalon;
    this->capacidad = capacidad;
    // std::cout << "Entre al constructor con todos los parámetros \n";
}

Salon::Salon(int capacidad) {
    this->capacidad = capacidad;
    this->nombreSalon = "Sin nombre";
    //std::cout << "Constructor solo con capacidad \n";
}

Salon::Salon(std::string nombreSalon) {
    this-nombreSalon = nombreSalon;
    std::cout << " Solo tengo el nombre \n";
}

void Salon::mostrarInfo() {
    std::cout << "Los datos del salon son: \n";
    std::cout << "Nombre Salon: " << nombreSalon << std::endl;
    std::cout << "Capacidad: " << capacidad << std::endl;
}
