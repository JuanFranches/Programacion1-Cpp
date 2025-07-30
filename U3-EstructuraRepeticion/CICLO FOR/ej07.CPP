/*
Hacer un programa para ingresar una lista de 10 números, luego informar
cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/

#include <iostream>
using namespace std;

int main (){
int cPositivos = 0, cNegativos = 0, cCero = 0;
int n;

for(int i = 1; i <= 10; i++){
    cout << "Ingresar numero ";
    cin >> n;

    if (n > 0){
        cPositivos++;
    }
    else if(n < 0){
        cNegativos++;
    }
    else{
        cCero++;
    }
}

cout << "Cantidad positivos: " << cPositivos << endl;
cout << "Cantidad negativos: " << cNegativos << endl;  
cout << "Cantidad iguales a cero: " << cCero << endl;    

return 0;
}