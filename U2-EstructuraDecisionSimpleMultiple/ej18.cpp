/*
Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado 
cliente, el programa calcule e informe el total a pagar.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x 50 = $2950.
*/

#include <iostream>
using namespace std;

int main (){
int consumoKilovatios, totalAPagar;

cout << "Ingrese el consumo de Kilovatios del cliente: ";
cin >> consumoKilovatios;

if (consumoKilovatios <= 100){
    totalAPagar = consumoKilovatios * 10;
}
else  if (consumoKilovatios >= 101 && consumoKilovatios <= 200)
{
    totalAPagar = (100 * 10) + (consumoKilovatios - 100) * 12;
}
else{
    totalAPagar = (100 * 10) + (100 * 12) + (consumoKilovatios - 200) * 15;
}

cout << endl << "El total a pagar es de: $" << totalAPagar;

return 0;
}