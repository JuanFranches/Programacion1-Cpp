/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la
recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

#include <iostream>
using namespace std; 

int main (){
float recaudacionS1, recaudacionS2, recaudacionS3, recaudacionS4, recaudacionTotal, recaudacionPromedio, PorcentajeS1, PorcentajeS2, PorcentajeS3, PorcentajeS4;

cout << "Ingrese la recaudacion de la primera semana del mes: $";
cin >> recaudacionS1;
cout << "Ingrese la recaudacion de la segunda semana del mes: $";
cin >> recaudacionS2;
cout << "Ingrese la recaudacion de la tercera semana del mes: $";
cin >> recaudacionS3;
cout << "Ingrese la recaudacion de la cuarta semana del mes: $";
cin >> recaudacionS4;

recaudacionTotal = recaudacionS1 + recaudacionS2 + recaudacionS3 + recaudacionS4;

recaudacionPromedio = recaudacionTotal/ 4;

PorcentajeS1 = (recaudacionS1 * 100)/ recaudacionTotal;
PorcentajeS2 = (recaudacionS2 * 100)/ recaudacionTotal;
PorcentajeS3 = (recaudacionS3 * 100)/ recaudacionTotal;
PorcentajeS4 = (recaudacionS4 * 100)/ recaudacionTotal;

cout << endl << "La recaudacion promedio por semana es del: $" << recaudacionPromedio << endl;
cout << "El porcentaje de recaudacion de la primera semana es del: " << PorcentajeS1 << " %" << endl;
cout << "El porcentaje de recaudacion de la segunda semana es del: " << PorcentajeS2 << " %" << endl;
cout << "El porcentaje de recaudacion de la tercera semana es del: " << PorcentajeS3 << " %" << endl;
cout << "El porcentaje de recaudacion de la cuarta semana es del: " << PorcentajeS4 << " %" << endl;

return 0;
}