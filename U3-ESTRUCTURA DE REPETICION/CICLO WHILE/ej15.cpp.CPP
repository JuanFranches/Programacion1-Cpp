/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4*/

#include <iostream>
using namespace std;

int main() { 
int numero, maximo, segundoMaximo;
bool bPrimero = false;
  
cout << "Ingrese un numero (para finalizar ingrese 0): ";
cin >> numero; 


while (numero != 0){


  
if (!bPrimero){
  maximo = numero;
  segundoMaximo = numero;
  bPrimero = true; 
}
else if (numero >= maximo){
  segundoMaximo = maximo;
  maximo = numero;
}
else if (numero >= segundoMaximo && numero < maximo){
  segundoMaximo = numero;
}

cout << "Ingrese un numero (para finalizar ingrese 0): ";
cin >> numero; 
  
}
  
cout << "El maximo es: " << maximo << " El segundo maximo es: " << segundoMaximo;
  
}

