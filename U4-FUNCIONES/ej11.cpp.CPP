/*Hacer una función llamada contarDigitos que reciba por valor un número
entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo,
si se recibe el número 840 debe devolver 3.
Hacer un programa que, a partir de un número que ingresa el usuario, informe
por pantalla la cantidad de dígitos del número ingresado.*/

#include <iostream>
using namespace std;

int contarDigitos(int numero) {
    if (numero < 0) {
        numero = -numero;  // Convertimos a positivo si es negativo
    }
    
    if (numero == 0) {
        return 1;  // Caso especial: 0 tiene un dígito
    }

    int contador = 0;
    while (numero > 0) {
        numero = numero / 10;
        contador++;
    }
    return contador;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Cantidad de digitos: " << contarDigitos(num) << endl;

    return 0;
}