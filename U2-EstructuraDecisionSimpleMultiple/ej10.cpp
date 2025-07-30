/*
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo
de ellos.
*/

#include <iostream>
using namespace std;

int main (){
    int num1, num2, num3, num4, num5, maximo, minimo;

    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    cout << "Tercer numero: ";
    cin >> num3;
    cout << "Cuarto numero: ";
    cin >> num4;
    cout << "Quinto numero: ";
    cin >> num5;

    maximo = num1;
    minimo = num1; 

    if (num2 > maximo)
    {
        maximo = num2;
    }
    if (num3 > maximo){
        maximo = num3;
    }
    if (num4 > maximo){
        maximo = num4;
    }
    if (num5 > maximo)
    {
        maximo = num5;
    }

    
    if (num2 < minimo)
    {
        minimo = num2;
    }
    if (num3 < minimo){
        minimo = num3;
    }
    if (num4 < minimo){
        minimo = num4;
    }
    if (num5 < minimo)
    {
        minimo = num5;
    }
    
    
    cout << endl << "El numero maximo es: " << maximo << endl;
    cout << endl << "El numero minimo es: " << minimo << endl;


return 0;
}