/*
7. Crear un archivo de texto (.txt), donde guardar los emails de amigos.
fprintf(puntero, informacion);
fwrite(dato a guardar, tamaño, longitud, puntero)

*/




#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string nombreArchivo;
    std::cout << "Ingrese el nombre del archivo de texto: ";
    std::cin >> nombreArchivo;

    std::ofstream archivo(nombreArchivo.c_str());

    if (archivo.is_open()) {
        std::string email;
        int numAmigos;

        std::cout << "Ingrese el número de amigos: ";
        std::cin >> numAmigos;

        archivo << "Lista de emails de amigos:\n";

        for (int i = 1; i <= numAmigos; i++) {
            std::cout << "Ingrese el email del amigo " << i << ": ";
            std::cin >> email;
            archivo << email << std::endl;
        }

        archivo.close();
        std::cout << "Se han guardado los emails en el archivo." << std::endl;
    } else {
        std::cout << "No se pudo crear el archivo." << std::endl;
    }

    return 0;
}
