#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int menorImpar = 0; // Inicializado en 0, se actualizará con el primer impar encontrado
    int mayorPar = 0;   // Inicializado en 0, se actualizará con el primer par encontrado
    bool primerImpar = true;
    bool primerPar = true;

    // Leer los 10 números y guardarlos en el array
    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    // Encontrar el menor de los impares y el mayor de los pares
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) { // Si es par
            if (primerPar) { // Si es el primer par encontrado
                mayorPar = numeros[i];
                primerPar = false;
            } 
            else if (numeros[i] > mayorPar) { // Actualizamos el mayor par
                mayorPar = numeros[i];
            }
        } else { // Si es impar
            if (primerImpar) { // Si es el primer impar encontrado
                menorImpar = numeros[i];
                primerImpar = false;
            } 
            else if (numeros[i] < menorImpar) { // Actualizamos el menor impar
                menorImpar = numeros[i];
            }
        }
    }

    // Imprimir los resultados
    cout << "El menor de los impares es: " << menorImpar << endl;
    cout << "El mayor de los pares es: " << mayorPar << endl;

    return 0;
}