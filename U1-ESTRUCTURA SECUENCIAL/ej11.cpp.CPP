#include <iostream>
using namespace std;

/*Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que
equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que
equivalen a 0 día, 8 horas y 0 minutos.*/

int main (){

int cantidadDeMinutos, dias, horas, minutos, horasTotales;

cout << "ingresar por pantalla la cantidad de minutos: ";
cin >> cantidadDeMinutos;

minutos = cantidadDeMinutos % 60;
horasTotales = cantidadDeMinutos / 60;
horas = horasTotales % 24;
dias = horasTotales / 24;

cout << endl << "Equivale a: " << dias << " dias" << endl;
cout << "Equivale a: " << horas << " hs" << endl;
cout << "Equivale a: " << minutos << " min" << endl;

return 0;
}