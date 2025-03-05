#include <iostream>
#include "src/Salon.h"
#include "src/Curso.h"
#include "src/Profesor.h"

void iniciarInfo() {
    // Crear dos objetos salones
    Salon almendro3_4("Almendros3.4", 30);
    Salon palmas3_1("Palmas3.1", 30);

    Salon salonSinNombre('h');

    std::cout << "Imprimo info de los salones \n";
    // Invoco los metodos
    //almendro3_4.mostrarInfo();

    // Muestro info del salon sin nombre
    //salonSinNombre.mostrarInfo();

    std::cout << "Creo cursos \n";
    Curso poo("Programacion Orientada a objetos", 12);
    poo.asignarSalon(almendro3_4);
    //poo.mostrarInfo();

    Profesor luisaRincon("Luisa Rincon", "1545455");
    luisaRincon.agregarCurso(poo);
    luisaRincon.mostrarCursos();


}


int main() {
    std::cout << "Hello, World!" << std::endl;
    iniciarInfo();

    return 0;
}