#include <iostream>
#include <cmath>
#include <vector>

//created Aug 14 2026, @author: Yahir
//Calcular el promedio de todas las notas de alguien

int main() {
    int numNotas;
    std::cout << "Cuantas notas tienes? ";
    std::cin >> numNotas;
    std::vector<double> notas;
    double suma = 0;

    for (int i = 0; i < numNotas; i++) {
        double nota;
        std::cout << "Ingresa la nota " << i + 1 << ": ";
        std::cin >> nota;
        notas.push_back(nota);
        suma += nota;
    }

    double promedio = suma / numNotas;
    std::cout << "El promedio de tus notas es: " << promedio;
}