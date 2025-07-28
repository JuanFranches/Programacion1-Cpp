/*Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos
de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900
no es bisiesto, pero el año 2000 sí lo es. Hacer un programa para ingresar un año
y listar por pantalla si es bisiesto o no lo es.

Ejemplo A. Si se ingresa el año 2020 se indicará como bisiesto.
Ejemplo B. Si se ingresa el año 2019 se indicará como no bisiesto.
Ejemplo C. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto.
Ejemplo D. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.*/
#include <iostream>
using namespace std;

int main (){
int año, multiplo4, multiplo100, multiplo400;

cout << "Ingrese un anio: ";
cin >> año;

multiplo4 = año % 4;
multiplo100 = año % 100;
multiplo400 = año % 400;

if (multiplo100 == 0){
    if (multiplo400 == 0){
        cout << "El anio " << año << " es bisiesto";
    }
    else{
        cout << "El anio " << año << " no es bisiesto";
    }
}

else if (multiplo4 == 0)
    {
        cout << "El anio " << año << " es bisiesto";
    }
    else {
        cout << "El anio " << año << " no es bisiesto";
    }

return 0;
}