#include <iostream>
using namespace std;

/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
por un operario y el valor que se le paga por hora trabajada y listar por pantalla
el sueldo que le corresponda.*/

int main (){
int horasTrabajadas;
float valorHoras;
float sueldoCorrespondido;

cout << "Ingrese la cantidad de horas trabajadas: ";
cin >> horasTrabajadas; 
cout << "Ingrese el valor por hora trabajda: ";
cin >> valorHoras;

sueldoCorrespondido = horasTrabajadas * valorHoras;

cout << endl <<  "El sueldo es: $" << sueldoCorrespondido << endl;

return 0;
}


