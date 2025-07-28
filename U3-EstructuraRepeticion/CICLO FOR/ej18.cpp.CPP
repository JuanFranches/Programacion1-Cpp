/*Hacer un programa para ingresar un número entero y luego informar todos los
divisores pares de ese número.
Ejemplo A. Si se ingresa 6 se listará: 2 y 6. Ejemplo B. Si se ingresa 8 se listará:
2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listará nada.*/
#include <iostream>
using namespace std;

int main (){

int numeroEntero;

cout << "Ingrese un numero: ";
cin >> numeroEntero;

cout << "Los divisores pares de " << numeroEntero << " son:" << endl; 

for (int i = 1; i <= numeroEntero; i++)
{
    if (numeroEntero % i == 0){
        if (i % 2 == 0){
            cout << i << endl;
        }
    }
}


return 0;
}