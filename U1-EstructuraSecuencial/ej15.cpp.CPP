#include <iostream>
using namespace std;

/*La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima en una zona y tiempo determinado. Dada la temperatura
máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la
amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al
de la temperatura mínima.*/

int main (){
int temperaturaMaxima, temperaturaMinima, amplitudTermica; 

cout << "Ingrese la temperatura maxima hoy de san fernando: ";
cin >> temperaturaMaxima; 
cout << "Ingrese la temperatura minima hoy de san fernando: ";
cin >> temperaturaMinima;

amplitudTermica = temperaturaMaxima - temperaturaMinima;

cout << endl << "La amplitud termica de hoy en san fernando es de: " << amplitudTermica << " grados" << endl;

return 0;
}