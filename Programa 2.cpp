/*
2. Hacer un programa que muestre 3 n�meros ordenados desendentemente, utilizar un
procedimiento para cada operaci�n
*/
#include <iostream>

// Prototipos de los procedimientos
void ordenar_descendentemente(int& a, int& b, int& c);
void swap(int& x, int& y);

int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los n�meros
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    // Llamar al procedimiento para ordenar los n�meros
    ordenar_descendentemente(num1, num2, num3);

    // Mostrar los n�meros ordenados
    std::cout << "Los numeros ordenados en forma descendente son: " << num1 << " " << num2 << " " << num3 << std::endl;

    return 0;
}

// Procedimiento para ordenar los n�meros en orden descendente
void ordenar_descendentemente(int& a, int& b, int& c) {
    if (a < b) {
        swap(a, b);
    }
    if (a < c) {
        swap(a, c);
    }
    if (b < c) {
        swap(b, c);
    }
}

// Procedimiento para intercambiar dos valores
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
