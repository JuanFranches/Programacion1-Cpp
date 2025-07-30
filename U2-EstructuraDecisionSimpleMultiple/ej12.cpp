/*
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8
*/

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