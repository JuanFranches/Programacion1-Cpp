/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
valor máximo absoluto del vector. Por ejemplo 20, -43 y 5, el máximo absoluto
es -43.
*/

#include <iostream>
using namespace std;

int main (){

    int numeros[10];
    int maxAbsoluto;

    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    if (numeros[0] < 0) {
        maxAbsoluto = -numeros[0];
    } else {
        maxAbsoluto = numeros[0];
    }

    for (int i = 1; i < 10; i++) {
        int valorActual;
        
        if (numeros[i] < 0) {
            valorActual = -numeros[i];
        } else {
            valorActual = numeros[i];
        }

        if (valorActual > maxAbsoluto) {
            maxAbsoluto = valorActual;
        }
    }

    cout << "El valor máximo absoluto es: " << maxAbsoluto << endl;

return 0;
}