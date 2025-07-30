/*
Hacer un programa para ingresar una lista de 10 números, luego informar el
porcentaje de positivos, negativos, y ceros.
*/

#include <iostream>
using namespace std;

int main (){
int cPositivos = 0, cNegativos = 0, cCero = 0;
int n; 
float porcentajePositivos, porcentajeNegativos, porcentajeCero;

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

porcentajePositivos = (cPositivos * 100) / 10;
porcentajeNegativos = (cNegativos * 100) / 10;
porcentajeCero = (cCero * 100) / 10;

cout << "Positivos: " << porcentajePositivos << "%" << endl;
cout << "Negativos: " << porcentajeNegativos << "%" << endl;
cout << "Iguales a cero: " << porcentajeCero << "%" << endl; 

return 0;
}