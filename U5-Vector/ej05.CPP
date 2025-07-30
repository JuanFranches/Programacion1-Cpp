/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
menor de los impares y el mayor de los pares. Suponer que habrá al menos un
número par y uno impar.
*/

#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int menorImpar = 0; 
    int mayorPar = 0;
    bool primerImpar = true;
    bool primerPar = true;


    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }


    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) { 
            if (primerPar) { 
                mayorPar = numeros[i];
                primerPar = false;
            } 
            else if (numeros[i] > mayorPar) { 
                mayorPar = numeros[i];
            }
        } else { 
            if (primerImpar) { 
                menorImpar = numeros[i];
                primerImpar = false;
            } 
            else if (numeros[i] < menorImpar) { 
                menorImpar = numeros[i];
            }
        }
    }

    // Imprimir los resultados
    cout << "El menor de los impares es: " << menorImpar << endl;
    cout << "El mayor de los pares es: " << mayorPar << endl;

    return 0;
}