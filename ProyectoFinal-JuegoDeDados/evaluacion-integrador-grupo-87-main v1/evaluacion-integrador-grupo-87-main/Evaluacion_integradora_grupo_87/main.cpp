#include <iostream>
#include "Headers/menu.h"
#include "Headers/unjugador.h"
#include "headers/creditos.h"
#include "rlutil.h"
#include <ctime>
#include "Headers/estadisticas.h"


using namespace std;

int main(){
    srand(time(0));

    string nombresTop[5] = {""}; // declaramos el vector del puntaje top 5
    int puntajesTop[5] = {0};   //  declaramos el vector de los nombres top 5

    int eleccionUsuario;
    rlutil::setBackgroundColor(rlutil::GREEN);
    rlutil::setColor(rlutil::WHITE);

    do
    {
        rlutil::cls(); //es para que se pise y no este creando un nuevo menu

        eleccionUsuario = seleccionDelUsuario(); //muestra el menu principal
        procesarLaEleccion(eleccionUsuario, nombresTop, puntajesTop); //pasamos nombresTop y puntajesTop a procesarLaEleccion

        cout << "presione cualquier tecla para continuar...";
        rlutil::anykey();
    }
    while (eleccionUsuario != 5);

    return 0;
}
