/*Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
mostrar por pantalla los valores que son mayores al promedio.*/
#include <iostream>
using namespace std;

int main (){
  const int TAMVECTOR = 10;
  int vectorNumeros[TAMVECTOR];
  float suma, promedio; 

  for(int i = 0; i <TAMVECTOR; i++){
    cout << "Ingresar un numero: ";
    cin >> vectorNumeros[i];
  }

  suma = 0; 
  for (int i = 0; i < TAMVECTOR; i++){
    suma += vectorNumeros[i];
  }

  promedio = suma/ TAMVECTOR; 

  for (int i = 0; i < TAMVECTOR; i ++){
    if (vectorNumeros[i] > promedio){
      cout << vectorNumeros[i] << endl;
    }
  }

return 0;
}