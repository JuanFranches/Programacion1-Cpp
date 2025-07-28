/*Hacer un programa para que el usuario ingrese dos números y luego el
programa muestre por pantalla los números entre el menor y el mayor de
ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.*/
#include <iostream>
using namespace std;

int main (){
int numA, numB, maximo, minimo;

cout << "Ingrese un numero: "; 
cin >> numA; 
cout << "Ingrese el siguiente numero "; 
cin >> numB; 

if (numA > numB)
{
    maximo = numA; 
    minimo = numB;
}
else{
    maximo = numB; 
    minimo = numA;
}

minimo++;

while (minimo < maximo)
{ 
    cout << minimo << endl; 
    minimo++; 
}


return 0;
}
