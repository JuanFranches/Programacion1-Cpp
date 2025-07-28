#include <iostream>
using namespace std;

/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
$700 de premio por cada auto vendido. Hacer un programa que permita
ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
pagar es de $7800.*/

int main (){
const int SFIJO = 5000;
const int PREMIO = 700;
int autosVendidos, sueldoTotal; 

cout << "ingrese la cantidad de autos vendidos: ";
cin >> autosVendidos;

sueldoTotal = SFIJO + (PREMIO * autosVendidos);

cout << endl << "El sueldo total es: $" << sueldoTotal <<endl;


return 0;
}