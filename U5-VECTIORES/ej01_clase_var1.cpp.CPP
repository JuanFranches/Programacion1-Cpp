/*Dado una lista de 10 numeros informar cuantos de ellos son mayores al promedio*/

#include <iostream>
using namespace std;

int main (){
  int vec[5];

  vec[0] = 10;
  vec[1] = 20;
  vec[2] = 30;
  vec[3] = vec[2] + 10;
  vec[4] = 11;

  cout << "Vec [2]: " << vec[2] << endl; 
  cout << "Vec [3]: " << vec[3] << endl; 
  cout << "Vec [4]: " << vec[4] << endl; 
  
  //string con vectores 

  string vNombres[5]{"Juan", "Jose", "Lautaro", "Javier", "Rodolfo"};

  for(int i = 0; i < 5; i++){

  cout << vNombres[i] << endl;

  }

return 0;
}