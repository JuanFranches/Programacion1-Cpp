/*
Dada una lista de 10 números enteros informar cual es el máximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8
*/

#include <iostream>
using namespace std;

int main (){
    
int numero, maximoPar;
bool bPrimerPar = true;


for ( int i = 0; i < 9; i++)
{
    cout << "Ingresar un numero: ";
    cin >> numero;

    if(numero % 2 == 0 && bPrimerPar){
        maximoPar = numero;
        bPrimerPar = false;
    }
    else if (numero % 2 == 0  && numero > maximoPar){
        maximoPar = numero;
    }
}

cout << "El maximo par es: " << maximoPar << endl;


return 0;
}