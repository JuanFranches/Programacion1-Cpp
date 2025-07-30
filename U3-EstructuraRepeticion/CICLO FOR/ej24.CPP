/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine:
- El sueldo máximo.
- El sueldo mínimo.
- El sueldo promedio.
- Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
using namespace std;

int main (){

float sueldoMaximo, sueldoMinimo, sueldoPromedio, sueldo, acuSueldos = 0;
int cantSueldosMayores = 0;


for (int i = 0; i < 10; i++){

    cout << "Ingresar sueldo: $: ";
    cin >> sueldo; 

    if (i == 0)
    {
        sueldoMaximo = sueldo;
        sueldoMinimo = sueldo; 
    }
    
    else if (sueldo > sueldoMaximo){
        sueldoMaximo = sueldo;
    }
    else if ( sueldo < sueldoMinimo){
        sueldoMinimo = sueldo;
    }
    
    acuSueldos += sueldo;

    if (sueldo > 50000)
    {
        cantSueldosMayores++;
    }
    
}

sueldoPromedio = acuSueldos / 10;

cout << endl << "El sueldo maximo: " << sueldoMaximo << endl;
cout << "El sueldo minimo: " << sueldoMinimo << endl;
cout << "El sueldo promedio: " << sueldoPromedio << endl;
cout << "Cantidad de sueldos mayores a $50000: " << cantSueldosMayores << endl;

return 0;
}