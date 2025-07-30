/*
Un número Simonírico es un número positivo divisible por 15 y a la vez divisible
por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
números Simoníricos. El usuario no debe ingresar nada.
*/

#include <iostream>
using namespace std;

int main() { 
int contadorNumeroSimonilico = 0, numero = 1;
  
while (contadorNumeroSimonilico <= 1000){

  if (numero % 6 != 0){
    if (numero % 3 == 0 && numero % 15 == 0){
        contadorNumeroSimonilico++;
        cout << numero << endl;
    }
    
  }
    numero++; 
}

}
