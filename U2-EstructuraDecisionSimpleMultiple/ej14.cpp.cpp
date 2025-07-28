#include <iostream>
using namespace std;

int main (){
int diaNacimiento, mesNacimiento, añoNacimiento, diaActual, mesActual, fechaActual, edad;

cout << "Ingresar su dia de nacimiento: ";
cin >> diaNacimiento;
cout << "Ingresar su mes de nacimiento: ";
cin >> mesNacimiento;
cout << "Ingresar su anio de nacimiento: ";
cin >> añoNacimiento;

cout << endl << "Ingresar el dia actual: ";
cin >> diaActual;
cout << "Ingresar mes actual: ";
cin >> mesActual;
cout << "Ingresar fecha actual: ";
cin >> fechaActual;

edad = fechaActual - añoNacimiento;

if ((mesActual <= mesNacimiento && diaActual < diaNacimiento) || (mesActual < mesNacimiento)){
    
    edad = edad - 1;
}

cout << endl << "Su edad es: " << edad;


return 0;
}