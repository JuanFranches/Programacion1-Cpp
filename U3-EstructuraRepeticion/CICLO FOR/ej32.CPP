/*
Se ingresa una lista de 10 números enteros y se pide determinar si la lista está
formada por todos números alternados entre pares e impares o impares y
pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.
*/

#include <iostream>
using namespace std;

int main (){
    int numero, anterior;
    bool alternados = true;

    // Ingresar el primer número fuera del ciclo para inicializar
    cout << "Ingresar el primer numero: ";
    cin >> anterior;

    // Ciclo para ingresar los 9 números restantes y verificar si están alternados
    for (int i = 1; i < 10; i++) {
        cout << "Ingresar un numero: ";
        cin >> numero;

        // Verificar si el número actual tiene la misma paridad que el anterior
        if ((anterior % 2 == 0 && numero % 2 == 0) || (anterior % 2 != 0 && numero % 2 != 0)) {
            alternados = false; // Si tienen la misma paridad, no están alternados
        }

        anterior = numero; // Actualizamos el valor de "anterior" para la próxima iteración
    }

    // Mostrar si los números están alternados o no
    if (alternados) {
        cout << "Alternados" << endl;
    } else {
        cout << "No alternados" << endl;
    }

return 0;
}