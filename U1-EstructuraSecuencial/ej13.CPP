/*
Hacer un programa para un cajero automático para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
deberán entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
billetes de $100.
Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se
deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
billetes de $100.
Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se
deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
billetes de $500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o
$10.
*/

#include <iostream>
using namespace std;

int main (){
int importeIngresado, billetesMil, billetesQuinientos, billetesDoscientos, billetecien, restoA, restoB, restoC;

cout << "Ingrese el importe a retirar: $";
cin >> importeIngresado;

billetesMil = importeIngresado / 1000;
restoA = (importeIngresado % 1000);
billetesQuinientos = restoA / 500;
restoB = restoA % 500;
billetesDoscientos = restoB / 200;
restoC = restoB % 200;
billetecien = restoC/ 100;

cout << endl << "debera retirar:";
cout << endl << billetesMil << " billetes de mil"; 
cout << endl << billetesQuinientos << " billetes de quinientos";
cout << endl << billetesDoscientos << " billetes de doscientos"; 
cout << endl << billetecien << " billetes de cien";


return 0;
}