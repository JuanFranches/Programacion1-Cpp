/*
Hacer un programa para ingresar por teclado cuatro números. Si los valores que 
se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”,
caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.
*/

#include <iostream>
using namespace std;

int main (){
int numero1, numero2, numero3, numero4;

cout << "Ingrese el primer numero: ";
cin >> numero1;
cout << "Ingrese el segundo numero: ";
cin >> numero2;
cout << "Ingrese el tercer numero: ";
cin >> numero3;
cout << "Ingrese el cuarto numero: ";
cin >> numero4;

if (numero1 <= numero2 && numero2 <= numero3 && numero3 <= numero4){
    cout << endl << "conjunto ordednado";
}
else{
    cout << endl << "conjunto desordenado";
}


return 0;
}