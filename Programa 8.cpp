/*
8. Crear un programa en C++, que pueda seguir agregando contactos de email, hacia el
archivo que creamos en el ejercicio 7
*/
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream archivo("contactos.txt", std::ios::app);

    if (archivo.is_open()) {
        std::string email;
        char continuar;

        do {
            std::cout << "Ingrese el email del contacto: ";
            std::cin >> email;

            archivo << email << std::endl;

            std::cout << "¿Desea agregar otro contacto? (S/N): ";
            std::cin >> continuar;
        } while (continuar == 'S' || continuar == 's');

        archivo.close();
        std::cout << "Se han agregado los contactos al archivo 'contactos.txt'." << std::endl;
    } else {
        std::cout << "No se pudo abrir el archivo 'contactos.txt'." << std::endl;
    }

    return 0;
}
