#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << numero << " es un número par." << std::endl;
    } else {
        std::cout << numero << " es un número impar." << std::endl;
    }

    return 0;
}
