#include <iostream>

unsigned long long calcularFactorial(int numero) {
    if (numero < 0) {
        return 0; // No se puede calcular el factorial de números negativos
    }
    
    unsigned long long factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int numero;

    std::cout << "Ingrese un número entero no negativo: ";
    std::cin >> numero;

    unsigned long long resultado = calcularFactorial(numero);

    std::cout << "El factorial de " << numero << " es " << resultado << std::endl;

    return 0;
}
