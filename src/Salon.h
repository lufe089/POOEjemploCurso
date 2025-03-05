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
    Salon(std::string nombreSalon, int capacidad);

    std::string getNombreSalon();
    int getCapacidad();

    void setNombreSalon(std::string nombreSalon);
    void setCapacidad(int capacidad);
};



#endif //SALON_H
