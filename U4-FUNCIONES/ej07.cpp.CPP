/*Escribir una función CalcularMaximoAbsoluto que reciba dos números y
retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los
números -40 y 20 es 40.
Hacer un programa para ingresar dos números y, utilizando
CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.*/

#include <iostream>
using namespace std;

int CalcularMaximoAbsoluto (int numA, int numB){
    
    if (numA < 0){
        numA = -(numA);
    }
    if (numB < 0){
        numB = -(numB);
    }

    if(numA > numB){
        return numA;
    }
    else{
        return numB;
    }
    
}

int main (){
    int num1, num2; 
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << endl << "EL mayor absoluto de ambos es: " << CalcularMaximoAbsoluto(num1, num2) << endl;

return 0;    
}