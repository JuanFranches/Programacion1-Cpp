/*Hacer una función llamada Redondear que reciba como parámetro un número
float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.
Hacer un programa para ingresar un número y, utilizando Redondear, emita
luego un cartel indicando el número redondeado.*/

#include <iostream>
using namespace std;

int Redondear (float numero){
    
    int numeroEntero = numero;
    float parteDecimal = numero - numeroEntero;

    if(parteDecimal < 0.5){
        return numeroEntero;
    }
    else{
        return numeroEntero + 1;
    }

}

int main (){
float num; 
cout << "Ingrese un numero: ";
cin >> num;

cout << "Numero redondeado: " << Redondear (num);

return 0;
}