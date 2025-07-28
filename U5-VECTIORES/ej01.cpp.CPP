/*Hacer un programa para ingresar 10 números y guardarlos en un vector.
Determinar e informar cuál es la suma de los valores del vector.*/
#include <iostream>
using namespace std;

int main (){
  const int TAMANIO = 10;
  int vecNumeros[TAMANIO], suma = 0;

  for(int i = 0; i < TAMANIO; i++){
    cout << "Ingrese un numero: ";
    cin >> vecNumeros[i]; 
  }
  
  for(int i = 0; i < 10; i++){
    suma += vecNumeros[i];
  }

  cout << "La suma de los numeros es: " << suma << endl; 

return 0;
}