#include <iostream>
#include <vector>

// Funci�n para calcular la puntuaci�n basada en las reglas dadas
int calcularPuntuacion(const std::vector<int>& numeros) {
    int puntuacion = 0;
    for (size_t i = 0; i < numeros.size(); ++i) {
        int numero = numeros[i];
        if (numero == 5) {
            puntuacion += 5;
        } else if (numero % 2 == 0) { // Verifica si el n�mero es par
            puntuacion += 1;
        } else { // Si el n�mero es impar y no es 5
            puntuacion += 3;
        }
    }
    return puntuacion;
}

int main() {
    // Inicializaci�n alternativa de los vectores
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {17, 19, 21};
    int arr3[] = {5, 5, 5};

    std::vector<int> ejemplo1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    std::vector<int> ejemplo2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    std::vector<int> ejemplo3(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]));

    // Imprime las puntuaciones de los ejemplos
    std::cout << "Puntuaci�n del ejemplo 1: " << calcularPuntuacion(ejemplo1) << std::endl;
    std::cout << "Puntuaci�n del ejemplo 2: " << calcularPuntuacion(ejemplo2) << std::endl;
    std::cout << "Puntuaci�n del ejemplo 3: " << calcularPuntuacion(ejemplo3) << std::endl;

    return 0;
}

