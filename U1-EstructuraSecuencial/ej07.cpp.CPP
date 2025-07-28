#include <iostream>
using namespace std;

/*Hacer un programa para ingresar por teclado el importe de una venta y el
porcentaje de descuento aplicada a la misma y luego informar por pantalla el
importe a pagar.
Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
el total a pagar será de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
total a pagar será de $800.*/

int main (){
float importeVenta, porcentajeDescuentoAplicado, descuento, importeAPagar;

cout << "Ingrese el importe de la venta: $";
cin >> importeVenta;
cout << "ingrese el porcentaje de descuento aplicado: ";
cin >> porcentajeDescuentoAplicado;

descuento = (porcentajeDescuentoAplicado * importeVenta)/ 100;
importeAPagar = importeVenta - descuento;

cout << endl << "El importe a pagar es de: $" << importeAPagar;

return 0;
}