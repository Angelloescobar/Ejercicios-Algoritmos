#include <iostream>
#include <vector>

std::vector<int> tribonacci(const int init[3], int n) {
    std::vector<int> result;
    
    // Manejo de casos especiales
    if (n <= 0) {
        return result; // Retorna un vector vacío si n es 0 o negativo
    } else if (n == 1) {
        result.push_back(init[0]);
        return result;
    } else if (n == 2) {
        result.push_back(init[0]);
        result.push_back(init[1]);
        return result;
    } else if (n == 3) {
        result.push_back(init[0]);
        result.push_back(init[1]);
        result.push_back(init[2]);
        return result;
    }
    
    // Agregar los tres primeros números a la secuencia
    result.push_back(init[0]);
    result.push_back(init[1]);
    result.push_back(init[2]);
    
    // Generar los siguientes números de la secuencia Tribonacci
    for (int i = 3; i < n; ++i) {
        int next_value = result[i-1] + result[i-2] + result[i-3];
        result.push_back(next_value);
    }
    
    return result;
}

int main() {
    int init[3] = {0, 0, 1}; // Números iniciales para la secuencia Tribonacci
    int n = 9;               // Número de elementos que queremos en la secuencia
    
    std::vector<int> sequence = tribonacci(init, n);
    
    std::cout << "Secuencia Tribonacci: ";
    for (std::size_t i = 0; i < sequence.size(); ++i) {
        std::cout << sequence[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

