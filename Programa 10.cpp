/*
10. Pedir al usuario que digite una palabra. luego mostrar la palabra invertida y
comprobar si es capicúa
*/



#include <iostream>
#include <string>

int main() {
    std::string palabra;

    // Solicitar al usuario que ingrese una palabra
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    // Mostrar la palabra invertida
    std::string palabraInvertida = "";
    for (int i = palabra.length() - 1; i >= 0; i--) {
        palabraInvertida += palabra[i];
    }
    std::cout << "Palabra invertida: " << palabraInvertida << std::endl;

    // Verificar si la palabra es un palíndromo (capicúa)
    bool esCapicua = (palabra == palabraInvertida);

    if (esCapicua) {
        std::cout << "La palabra es un palíndromo (capicúa)." << std::endl;
    } else {
        std::cout << "La palabra no es un palíndromo (capicúa)." << std::endl;
    }

    return 0;
}
