/*
Hacer un programa para que el usuario ingrese dos números y luego el
programa muestre por pantalla los números entre el menor y el mayor de
ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

#include <iostream>
using namespace std;

int main (){
int num1, num2, my, me;

cout << "Ingrese el primer numero: ";
cin >> num1;
cout << "Ingrese el segundo numero: ";
cin >> num2;

if (num1 > num2){
my = num1;
me = num2;
}
else{
    my = num2;
    me = num1;
}

for (int i = me; i <= my; i++){
    cout << i << endl;
}

return 0;
}