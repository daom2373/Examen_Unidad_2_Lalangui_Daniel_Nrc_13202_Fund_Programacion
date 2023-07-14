/*
6. Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt)
o no.
fopen(nombre de archivo , modo);
nombre de archivo = cadena ... contiene el identificar externo del archivo
modo = cadena ... contiene el modo en que va a ser tratado el archivo
*/
#include <iostream>
#include <cstdio>

int main() {
    std::string nombreArchivo;
    std::cout << "Ingrese el nombre del archivo de texto: ";
    std::cin >> nombreArchivo;

    // Intentar abrir el archivo en modo de lectura
    FILE* archivo = fopen(nombreArchivo.c_str(), "r");

    if (archivo) {
        std::cout << "El archivo existe." << std::endl;
        fclose(archivo);
    } else {
        std::cout << "El archivo no existe." << std::endl;
    }

    return 0;
}
