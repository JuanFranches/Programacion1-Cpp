/*
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado 
la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c;

cout << "Ingrese la longitud del primer lado de un triangulo: ";
cin >> a;
cout << "Ingrese la longitud del segundo lado de un triangulo: ";
cin >> b;
cout << "Ingrese la longitud del tercer lado de un triangulo: ";
cin >> c;

if (a == b && b == c){
    cout << endl << "El triangulo es equilatero";
}
else if (a != b && b != c && c != a ){
    cout << endl << "El triangulo es escaleno";
}
else{
    cout << endl << "El triangulo es isosceles";
}


return 0;
}