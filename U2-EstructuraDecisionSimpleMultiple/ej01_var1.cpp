/*
Hacer un programa para ingresar por teclado un número y luego 
emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

// variante anidado

#include <iostream>
using namespace std;

int main (){
int num;

cout << "Ingrese un numero: ";
cin >> num;

if (num > 0){
   cout << endl << "El numero es positivo";
}
else if (num < 0){
    cout << endl << "El numero es negativo";
}
else{
    cout << endl << "El numero es cero";
}


return 0;
}
