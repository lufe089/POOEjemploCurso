cmake_minimum_required(VERSION 3.30)
project(EjmCurso)

set(CMAKE_CXX_STANDARD 20)

add_executable(EjmCurso main.cpp
        src/Curso.cpp
        src/Curso.h
        src/Profesor.cpp
        src/Profesor.h
        src/Salon.cpp
        src/Salon.h)
