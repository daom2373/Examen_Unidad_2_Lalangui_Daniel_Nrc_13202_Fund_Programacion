
/*
9. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál
de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno

*/


#include <iostream>
#include <string>

// Definición de la estructura alumno
struct Alumno {
    std::string nombre;
    int edad;
    double promedio;
};

int main() {
    Alumno alumnos[3];

    // Pedir datos al usuario para los 3 alumnos
    for (int i = 0; i < 3; i++) {
        std::cout << "Datos del alumno " << i + 1 << std::endl;
        std::cout << "Nombre: ";
        std::cin >> alumnos[i].nombre;
        std::cout << "Edad: ";
        std::cin >> alumnos[i].edad;
        std::cout << "Promedio: ";
        std::cin >> alumnos[i].promedio;
        std::cout << std::endl;
    }

    // Encontrar el alumno con el mejor promedio
    double mejorPromedio = alumnos[0].promedio;
    int indiceMejorPromedio = 0;

    for (int i = 1; i < 3; i++) {
        if (alumnos[i].promedio > mejorPromedio) {
            mejorPromedio = alumnos[i].promedio;
            indiceMejorPromedio = i;
        }
    }

    // Imprimir los datos del alumno con el mejor promedio
    std::cout << "El alumno con el mejor promedio es:" << std::endl;
    std::cout << "Nombre: " << alumnos[indiceMejorPromedio].nombre << std::endl;
    std::cout << "Edad: " << alumnos[indiceMejorPromedio].edad << std::endl;
    std::cout << "Promedio: " << alumnos[indiceMejorPromedio].promedio << std::endl;

    return 0;
}
