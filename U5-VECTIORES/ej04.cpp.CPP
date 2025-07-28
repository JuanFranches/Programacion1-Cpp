#include <iostream>
using namespace std;

int main (){

    int numeros[10];
    int maxAbsoluto;

    // Leer los 10 números y guardarlos en el array
    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    // Inicializamos maxAbsoluto con el valor absoluto del primer número
    if (numeros[0] < 0) {
        maxAbsoluto = -numeros[0];
    } else {
        maxAbsoluto = numeros[0];
    }

    // Encontrar el valor máximo absoluto
    for (int i = 1; i < 10; i++) {
        int valorActual;
        
        if (numeros[i] < 0) {
            valorActual = -numeros[i]; // Cambiar signo si es negativo
        } else {
            valorActual = numeros[i];
        }

        if (valorActual > maxAbsoluto) {
            maxAbsoluto = valorActual;
        }
    }

    // Imprimir el valor máximo absoluto
    cout << "El valor máximo absoluto es: " << maxAbsoluto << endl;

return 0;
}