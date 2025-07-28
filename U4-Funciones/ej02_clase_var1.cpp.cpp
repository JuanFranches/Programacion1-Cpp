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

    cout << "El mayor de ambos numeros es: " << CalcularMaximo (num1, num2);
    return 0;
}