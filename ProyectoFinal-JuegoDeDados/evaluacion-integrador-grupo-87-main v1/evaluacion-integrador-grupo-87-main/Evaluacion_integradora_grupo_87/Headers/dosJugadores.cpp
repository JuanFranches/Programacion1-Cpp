#include <iostream>
#include "nombrejugador.h"
#include "dadosbloqueadores.h"
#include "cambioDeRonda.h"
#include "estadisticas.h"
#include <ctime>
using namespace std;

void dosJugadores(string nombresTop[], int puntajesTop[]) {
    //llamamos a nombre jugador para completar con los nombres de los 2 jugadores
    string nombre1 = nombreJugador();
    string nombre2 = nombreJugador();
    int puntosTotales1 = 0, puntosTotales2 = 0;
    int puntosTotalesRondas1 = 0, puntosTotalesRondas2 = 0;
    int tamBloqueados = 2;
    int dadosBloqueados[2];
    char eleccionUjugador = 's';


    cout << "Modo dos jugadores seleccionado" << endl;
    cout << "-------------------------------------" << endl;
//hicimos un ciclo for para controlar las 3 rondas de los jugadores
    for (int ronda = 1; ronda <= 3; ronda++) {
        cout << endl << "RONDA: " << ronda << " para " << nombre1 << endl << endl;
        dadosBloqueadores(dadosBloqueados);
        //reiniciamos el tamano actual de los dados y los puntos totales para cada ronda del jugador 1
        int tamActual = 5;
        puntosTotales1 = 0;
       //llamamos a cambio de ronda para manejar las tiradas de las rondas y la sumatoria de puntos para el jugador 1
        cambioDeRonda(dadosBloqueados, tamBloqueados, tamActual, puntosTotales1, eleccionUjugador, ronda);
        puntosTotalesRondas1 += puntosTotales1;

        cout << endl << "RONDA: " << ronda << " para " << nombre2 << endl << endl;
        dadosBloqueadores(dadosBloqueados);

        //reiniciamos el tamano actual de los dados y los puntos totales para cada ronda del jugador 2
        tamActual = 5;
        puntosTotales2 = 0;
//llamamos a cambio de ronda para manejar las tiradas de las rondas y la sumatoria de puntos para el jugador 2
        cambioDeRonda(dadosBloqueados, tamBloqueados, tamActual, puntosTotales2, eleccionUjugador, ronda);
        puntosTotalesRondas2 += puntosTotales2;
    }
//mensajes de fin del juego
    cout << endl << endl << "Finalizo el juego." << endl;
    cout << "-------------------------------------" << endl;
    cout << "El jugador " << nombre1 << " hizo una totalidad de: " << puntosTotalesRondas1 << " puntos." << endl;
    cout << "El jugador " << nombre2 << " hizo una totalidad de: " << puntosTotalesRondas2 << " puntos." << endl;

     if (puntosTotalesRondas1 > puntosTotalesRondas2) {
        cout << "¡El ganador es " << nombre1 << "!" << endl;
    } else if (puntosTotalesRondas2 > puntosTotalesRondas1) {
        cout << "¡El ganador es " << nombre2 << "!" << endl;
    } else {
        cout << "Es un empate entre " << nombre1 << " y " << nombre2 << "!" << endl;
    }


    estadisticas(nombre1, puntosTotalesRondas1, nombresTop, puntajesTop);
    estadisticas(nombre2, puntosTotalesRondas2, nombresTop, puntajesTop);

}
