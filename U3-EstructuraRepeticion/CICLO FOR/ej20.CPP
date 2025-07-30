/*
Se define a un número entero como primo cuando tiene solamente dos
divisores. Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen
solamente dos divisores.
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Hacer un programa para ingresar un número y luego informar con un cartel
aclaratorio si el mismo es un número primo o es número no primo.
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

if (cantDivisores == 2){
    cout << "El numero es primo"; 
}
else{
    cout << "El numero no es primo";
}

return 0;
}
