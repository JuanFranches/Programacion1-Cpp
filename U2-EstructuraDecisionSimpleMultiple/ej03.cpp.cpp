#include <iostream>
using namespace std;

int main (){
int num, resultado;

cout << "Ingrese un numero: ";
cin >> num;

resultado = num % 2;

if (resultado == 0)
{
    cout << endl << "El numero es par";
}
else {
    cout << endl << "El numero es impar";
}

return 0;
}