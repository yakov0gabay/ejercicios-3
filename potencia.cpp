#include <iostream>

double elevarNumero(double base, int potencia) {
    double resultado = 1.0;

    for (int i = 0; i < potencia; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    double numero;
    int potencia;

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    std::cout << "Ingrese la potencia a la que desea elevarlo: ";
    std::cin >> potencia;

    double resultado = elevarNumero(numero, potencia);

    std::cout << numero << " elevado a la potencia " << potencia << " es igual a " << resultado << std::endl;

    return 0;
}
