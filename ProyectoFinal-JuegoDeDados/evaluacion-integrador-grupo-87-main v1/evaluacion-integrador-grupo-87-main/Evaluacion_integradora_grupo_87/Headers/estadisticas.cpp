#include "estadisticas.h"
#include <iostream>
#include <string>

using namespace std;

void estadisticas(const string& nombre, int puntaje, string nombresTop[5], int puntajesTop[5]) {
    int minPos = 0;

    // Encontrar el �ndice del menor puntaje en el top 5
    for (int i = 1; i < 5; i++) {
        if (puntajesTop[i] < puntajesTop[minPos]) {
            minPos = i;
        }
    }

    // Si el nuevo puntaje es mayor que el menor del top 5, reemplazarlo
    if (puntaje > puntajesTop[minPos]) {
        puntajesTop[minPos] = puntaje;
        nombresTop[minPos] = nombre;
    }

    // Ordenar el ranking en orden descendente
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (puntajesTop[j] > puntajesTop[i]) {
                // Intercambiar puntajes
                int tempPuntaje = puntajesTop[i];
                puntajesTop[i] = puntajesTop[j];
                puntajesTop[j] = tempPuntaje;

                // Intercambiar nombres
                string tempNombre = nombresTop[i];
                nombresTop[i] = nombresTop[j];
                nombresTop[j] = tempNombre;
            }
        }
    }
}

void mostrarEstadisticas(string nombresTop[5], int puntajesTop[5]) {
    cout << "Top 5 puntajes:\n";
    for (int i = 0; i < 5; i++) {
        if (puntajesTop[i] > 0) {
            cout << "----------------------------------------------------" << endl;
            cout << nombresTop[i] << ": " << puntajesTop[i] << " puntos" << endl;
            cout << "----------------------------------------------------" << endl;
        }
    }
}

