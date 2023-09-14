#include <iostream>

int main() {
    double centimetros, pulgadas;

    std::cout << "Ingrese la longitud en centímetros: ";
    std::cin >> centimetros;

    pulgadas = centimetros / 2.54;

    std::cout << centimetros << " centímetros equivale a " << pulgadas << " pulgadas." << std::endl;

    return 0;
}
