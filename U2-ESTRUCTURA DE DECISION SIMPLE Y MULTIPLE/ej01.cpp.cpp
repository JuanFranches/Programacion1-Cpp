#include <iostream>
using namespace std;

int main (){
int num;

cout << "Ingrese un numero: ";
cin >> num;

if (num > 0){
    cout << endl << "el numero es positivo";
}
if (num < 0){
    cout << endl << "el numero es negativo";
}
if (num == 0){
    cout << endl << "el numero es 0";
}

return 0;
}
