/*Hacer un programa para ingresar una lista de 13 números enteros. Se pide
luego determinar e informar:
A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en
forma creciente.
Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el
programa detectará una terna de positivos consecutivos (10, 5, 4) y una terna de
negativos consecutivos ordenados (-8, -3, -1)
Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada
crecientemente.*/

#include <iostream>
using namespace std;

int main (){
    int numero, anterior1, anterior2;
    int contadorPositivos = 0, contadorNegativosCrecientes = 0;

    cout << "Ingresar el primer numero: ";
    cin >> anterior2;

    cout << "Ingresar el segundo numero: ";
    cin >> anterior1;

    // Ingresamos los 11 números restantes para completar la lista de 13
    for (int i = 3; i <= 13; i++) {
        cout << "Ingresar el siguiente numero: ";
        cin >> numero;

        // Verificamos ternas de números positivos consecutivos
        if (anterior2 > 0 && anterior1 > 0 && numero > 0) {
            contadorPositivos++;
            // Saltamos dos posiciones, actualizando los valores de forma correcta
            if (i <= 11) { // Aún quedan números por procesar
                cout << "Ingresar el siguiente numero: ";
                cin >> anterior2;
                i++; // Saltamos un número
                if (i <= 12) { // Comprobamos si no estamos fuera de los límites
                    cout << "Ingresar el siguiente numero: ";
                    cin >> anterior1;
                    i++; // Saltamos el segundo número
                }
            }
            continue; // Saltamos el resto del ciclo
        }

        // Verificamos ternas de números negativos consecutivos y en orden creciente
        if (anterior2 < 0 && anterior1 < 0 && numero < 0 && anterior2 < anterior1 && anterior1 < numero) {
            contadorNegativosCrecientes++;
            // Saltamos dos posiciones, actualizando los valores de forma correcta
            if (i <= 11) { // Aún quedan números por procesar
                cout << "Ingresar el siguiente numero: ";
                cin >> anterior2;
                i++; // Saltamos un número
                if (i <= 12) { // Comprobamos si no estamos fuera de los límites
                    cout << "Ingresar el siguiente numero: ";
                    cin >> anterior1;
                    i++; // Saltamos el segundo número
                }
            }
            continue; // Saltamos el resto del ciclo
        }

        // Actualizamos los valores para la siguiente iteración solo si no se encontró una terna
        anterior2 = anterior1;
        anterior1 = numero;
    }

    // Mostramos los resultados
    cout << "Cantidad de ternas de valores positivos consecutivos: " << contadorPositivos << endl;
    cout << "Cantidad de ternas de valores negativos consecutivos y ordenados en forma creciente: " << contadorNegativosCrecientes << endl;

return 0;
}