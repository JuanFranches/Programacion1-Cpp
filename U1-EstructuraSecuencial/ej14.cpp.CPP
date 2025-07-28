#include <iostream>
using namespace std;

/*Hacer un programa para ingresar el importe de una compra y el descuento a
aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.*/

int main (){
int importeCompra, porcentajeDescuento, descuento, imorteTotal;

cout << "Ingrese el importe de la compra: $";
cin >> importeCompra;
cout << "Ingrese el descuento a aplicar: $";
cin >> porcentajeDescuento;

descuento = (porcentajeDescuento * importeCompra)/ 100;

imorteTotal = importeCompra - descuento;

cout << endl << "Importe sin descuento: $" << importeCompra << endl;
cout << endl << "Descuento aplicado: $" << descuento << endl;
cout << endl << "Total a cobrar: $" << imorteTotal << endl;

return 0;
}