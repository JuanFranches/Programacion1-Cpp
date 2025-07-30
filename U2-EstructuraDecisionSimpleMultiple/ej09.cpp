/*
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c, max;

cout << "Ingrese el primer numero: ";
cin >> a;
cout << "Ingrese el segundo numero: ";
cin >> b;
cout << "Ingrese el tercer numero: ";
cin >> c;

max = a;

if (b > max)
{
    max = b;
}

if (c > max){
    max = c;
}

cout << "El numero maximo es: " << max;


return 0;
}