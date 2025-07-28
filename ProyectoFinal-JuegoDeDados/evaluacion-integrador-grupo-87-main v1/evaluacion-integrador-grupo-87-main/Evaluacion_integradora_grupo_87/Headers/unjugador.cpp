#include <iostream>
#include "nombrejugador.h"
#include "dadosbloqueadores.h"
#include "dadossumadores.h"
#include "sumatoriaPuntos.h"
#include "cambioDeRonda.h"
#include "estadisticas.h"
#include <ctime>
using namespace std;

void unJugador(string nombresTop[], int puntajesTop[]) {
    char eleccionUjugador = 's';
    int puntosTotales = 0;
    int puntosTotalesRondas = 0;
    int puntajeTotal;
    int dadosBloqueados[2];
    int tamBloqueados = 2;

    cout << "Modo un jugador seleccionado" << endl;
    cout << "-------------------------------------" << endl;

    string nombre = nombreJugador();

    cout << "--------------------------------------" << endl;

//hicimos un ciclo for para controlar las 3 rondas del jugador
    for (int ronda = 1; ronda <= 3; ronda++) {
        cout << "RONDA: " << ronda << endl;

//reiniciamos el tamano actual de los dados y los puntos totales para cada ronda del jugador
        puntosTotales = 0; //acumula el puntaje de cada tirada durante una ronda
        int tamActual = 5;


        dadosBloqueadores(dadosBloqueados);


        cambioDeRonda(dadosBloqueados, tamBloqueados, tamActual, puntosTotales, eleccionUjugador, ronda); //maneja las tiradas y calcula los puntos obtenidos en la ronda.


        puntosTotalesRondas += puntosTotales; //acumula los puntos obtenidos por ronda
    }
//fin del juego
    cout << "Finalizo el juego." << endl;
    cout << "-------------------------------" << endl;
    cout << "El jugador " << nombre << " hizo una totalidad de: " << puntosTotalesRondas << " puntos." << endl;

    puntajeTotal = puntosTotalesRondas;


    estadisticas(nombre, puntajeTotal, nombresTop, puntajesTop);
}

