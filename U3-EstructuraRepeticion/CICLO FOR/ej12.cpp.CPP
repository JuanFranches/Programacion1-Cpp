/*Hacer un programa para ingresar una lista de 10 números e informar el máximo
de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.*/

#include <iostream>
using namespace std;

int main (){  //lo hice con banderas para buscar el primer negatvio y el primer positivo y despues compararlo entre ellos. 

int numero, maximoPositivo, minimoNegativo;
bool bPositivo = true, bNegativo = true;

for (int i = 0; i <10; i++){
    cout << "Ingresar un numero: ";
    cin >> numero;

    if (numero > 0 && bPositivo){
        maximoPositivo = numero;
        bPositivo = false;
    }
    else if(numero > 0 && numero > maximoPositivo){
        maximoPositivo = numero;
    }

    if (numero < 0 && bNegativo){
        minimoNegativo = numero;
        bNegativo = false;
    }
    else if(numero < 0 && numero < minimoNegativo){
        minimoNegativo = numero;
    }

}

cout << "El maximo positivo es: " << maximoPositivo << endl;
cout << "El minimo negativo es: " << minimoNegativo;

return 0;
}

//este ejericio tambien se puede hacer poniendo el primer numero como el mayor y el menor a la vez y despues segun si es mayor o menor a 0 lo podemos comparar.