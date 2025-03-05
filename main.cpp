#include <iostream>

#include "src/Curso.h"
#include "src/Salon.h"
#include "src/Profesor.h"


int main() {
    // 1. Creamos un objeto Salon
    Salon salon101("Salon 101", 30);

    // 2. Creamos un Curso y lo asignamos al salon anterior
    Curso poo("Programación Orientada a Objetos", 1001);
    poo.asignarSalon(salon101);

    // 3. Creamos un Profesor y le agregamos el curso
    Profesor profJuan("Juan Perez", "P001");
    profJuan.agregarCurso(poo);

    // 4. Creamos otro Salón, otro Curso y otro Profesor
    Salon salon202("Salon 202", 50);
    Curso algebra("Algebra Lineal", 2002);
    algebra.asignarSalon(salon202);

    Profesor profMaria("Maria Lopez", "P002");
    profMaria.agregarCurso(algebra);

    // Mostramos información por consola
    std::cout << "Profesor: " << profJuan.getNombre()
              << " dicta el curso: "
              << profJuan.getCursos()[0].getNombreCurso()
              << " en el salon: "
              << profJuan.getCursos()[0].getSalonAsignado().getNombreSalon()
              << std::endl;

    std::cout << "Otro profesor: " << profMaria.getNombre()
              << " dicta el curso: "
              << profMaria.getCursos()[0].getNombreCurso()
              << " en el salon: "
              << profMaria.getCursos()[0].getSalonAsignado().getNombreSalon()
              << std::endl;

    return 0;
}