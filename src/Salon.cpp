//
// Created by zalon on 5/03/2025.
//

#include "Salon.h"
#include <iostream>

/***
 * Inicializa la clase
 */
Salon::Salon(std::string nombreSalon, int capacidad) {

    Salon::nombreSalon = nombreSalon;
    Salon::capacidad = capacidad;
    // std::cout << "Entre al constructor con todos los parámetros \n";
}

Salon::Salon(int capacidad) {
    Salon::capacidad = capacidad;
    Salon::nombreSalon = "Sin nombre";
    //std::cout << "Constructor solo con capacidad \n";
}

Salon::Salon(std::string nombreSalon) {
    Salon::nombreSalon = nombreSalon;
    //std::cout << " Solo tengo la el nombre \n";
}

void Salon::mostrarInfo() {
    std::cout << "Los datos del salon son: \n";
    std::cout << "Nombre Salon: " << nombreSalon << std::endl;
    std::cout << "Capacidad: " << capacidad << std::endl;
}
