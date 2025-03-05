//
// Created by zalon on 5/03/2025.
//

#ifndef SALON_H
#define SALON_H

#include <string>

class Salon {
private:
    std::string nombreSalon;
    int capacidad;
public:
    Salon() = default;
    Salon(std::string nombreSalon, int capacidad); // Constructor con parametros
    Salon(std::string nombreSalon);
    Salon(int capacidad);
    void mostrarInfo();
};



#endif //SALON_H
