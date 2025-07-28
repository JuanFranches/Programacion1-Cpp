/* 21) Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas.
Cada venta está compuesta por:

- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
- Cantidad total de carteras vendidas en total.
- Cuántas carteras quedaron de cada tipo.
- Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.

 */

#include <iostream>
using namespace std;

int main (){
int cantidadCarterasVendidas1, cantidadCarterasVendidas2, cantidadCarterasVendidas3, seleccionPrimeraVenta, seleccionSegundaVenta, seleccionTerceraVenta, totalVentas;
int carteraBlanca = 45, carteraNegra = 50, carteraMarron = 40, carteraGris = 49;

cout << "Primera Venta" << endl;
cout << "Cantidad de cartera: ";
cin >> cantidadCarterasVendidas1;
cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
cin >> seleccionPrimeraVenta;

cout << endl << "Segunda Venta" << endl;
cout << "Cantidad de cartera: ";
cin >> cantidadCarterasVendidas2;
cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
cin >> seleccionSegundaVenta;

cout << endl << "Tercera Venta" << endl;
cout << "Cantidad de cartera: ";
cin >> cantidadCarterasVendidas3;
cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
cin >> seleccionTerceraVenta;


if (cantidadCarterasVendidas1 <= 10 && cantidadCarterasVendidas2 <= 10 && cantidadCarterasVendidas3 <= 10) //punto nota
{
    totalVentas = cantidadCarterasVendidas1 + cantidadCarterasVendidas2 + cantidadCarterasVendidas3; // punto A


switch (seleccionPrimeraVenta){ // punto B
    case 1:
        carteraBlanca -= cantidadCarterasVendidas1;
    break;
    case 2:
        carteraNegra -= cantidadCarterasVendidas1;
    break;
    case 3:
        carteraMarron -= cantidadCarterasVendidas1;
    break;
    case 4: 
        carteraGris -= cantidadCarterasVendidas1;
    break;
}

switch (seleccionSegundaVenta){
    case 1:
        carteraBlanca -= cantidadCarterasVendidas2;
    break;
    case 2:
        carteraNegra -= cantidadCarterasVendidas2;
    break;
    case 3:
        carteraMarron -= cantidadCarterasVendidas2;
    break;
    case 4: 
        carteraGris -= cantidadCarterasVendidas2;
    break;
}

switch (seleccionTerceraVenta){
    case 1:
        carteraBlanca -= cantidadCarterasVendidas3;
    break;
    case 2:
        carteraNegra -= cantidadCarterasVendidas3;
    break;
    case 3:
        carteraMarron -= cantidadCarterasVendidas3;
    break;
    case 4: 
        carteraGris -= cantidadCarterasVendidas3;
    break;

}

cout << endl << "total de carteras vendidas: " << totalVentas;
cout << endl << endl << "Las carteras que quedaron son las siguientes:";
cout << endl << "Blancas: " << carteraBlanca;
cout << endl << "Negras: " << carteraNegra;
cout << endl << "Marrones: " << carteraMarron;
cout << endl << "Grises: " << carteraGris;


if (carteraBlanca == 45){
    cout << endl << endl << "Las carteras blancas no se vendieron";
}
if (carteraNegra == 50)
{
    cout << endl << endl << "Las carteras negras no se vendieron";
}
if (carteraMarron == 40)
{
    cout << endl << endl << "Las carteras marrones no se vendieron";
}
if (carteraGris == 49)
{
    cout << endl << endl << "Las carteras grises no se vendieron";
}


}

else {
    cout << endl << "CADA VENTA NO PUEDE SUPERAR LAS 10 CARTERAS" << endl;
}


return 0;
}