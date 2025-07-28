#include <iostream>
#include "sumatoriaPuntos.h"
using namespace std;


int sumarPuntos(int dadosSumadores[], int dadosBloqueadores[], int tamSumadores, int tamBloqueadores) {
     int puntos = 0;
//recorremos todos los dados y nos fijamos si son dados validos para sumar comparando los dados sumadores con los bloqueadores
    for (int i = 0; i < tamSumadores; i++) {
        bool dadoValido = true;
        for (int j = 0; j < tamBloqueadores; j++) {
            if (dadosSumadores[i] == dadosBloqueadores[j]) {
                dadoValido = false;

            }
        }
//si los dados son validos los sumamos
        if (dadoValido) {
            puntos += dadosSumadores[i];
        }
    }


    return puntos;
}


