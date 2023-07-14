/*
5. Hacer un programa que pida por pantalla una temperatura en grados Celsius,
muestre un menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por
pantalla, utilizar funciones
*/
#include <iostream>

// Prototipos de las funciones
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);

int main() {
    double temperaturaCelsius;
    char opcion;

    // Solicitar al usuario la temperatura en grados Celsius
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> temperaturaCelsius;

    // Mostrar el menú de opciones
    std::cout << "Seleccione la opción de conversión:" << std::endl;
    std::cout << "a) Fahrenheit" << std::endl;
    std::cout << "b) Kelvin" << std::endl;
    std::cout << "Opción: ";
    std::cin >> opcion;

    // Realizar la conversión y mostrar el resultado
    switch (opcion) {
        case 'a':
            std::cout << "Temperatura en grados Fahrenheit: " << celsiusToFahrenheit(temperaturaCelsius) << std::endl;
            break;
        case 'b':
            std::cout << "Temperatura en Kelvin: " << celsiusToKelvin(temperaturaCelsius) << std::endl;
            break;
        default:
            std::cout << "Opción inválida" << std::endl;
            break;
    }

    return 0;
}

// Función para convertir grados Celsius a Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Función para convertir grados Celsius a Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
