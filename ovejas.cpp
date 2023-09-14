#include <iostream>
#include <vector>

int contarOvejasPresentes(const std::vector<bool>& ovejas) {
    int contador = 0;
    
    for (bool presente : ovejas) {
        if (presente) {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    std::vector<bool> ovejas = {true, false, true, true, false, true, false, true};

    int cantidad_presente = contarOvejasPresentes(ovejas);

    std::cout << "Número de ovejas presentes: " << cantidad_presente << std::endl;

    return 0;
}
