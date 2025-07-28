#include <iostream>
using namespace std;

int main (){
int numero1, numero2, numero3;

cout << "Ingresar el primer numero: ";
cin >> numero1;
cout << "Ingresar el segundo numero: ";
cin >> numero2;
cout << "Ingresar el tercer numero: ";
cin >> numero3;

if ((numero1 > numero2 && numero1 < numero3) || (numero1 > numero3 && numero1 < numero2)){
    cout << endl << numero1 << " es el numero del medio";
}
else if ((numero2 > numero1 && numero2 < numero3) || (numero2 > numero3 && numero2 < numero1)){
    cout << endl << numero2 << " es el numero del medio";
}
else{
    cout << endl << numero3 << " es el numero del medio";
}

return 0;
}