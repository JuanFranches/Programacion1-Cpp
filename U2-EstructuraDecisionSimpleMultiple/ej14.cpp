/*
Hacer un programa para ingresar por teclado la fecha de nacimiento de una 
persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la 
fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego 
la edad en años de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual 
es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual 
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual 
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
*/

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