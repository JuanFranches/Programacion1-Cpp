#include <iostream>
using namespace std;

int main (){
int n1, n2, diferencia;

cout << "Ingrese el primer numero: ";
cin >> n1;
cout << "Ingrese el segundo numero: ";
cin >> n2;

if (n1 > n2){
    diferencia = n1 - n2; 
}
else if (n2 > n1)
{
    diferencia = n2 - n1; 
}
else{
    diferencia = n1 - n2; 
}

cout << endl << "La diferencia entre ambos es: " << diferencia;

return 0;
}