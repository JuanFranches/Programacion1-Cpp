/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
determine:
- El legajo del empleado con mayor sueldo
*/
#include <iostream>
using namespace std;

int main (){
int legajo, legajoMayorSueldo; 
float sueldo, mayorSueldo;  

for (int i = 0; i < 10; i++)
{
    cout << "Ingrese el legajo del empleado: ";
    cin >> legajo;
    cout << "Ingrese el sueldo del empleado: $";
    cin >> sueldo;

    if (i == 0)
    {
        mayorSueldo = sueldo; 
        legajoMayorSueldo = legajo; 
    }
    else if (sueldo > mayorSueldo){
        mayorSueldo = sueldo; 
        legajoMayorSueldo = legajo; 
    }

}

cout << endl << "El numero de legajo del empleado con mayor sueldo es: " << legajoMayorSueldo << endl; 

return 0;
}