#include <iostream>
using namespace std;

/*El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un
pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
Sinítico que son necesarios para elaborarlos.*/

int main (){
int cantidadPildoras, cantidadFrascos, betamol, micilina, acidoSinitico;

cout << "Ingresar la cantidad de frascos de un pedido: ";
cin >> cantidadFrascos;

cantidadPildoras = cantidadFrascos * 75;
betamol = cantidadPildoras * 45;
micilina = cantidadPildoras * 2 * 1000; /*2 gramos lo paso a mg*/
acidoSinitico = cantidadPildoras * 7;

cout << endl << "Cantidad de mg de los siguientes farmacos:" << endl << endl;
cout << "Betamol: " << betamol << " mg" << endl;
cout << "Micilina: " << micilina << " mg" << endl;
cout << "acido Sinitico: " << acidoSinitico << " mg" << endl;
  

return 0;
}