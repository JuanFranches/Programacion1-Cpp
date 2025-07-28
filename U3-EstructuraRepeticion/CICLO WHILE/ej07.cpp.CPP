/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.
*/
#include <iostream>
using namespace std;

int main (){
int  numero, maximo; 
bool primerMaximo = false; 

cout << "Ingresar un numero (Presione 0 para finalizar): "; 
cin >> numero;


while (numero != 0)
{
    if (!primerMaximo){
        maximo = numero;
        primerMaximo = true;
    }
    else if (numero > maximo)
    {
        maximo = numero;
    }
    
    cout << "Ingresar un numero: "; 
    cin >> numero;
}

cout << endl << "Maximo: " << maximo;

return 0;
}