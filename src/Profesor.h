//
// Created by zalon on 5/03/2025.
//

#ifndef PROFESOR_H
#define PROFESOR_H

// Librerías necesarias
#include <string>
#include <vector>
#include "Curso.h"  // Para que Profesor sepa sobre la clase Curso

class Profesor {
private:
    // Atributos
    std::string nombre;
    std::string id;
    std::vector<Curso> cursos; // Contenedor de cursos

public:
    // Constructor
    Profesor() = default;
    Profesor(std::string nombre, std::string id);

    // Métodos de acceso (getters)
    std::string getNombre();
    std::string getId();

    // Métodos para modificar (setters)
    void setNombre(std::string nombre);
    void setId(std::string id);

    // Otros métodos
    void agregarCurso(Curso curso);
    std::vector<Curso> getCursos();
};



#endif //PROFESOR_H
