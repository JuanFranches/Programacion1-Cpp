#include <iostream>
using namespace std;

int main (){
int importe, importeDescuentoAplicado;

cout << "Ingrese el importe: $";
cin >> importe;

if (importe < 100){
importeDescuentoAplicado = importe * 0.95;
}
else if (importe >= 100 && importe <= 500)
{
importeDescuentoAplicado = importe * 0.90;
}
else{
importeDescuentoAplicado = importe * 0.85;
}

cout << endl << "El importe con el descuneto aplicado es de: $" << importeDescuentoAplicado;

return 0;
}