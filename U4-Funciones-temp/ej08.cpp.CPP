/*Escribir una función que reciba el valor de un año y retorne 1 si el mismo es
bisiesto y 0 si es un año no bisiesto. Recordar que son años bisiestos los
divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se
incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisible
por 4. El año 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible
por 4. Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible
por 100.
Hacer un programa para ingresar una lista de 10 valores de años y contar
cuantos son bisiestos. Utilizar la función solicitada.*/

#include <iostream>
using namespace std;

int buscarAnioBisiesto(int anio) {
    int multiplo4, multiplo100, multiplo400;

    multiplo4 = anio % 4;
    multiplo100 = anio % 100;
    multiplo400 = anio % 400;

    if (multiplo100 == 0 && multiplo400 == 0) {
        return 1; 
    } 
    else if (multiplo4 == 0) {
        return 1; 
    } 
    else{
        return 0; 
    }
} 

int main (){
    int numeroAnio, contadorBisiestos = 0;



    for (int i = 1; i <= 10; i++){

        cout << "Ingrese un anio: ";
        cin >> numeroAnio; 

        if (buscarAnioBisiesto(numeroAnio) == 1)
        {
            contadorBisiestos++;
        }
        
    }

    cout << "Anios bisiestos: " << contadorBisiestos; 
return 0;
}
