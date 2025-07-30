/*
Hacer un programa para ingresar un número entero y luego informar la cantidad
de divisores de ese número.
Ejemplo A. Si se ingresa 6 se listará: 4 divisores.
Ejemplo B. Si se ingresa 9 se listará: 3 divisores.
Ejemplo C. Si se ingresa 11 se listará: 2 divisores.
*/

#include <iostream>
using namespace std;

int main (){
int numeroEntero, cantDivisores;

cout << "Ingrese un numero entero ";
cin >> numeroEntero;

cantDivisores = 0;
for (int i = 1; i <= numeroEntero; i++)
{
    if (numeroEntero % i == 0){
        cantDivisores++;
    }
}

cout << "El numero " << numeroEntero << " tiene " << cantDivisores << " divisores";


return 0;
}