/*
Hacer una función llamada EsPrimo que determine si un número es primo o
no. La función debe recibir el número y devolver true si es primo o false si no lo
es. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego
un cartel indicando si el número ingresado es primo o no es primo.
*/

#include <iostream>
using namespace std;

bool EsPrimo (int a){
    int contador = 0;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            contador++;
        }   
    }

    if (contador == 2)
    {
        return true; 
    }
    return false;
    
}

int main (){
    int numero; 
    cout << "Ingresar un numero: ";
    cin >> numero;

    if (EsPrimo (numero))
    {
        cout << endl << "El numero es primo" << endl;
    }
    else {
        cout << endl << "El numero no es primo" << endl;
    }
return 0;  
}
