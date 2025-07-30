/*
Hacer un programa para ingresar por teclado un número y luego 
emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

#include <iostream>
using namespace std;

int main (){
int num;

cout << "Ingrese un numero: ";
cin >> num;

if (num > 0){
    cout << endl << "el numero es positivo";
}
if (num < 0){
    cout << endl << "el numero es negativo";
}
if (num == 0){
    cout << endl << "el numero es 0";
}

return 0;
}
