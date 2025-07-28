/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar el máximo de los negativos y el mínimo de los positivos. 
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. 
Máximo Negativo: -3. 
Mínimo Positivo: 2.
*/
#include <iostream>
using namespace std;

int main (){
int numero, minimoPositivo, maximoNegativo; 
bool hayPrimerPositivo = false, hayPrimerNegativo = false; 

cout << "Ingresar un numero (Presione 0 para finalizar): "; 
cin >> numero;

while (numero != 0)
{
    if (numero > 0)
    {
        if (!hayPrimerPositivo)
        {
            minimoPositivo = numero;
            hayPrimerPositivo = true;
        }
        else if (numero < minimoPositivo)
        {
            minimoPositivo = numero;
        }
    }
    else if (!hayPrimerNegativo){
            maximoNegativo = numero;
            hayPrimerNegativo = true;
    }
    else if (numero > maximoNegativo){
            maximoNegativo = numero;
    }

    cout << "Ingresar un numero (Presione 0 para finalizar): "; 
    cin >> numero;
 
}

cout << endl << "Maximo negativo: " << maximoNegativo << " Minimo positivo: " << minimoPositivo;

return 0;
}