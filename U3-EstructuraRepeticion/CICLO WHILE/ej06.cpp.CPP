/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7
*/
#include <iostream>
using namespace std;

int main (){
int numero; 
int cantPositivos = 0, cantNegativos = 0;  

cout << "Ingresar un numero: "; 
cin >> numero;

while (numero != 0)
{

    if (numero > 0)
    {
        cantPositivos++; 
    }
    else{
        cantNegativos++;
    }

    cout << "Ingresar un numero: "; 
    cin >> numero;

}

cout << endl << "Positivos: " << cantPositivos << " Negativos: " << cantNegativos; 

return 0;
}