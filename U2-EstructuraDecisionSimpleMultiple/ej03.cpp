/*
Hacer un programa para ingresar por teclado un número y luego informar por pantalla
con un cartel aclaratorio si el mismo es par o impar
*/

#include <iostream>
using namespace std;

int main (){
int num, resultado;

cout << "Ingrese un numero: ";
cin >> num;

resultado = num % 2;

if (resultado == 0)
{
    cout << endl << "El numero es par";
}
else {
    cout << endl << "El numero es impar";
}

return 0;
}