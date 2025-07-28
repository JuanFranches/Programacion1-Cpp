#include <iostream>
using namespace std;

int main (){
int n1, n2, resultado;

cout << "Ingrese el primer numero: ";
cin >> n1;
cout << "Ingrese el segundo numero: ";
cin >> n2;

resultado = n2 % n1;

if (resultado == 0){
    cout << "El primer numero " << n1 << " Es multiplo del segundo " << n2;
}

return 0;
}