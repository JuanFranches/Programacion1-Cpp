/*Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
valor máximo y su posición dentro del vector.*/
#include <iostream>
using namespace std;

int main (){
  const int TAMVECTOR = 10;
  int vectorNumeros[TAMVECTOR], maximo, posicion; 

  for(int i = 0; i <TAMVECTOR; i++){
    cout << "Ingresar un numero: ";
    cin >> vectorNumeros[i];
  }

  maximo = vectorNumeros[0];
  posicion = 1;

  for(int i = 1; i <TAMVECTOR; i++){
    if(vectorNumeros[i] > maximo){
      maximo = vectorNumeros[i];
      posicion = i+1;
    }
  }

  cout << "Maximo: " << maximo << " Posicion: " << posicion << endl;

return 0;
}