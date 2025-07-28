#include <iostream>
using namespace std;

int potencia (int base, int exponente){
    int resultado = 1;
    
    for (int i = 1; i <= exponente; i++)
    {
        resultado *= base;
    }
    return resultado;
    
}

int main (){
    int base, exponente, resultado; 
    cout << "Ingrese base: ";
    cin >> base;
    cout << "Ingrese exponente: ";
    cin >> exponente;

    resultado = potencia (base, exponente);

    cout << base << " ^ " << exponente << " = " << resultado;
    return 0;
}