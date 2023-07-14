/*
5. Hacer un programa que pida por pantalla una temperatura en grados Celsius,
muestre un men� para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por
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

    // Mostrar el men� de opciones
    std::cout << "Seleccione la opci�n de conversi�n:" << std::endl;
    std::cout << "a) Fahrenheit" << std::endl;
    std::cout << "b) Kelvin" << std::endl;
    std::cout << "Opci�n: ";
    std::cin >> opcion;

    // Realizar la conversi�n y mostrar el resultado
    switch (opcion) {
        case 'a':
            std::cout << "Temperatura en grados Fahrenheit: " << celsiusToFahrenheit(temperaturaCelsius) << std::endl;
            break;
        case 'b':
            std::cout << "Temperatura en Kelvin: " << celsiusToKelvin(temperaturaCelsius) << std::endl;
            break;
        default:
            std::cout << "Opci�n inv�lida" << std::endl;
            break;
    }

    return 0;
}

// Funci�n para convertir grados Celsius a Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Funci�n para convertir grados Celsius a Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
