#include <iostream>
using namespace std;

int main (){
int consumoKilovatios, totalAPagar;

cout << "Ingrese el consumo de Kilovatios del cliente: ";
cin >> consumoKilovatios;

if (consumoKilovatios <= 100){
    totalAPagar = consumoKilovatios * 10;
}
else  if (consumoKilovatios >= 101 && consumoKilovatios <= 200)
{
    totalAPagar = (100 * 10) + (consumoKilovatios - 100) * 12;
}
else{
    totalAPagar = (100 * 10) + (100 * 12) + (consumoKilovatios - 200) * 15;
}

cout << endl << "El total a pagar es de: $" << totalAPagar;

return 0;
}