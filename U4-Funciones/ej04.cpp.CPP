/*Hacer una función llamada EsPrimoSophieGermain que reciba un número
entero y determine si el mismo es un número primo de Sophie Germain. Debe
devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número
primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.*/

#include <iostream>
using namespace std;

bool EsPrimoSophieGermain (int a){
    int contadorA = 0, numSophieGermain, contadorB = 0;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            contadorA++;
        }   
    }

    numSophieGermain = (2 * a) + 1;

    for (int i = 1; i <= numSophieGermain; i++)
    {
        if (numSophieGermain % i == 0)
        {
            contadorB++;
        }   
    }
    
    if (contadorA == 2 && contadorB == 2){
        return true; 
    }
    return false;
    
}

int main (){
    int numero; 
    cout << "Ingresar un numero: ";
    cin >> numero;

    if (EsPrimoSophieGermain(numero))
    {
        cout << endl << "El numero es primo Sophie Germain" << endl;
    }
    else {
        cout << endl << "El numero no es primo Sophie Germain" << endl;
    }
return 0;   
}