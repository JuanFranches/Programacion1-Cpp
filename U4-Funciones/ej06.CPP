/*
Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombre por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/

#include <iostream>
using namespace std;

void calcularDiaSemanal (int dia, string &nombre){
    switch (dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    
    default:
        nombre = "Dia invalido, vuelve a ingresar un dia de la semana";
        break;
    }
}

int main (){
    int dia; 
    string nombre;

    cout << "Ingrese el numero de un dia de la semana (0 para Domingo, 6 para Sábado):  ";
    cin >> dia;

    calcularDiaSemanal (dia, nombre);

    cout << endl << "El dia de la semana es: " << nombre << endl;
    
return 0;
}