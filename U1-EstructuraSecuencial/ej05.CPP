/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

#include <iostream>
using namespace std;

int main (){

float cantidadAlfajoresVendidosA, cantidadAlfajoresVendidosB, cantidadAlfajoresVendidosC, total, porcentajeVentaA, porcentajeVentaB, porcentajeVentaC; 

cout << "Ingrese la cantidad de alfajores vendidos de la marca A: ";
cin >> cantidadAlfajoresVendidosA;
cout << "Ingrese la cantidad de alfajores vendidos de la marca B: ";
cin >> cantidadAlfajoresVendidosB;
cout << "Ingrese la cantidad de alfajores vendidos de la marca A: ";
cin >> cantidadAlfajoresVendidosC;

total = cantidadAlfajoresVendidosA + cantidadAlfajoresVendidosB + cantidadAlfajoresVendidosC;

porcentajeVentaA = (cantidadAlfajoresVendidosA * 100)/ total; 
porcentajeVentaB = (cantidadAlfajoresVendidosB * 100)/ total; 
porcentajeVentaC = (cantidadAlfajoresVendidosC * 100)/ total; 

cout << "El porcentaje de venta de la marca A es del: " << porcentajeVentaA << "%" << endl;
cout << "El porcentaje de venta de la marca B es del: " << porcentajeVentaB << "%" << endl;
cout << "El porcentaje de venta de la marca C es del: " << porcentajeVentaC << "%" << endl;

return 0;
}

