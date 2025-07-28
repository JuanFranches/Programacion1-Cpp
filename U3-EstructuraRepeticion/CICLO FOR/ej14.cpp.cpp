/*Dada una lista de 7 números enteros informar cual es el primer, el segundo, el
anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Anteúltimo impar: 9 y Último impar: 5.*/
#include <iostream>
using namespace std;

int main (){

int numero;
int primerImpar = 0, segundoImpar = 0, anteultimoImpar = 0, ultimoImpar = 0;

bool esPrimerimpar = true, esSegundoImpar = true;

for (int i = 0; i < 7; i++)
{
    cout << "Ingresar un numero: ";
    cin >> numero;

    if (numero % 2 != 0 && esPrimerimpar)
    {
        primerImpar =  numero;
        esPrimerimpar = false;
    }
    else if (numero % 2 != 0 && esSegundoImpar){
        segundoImpar = numero;
        esSegundoImpar = false;
    }
    else if (numero % 2 != 0)
    {
        anteultimoImpar = ultimoImpar;
        ultimoImpar = numero;
    }

}

cout << "El primer numero impar es: " << primerImpar << endl;
cout << "El segundo numero impar es: " << segundoImpar << endl;
cout << "El anteultimo numero impar es: " << anteultimoImpar << endl;
cout << "El ultimo impar es: " << ultimoImpar << endl;

return 0;
}