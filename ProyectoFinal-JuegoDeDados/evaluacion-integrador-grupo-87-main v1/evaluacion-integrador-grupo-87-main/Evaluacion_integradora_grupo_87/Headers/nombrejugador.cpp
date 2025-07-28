#include<iostream>
#include <string>
#include "nombreJugador.h"

using namespace std;

string nombreJugador() {
    string nombre;
    cout << "Ingrese el nombre del jugador: ";
    cin.ignore(); // Ignora salto de lineas
    getline(cin, nombre); //es para leer los espacios
    return nombre;
}
