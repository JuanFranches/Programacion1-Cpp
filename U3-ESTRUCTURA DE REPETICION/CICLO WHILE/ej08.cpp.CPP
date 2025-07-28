/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.
*/
#include <iostream>
using namespace std;

int main (){
int numero, maximo, posicionMaximo; 
int contadorPosicion = 0;
bool primerMaximo = false; 

cout << "Ingresar un numero (Presione 0 para finalizar): "; 
cin >> numero;

while (numero != 0)
{
    
    contadorPosicion++;
    
    if (!primerMaximo){
        maximo = numero;
        posicionMaximo = contadorPosicion;
        primerMaximo = true;
    }
    else if (numero > maximo)
    {
        maximo = numero;
        posicionMaximo = contadorPosicion;
    }
    
    cout << "Ingresar un numero: "; 
    cin >> numero;
}

cout << endl << "Maximo: " << maximo << " Posicion: " << posicionMaximo; 

return 0;
}

