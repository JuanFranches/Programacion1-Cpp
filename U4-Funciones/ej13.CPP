/*
Escribir una función llamada calcularPotencia para que, dados dos números
enteros, calcule y devuelva la potencia del primero a la del segundo. Tener en
cuenta las siguientes posibilidades:
calcularPotencia(2, 3) → 8
calcularPotencia(2, 0) → 1
calcularPotencia(2, -3) → 0,125
*/

#include <iostream>
using namespace std;

double calcularPotencia(int base, int exponente) {
    
    if (exponente == 0) {
        return 1;
    }
    
    double resultado = 1;
    int exp;
    
    if (exponente < 0) {
        exp = -exponente;
    } else {
        exp = exponente;
    }
    
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    if (exponente < 0) {
        return 1 / resultado;
    }
    
    return resultado;
}

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << "Resultado: " << calcularPotencia(base, exponente) << endl;

    return 0;
}