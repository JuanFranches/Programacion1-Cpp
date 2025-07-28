/*Escribir una función que reciba un número y retorne 1 si el número recibido es
perfecto y 0 si no es perfecto.
Hacer un programa para que, dada una lista de números que finaliza con cero,
informe cuántos de ellos eran perfectos. Utilizar la función solicitada.*/

#include <iostream>
using namespace std;

int calcularPerfecto (int numero){
    int acuDivisoresPropios = 0;

    for (int i = 1; i < numero; i++){

        if (numero % i == 0){
            acuDivisoresPropios += i;
        }
    }

    if (acuDivisoresPropios == numero){
        return 1;
    }
    else return 0;
}

int main (){
    int numero, contadorNumPerfecto = 0; 

    cout << "Ingrese un numero (para finalizar ingrese 0): ";
    cin >> numero;

    while (numero != 0)
    {
        if (calcularPerfecto(numero) == 1)
        {
            contadorNumPerfecto++;
        }      
        cout << "Ingrese un numero (para finalizar ingrese 0): ";
        cin >> numero;
    }
    
    cout << endl << "Numeros perfectos: " << contadorNumPerfecto << endl;

return 0;
}
