#include <iostream>
#include <cmath>
#include <list>
using namespace std;

//created Aug 14 2026
//@author: Yahir

int main() {
    
    //Calcular el promedio de todas las notas de alguien

    int numNotas;
    cout << "Cuantas notas tienes? ";
    cin >> numNotas;

    list<double> notas;
    double suma = 0;

    for (int i = 0; i < numNotas; i++) {
        double nota;
        cout << "Ingresa la nota " << i + 1 << ": ";
        cin >> nota;
        notas.push_back(nota);
        suma += nota;
    }

    double promedio = suma / numNotas;
    cout << "El promedio de tus notas es: " << promedio;
}