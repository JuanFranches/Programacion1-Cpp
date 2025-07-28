/*Hacer un programa para ingresar un N valor que indica la cantidad de números
que componen una lista y luego solicitar se ingresen esos N números. Se pide
informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
listará: Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
Se listará: Cantidad de Positivos: 0*/


#include <iostream>
using namespace std;

int main (){

int lista, num; 
int c = 0;

cout << "Ingrese la cantidad de numeros que compone la lista: ";
cin >> lista;


for(int i = 0; i < lista; i++){

    cout << "Ingresar numero: ";
    cin >> num;

    if (num > 0){
        c++;
    }
}

cout << "La cantidad de positivos es: " << c;

return 0;
}