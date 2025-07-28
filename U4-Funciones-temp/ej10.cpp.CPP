/*Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
del mazo). La función debe recibir por referencia el número de naipe y el
nombre del palo (para ser completados por la función) y por valor el código de
naipe. Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.*/

#include <iostream>
using namespace std;

void calcularNumeroYPalo(int &numeroNaipe, string &nombreDelPalo, int codigoNaipe) {


        if (codigoNaipe >= 1 && codigoNaipe <= 10 && codigoNaipe != 6 && codigoNaipe != 7)
            {
                numeroNaipe = codigoNaipe + 2;
                nombreDelPalo = "Espada";
            }
        if (/* condition */)
        {
            /* code */
        }
        


        for (int j = 1; j < 10; j++)
        {
            if (codigoNaipe >= 1 && codigoNaipe <= 10)
            {
                /* code */
            }
            
        }
        
        


    }
    

    if (codigoNaipe >= 1 && codigoNaipe <= 10) { // Espadas
        nombreDelPalo = "espadas";
        numeroNaipe = codigoNaipe; // Del 1 al 10 en espadas
    } 
    else if (codigoNaipe >= 11 && codigoNaipe <= 20) { // Bastos
        nombreDelPalo = "bastos";
        numeroNaipe = codigoNaipe - 10; // Del 1 al 10 en bastos
    } 
    else if (codigoNaipe >= 21 && codigoNaipe <= 30) { // Copas
        nombreDelPalo = "copas";
        numeroNaipe = codigoNaipe - 20; // Del 1 al 10 en copas
    } 
    else if (codigoNaipe >= 31 && codigoNaipe <= 40) { // Oros
        nombreDelPalo = "oros";
        numeroNaipe = codigoNaipe - 30; // Del 1 al 10 en oros
    } 
    else {
        cout << "Codigo de naipe invalido." << endl;
    }
}

int main() {
    int codigoNaipe, numeroNaipe;
    string nombreDelPalo;

    cout << "Ingrese el codigo del naipe (1-40): ";
    cin >> codigoNaipe;

    calcularNumeroYPalo(numeroNaipe, nombreDelPalo, codigoNaipe);

    if (codigoNaipe >= 1 && codigoNaipe <= 40) {
        cout << "El naipe es el " << numeroNaipe << " de " << nombreDelPalo << "." << endl;
    }

    return 0;
}