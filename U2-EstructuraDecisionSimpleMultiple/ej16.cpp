/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes 
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las 
siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/

#include <iostream>
using namespace std;

int main (){

  float nota1, nota2, nota3, nota4;
  cout << "Ingrese la primera nota: ";
  cin >> nota1;
  cout << "Ingrese la segunda nota: ";
  cin >> nota2;
  cout << "Ingrese la tercera nota: ";
  cin >> nota3;
  cout << "Ingrese la cuarta nota: ";
  cin >> nota4;

  if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7){
   cout << endl << "promociona";
  }

  else if ((nota1 >= 4 && nota2 >= 4 && nota3 >=4) || (nota2 >= 4 && nota3 >=4 && nota4 >=4) || (nota1 >= 4 && nota3 >=4 && nota4 >=4) || (nota1 >= 4 && nota2 >=4 && nota4 >=4)){
        cout << endl << "Rinde examen final";
  }
  else if (nota1 >= 4 || nota2 >=4 || nota3 >= 4 || nota4 >= 4){
        cout << endl << "Recupera Parciales";
  }
  else{
    cout << endl << "Recursa la materia";
  }
  
return 0;
}

