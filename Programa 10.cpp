/*
10. Pedir al usuario que digite una palabra. luego mostrar la palabra invertida y
comprobar si es capic�a
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

    // Verificar si la palabra es un pal�ndromo (capic�a)
    bool esCapicua = (palabra == palabraInvertida);

    if (esCapicua) {
        std::cout << "La palabra es un pal�ndromo (capic�a)." << std::endl;
    } else {
        std::cout << "La palabra no es un pal�ndromo (capic�a)." << std::endl;
    }

    return 0;
}
