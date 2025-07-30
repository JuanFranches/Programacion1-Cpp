/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en
un avión y la cantidad de pasajes ocupados y luego calcular e informar el
porcentaje de ocupación y el porcentaje de no ocupación del mismo.
*/

#include <iostream>
using namespace std;

int main (){
float asientosTotales, pasajesOcupados, porcentajeOcupado, porcentajeDesocupado; 

cout << "Ingrese el total de asientos del avion: ";
cin >> asientosTotales;
cout << endl << "Ingrese la cantidad de pasajes: ";
cin >> pasajesOcupados;

porcentajeOcupado = (pasajesOcupados * 100)/ asientosTotales;
porcentajeDesocupado = 100 - porcentajeOcupado;

cout << endl << "El pocentaje de ocupacion es del: " << porcentajeOcupado << "%" << endl;
cout << "El porcentaje no ocupacion es del: " << porcentajeDesocupado << "%";


return 0;
}