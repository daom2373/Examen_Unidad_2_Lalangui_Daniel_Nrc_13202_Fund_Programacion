/*
4. Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un n�mero
cualquiera por pantalla, el n�mero se pedir� en el programa principal. Usar procedimiento
*/
#include <iostream>

// Prototipo del procedimiento
void mostrar_tabla_multiplicar(int numero);

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero
    std::cout << "Ingrese un n�mero: ";
    std::cin >> numero;

    // Llamar al procedimiento para mostrar la tabla de multiplicar
    mostrar_tabla_multiplicar(numero);

    return 0;
}

// Procedimiento para mostrar la tabla de multiplicar hasta el 20 de un n�mero dado
void mostrar_tabla_multiplicar(int numero) {
    std::cout << "Tabla de multiplicar del " << numero << " hasta el 20:" << std::endl;
    for (int i = 1; i <= 20; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }
}
