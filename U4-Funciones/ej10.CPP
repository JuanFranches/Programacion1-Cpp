/*
Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
del mazo). La función debe recibir por referencia el número de naipe y el
nombre del palo (para ser completados por la función) y por valor el código de
naipe. Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/


#include <iostream>
using namespace std;

void calcularNumeroYPalo(int &numeroNaipe, string &nombreDelPalo, int codigoNaipe) {
    if (codigoNaipe >= 1 && codigoNaipe <= 10) { 
        nombreDelPalo = "Espadas";
        numeroNaipe = (codigoNaipe >= 8) ? codigoNaipe + 2 : codigoNaipe; 
    } 
    else if (codigoNaipe >= 11 && codigoNaipe <= 20) { 
        nombreDelPalo = "Bastos";
        numeroNaipe = (codigoNaipe - 10 >= 8) ? (codigoNaipe - 10) + 2 : codigoNaipe - 10;
    } 
    else if (codigoNaipe >= 21 && codigoNaipe <= 30) { 
        nombreDelPalo = "Copas";
        numeroNaipe = (codigoNaipe - 20 >= 8) ? (codigoNaipe - 20) + 2 : codigoNaipe - 20;
    } 
    else if (codigoNaipe >= 31 && codigoNaipe <= 40) { 
        nombreDelPalo = "Oros";
        numeroNaipe = (codigoNaipe - 30 >= 8) ? (codigoNaipe - 30) + 2 : codigoNaipe - 30;
    } 
    else {
        nombreDelPalo = "Invalido";
        numeroNaipe = -1;
    }
}

int main() {
    int codigoNaipe, numeroNaipe;
    string nombreDelPalo;

    cout << "Ingrese el codigo del naipe (1-40): ";
    cin >> codigoNaipe;

    calcularNumeroYPalo(numeroNaipe, nombreDelPalo, codigoNaipe);

    if (numeroNaipe != -1) {
        cout << "El naipe es el " << numeroNaipe << " de " << nombreDelPalo << "." << endl;
    } else {
        cout << "Codigo de naipe invalido." << endl;
    }

    return 0;
}