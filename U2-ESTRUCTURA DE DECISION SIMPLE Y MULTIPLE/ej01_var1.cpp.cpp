#include <iostream>
using namespace std;

//variante anidado


int main (){
int num;

cout << "Ingrese un numero: ";
cin >> num;

if (num > 0){
   cout << endl << "El numero es positivo";
}
else if (num < 0){
    cout << endl << "El numero es negativo";
}
else{
    cout << endl << "El numero es cero";
}


return 0;
}
