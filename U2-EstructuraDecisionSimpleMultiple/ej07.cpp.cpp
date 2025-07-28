#include <iostream>
using namespace std;

int main (){
int a, b, c;

cout << "Ingrese el primer numero: ";
cin >> a;
cout << "Ingrese el segundo numero: ";
cin >> b;
cout << "Ingrese el tercer numero: ";
cin >> c;

if (a != b && b != c && c != a ){
    cout << endl << "Los tres numeros son distintos entre si";
}

return 0;
}
