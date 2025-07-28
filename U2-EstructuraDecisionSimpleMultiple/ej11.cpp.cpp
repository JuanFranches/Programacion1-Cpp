#include <iostream>
using namespace std;

int main (){
int numero1, numero2, numero3, numero4, numero5;
int positivos = 0, negativos = 0, igualesACero = 0;

cout << "Ingrese el primer numero: ";
cin >> numero1;
cout << "Ingrese el seguno numero: ";
cin >> numero2;
cout << "Ingerse el tercer numero: ";
cin >> numero3;
cout << "ingrese el cuarto numero: ";
cin >> numero4;
cout << "Ingrese el quinto numero: ";
cin >> numero5;

if (numero1 > 0){
    positivos++;
}
else if (numero1 < 0){
    negativos++;
}
else{
    igualesACero++;
}
if (numero2 > 0){
    positivos++;
}
else if (numero2 < 0){
    negativos++;
}
else{
    igualesACero++;
}
if (numero3 > 0){
    positivos++;
}
else if (numero3 < 0){
    negativos++;
}
else{
    igualesACero++;
}
if (numero4 > 0){
    positivos++;
}
else if (numero4 < 0){
    negativos++;
}
else{
    igualesACero++;
}
if (numero5 > 0){
    positivos++;
}
else if (numero5 < 0){
    negativos++;
}
else{
    igualesACero++;
}

cout << endl << positivos << " son positivos";
cout << endl << negativos << " son negativos";
cout << endl << igualesACero << " son iguales a cero";

return 0;
}

