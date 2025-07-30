/*
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
por pantalla a cuantos días y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que
equivalen a 1 día y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que
equivalen a 3 días y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que
equivalen a 0 días y 20 horas.
*/

#include <iostream>
using namespace std;

int main (){
int cantidadDeHoras, dias, horas; 

cout << "ingresar por pantalla la cantidad de horas: ";
cin >> cantidadDeHoras;

dias = cantidadDeHoras / 24;
horas = cantidadDeHoras % 24;

cout << endl << "Equivale a: " << dias << " dias" << endl;
cout << "Equivale a: " << horas << " hs" << endl;

return 0;
}