/*Hacer una función llamada CalcularMaximo que determine el máximo entre
dos números. La función debe recibir dos números enteros por valor y devolver
el valor más grande. Si los números son iguales debe devolver cualquiera de
los dos. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo,
emita luego el número mayor de ambos.*/

#include <iostream>
using namespace std;

int CalcularMaximo (int a, int b){
    int maximo; 

    if (a > b){
        maximo = a;
    }
    else if (b > a){
        maximo = b;
    }
    else{
        maximo = a;
    }
    return maximo;
}

int main (){
    int num1, num2, numeroMaximo;
    cout << "Ingrese el primero numero: ";
    cin >> num1;
    cout << "Ingrese el seguno numero: ";
    cin >> num2;

    numeroMaximo = CalcularMaximo (num1, num2);

    cout << "El mayor de ambos numeros es: " << numeroMaximo;
    return 0;
}