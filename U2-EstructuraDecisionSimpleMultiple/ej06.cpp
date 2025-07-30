/*
Hacer un programa para ingresar por teclado tres números y luego determinar e informar
con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

#include <iostream>
using namespace std;

int main (){
int a, b, c;

cout << "Ingrese el primer numero: ";
cin >> a;
cout << "Ingrese el segundo numero: ";
cin >> b;
cout << "Ingrese el tercer numero: ";
cin >> c;

if (a == b && b == c){
    cout << endl << "Los tres numeros son iguales entre si";
}

return 0;
}