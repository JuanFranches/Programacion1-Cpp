/*Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se
informa 5 y -9*/

#include <iostream>
using namespace std;

int main() { 
int numero, primerImpar, segundoImpar; 
bool esPrimerimPar = false, esSegundoImpar = false; 

cout << "Ingrese un numero (para finalizar ingrese 0): ";
cin >> numero; 

while (numero != 0){

  if (numero % 2 != 0){
    if (!esPrimerimPar){
      primerImpar = numero;
      esPrimerimPar = true; 
    }
    else if (!esSegundoImpar){
      segundoImpar = numero;   
      esSegundoImpar = true;
    }
  }
  cout << "Ingrese un numero (para finalizar     ingrese 0): ";
  cin >> numero; 
  
}

cout << endl << "Primer impar : " << primerImpar << " Segundo impar: " << segundoImpar << endl;

}
