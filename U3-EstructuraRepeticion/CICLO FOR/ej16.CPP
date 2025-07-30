/*
Hacer un programa para ingresar 5 números, luego informar los 2 mayores
valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.
*/
#include <iostream>
using namespace std;

int main (){

 int numero, maximo, segundoMaximo; 
 bool primerNumero = true; 


    for (int i = 0; i < 5; i++) {
        cout << "Ingresar numero: ";
        cin >> numero;

        if (primerNumero) {
            maximo = numero;
            segundoMaximo = INT_MIN; 
            primerNumero = false;
        } else {
           
            if (numero > maximo) {
                segundoMaximo = maximo; 
                maximo = numero;        
            }
            
            else if (numero > segundoMaximo) {
                segundoMaximo = numero; 
            }
        }
    }

    cout << "El maximo es: " << maximo << endl;
    cout << "El segundo maximo es: " << segundoMaximo << endl;

return 0;
}