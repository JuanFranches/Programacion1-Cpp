#include <iostream>
using namespace std;

int main (){
int a, b, c;

cout << "Ingrese la longitud del primer lado de un triangulo: ";
cin >> a;
cout << "Ingrese la longitud del segundo lado de un triangulo: ";
cin >> b;
cout << "Ingrese la longitud del tercer lado de un triangulo: ";
cin >> c;

if (a == b && b == c){
    cout << endl << "El triangulo es equilatero";
}
else if (a != b && b != c && c != a ){
    cout << endl << "El triangulo es escaleno";
}
else{
    cout << endl << "El triangulo es isosceles";
}


return 0;
}