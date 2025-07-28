/*Dada una lista de 7 números enteros informar el primer número par ingresado y
su ubicación en la lista y el último de los números primos y su ubicación en la
lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.*/

#include <iostream>
using namespace std;

int main (){
int numero, PrimerPar, posicionPar, cantDivisores, ultimoPrimo, posicionPrimo;
bool banderaPar = false; 

cantDivisores = 0;
for (int i = 1; i <= 7; i++){

    cout << "Ingresar un numero: ";
    cin >> numero;

    if (numero % 2 == 0 && !banderaPar) {
        PrimerPar = numero;
        posicionPar = i;
        banderaPar = true; 
    }

    cantDivisores = 0;
    for (int j = 1; j <= numero; j++){

        if (numero % j == 0){
        cantDivisores++;
    }
    }

    if (cantDivisores == 2)
    {
        ultimoPrimo = numero;
        posicionPrimo = i; 
    }
    
}

cout << endl << "Primer numero par: " << PrimerPar << " Ubicacion: " << posicionPar << endl;
cout << "Ultimo numero primo: " << ultimoPrimo << " Ubicacion: " << posicionPrimo << endl;

return 0;

}