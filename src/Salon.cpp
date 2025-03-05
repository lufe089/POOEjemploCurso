//
// Created by zalon on 5/03/2025.
//

# include "Salon.h"

Salon::Salon(std::string nombreSalon, int capacidad){
    Salon::nombreSalon = nombreSalon;
    Salon::capacidad = capacidad;
}

std::string Salon::getNombreSalon() {
    return nombreSalon;
}

int Salon::getCapacidad() {
    return capacidad;
}

void Salon::setNombreSalon(std::string nombreSalon) {
    this->nombreSalon = nombreSalon;
}

void Salon::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}
