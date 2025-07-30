/*
15 Hacer un programa para ingresar una lista de 8 números y luego informar si
todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”

Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No
Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
*/
#include <iostream>
using namespace std;

int main (){

int numero, anterior;
bool estaOrdenado = true; 

cout << "Ingresar un numero: ";
cin >> anterior;

for (int i = 1; i < 8; i++)
{
    cout << "Ingresar un numero ";
    cin >> numero; 

    if (numero >= anterior && estaOrdenado)
    {
        anterior = numero;
    }
    else{
        estaOrdenado = false;
    }   
}

if (estaOrdenado)
{
   cout << "La lista de numeros esta ordenada";
}

return 0;
}
