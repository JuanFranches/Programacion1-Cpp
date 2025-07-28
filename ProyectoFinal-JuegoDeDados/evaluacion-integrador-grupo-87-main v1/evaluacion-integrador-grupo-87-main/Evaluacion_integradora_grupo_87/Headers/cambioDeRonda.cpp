#include <iostream>
#include "dadossumadores.h"
#include "sumatoriaPuntos.h"
#include <cctype>
using namespace std;

void cambioDeRonda(int dadosBloqueados[], int tamBloqueados, int& tamActual, int& puntosTotales, char& eleccionUjugador, int ronda) {
    int puntosRonda = 0;

    do {
        int puntosTirada = 0;
        int dadosAsumar[5];
        dadosSumadores(dadosAsumar, tamActual);

        cout << "DADOS BLOQUEADORES: ";
        for (int i = 0; i < tamBloqueados; i++) {
            cout << dadosBloqueados[i] << " ";
        }
        cout << endl;
         //comparamos si todos los dados son iguales
        bool todosIguales = (tamActual > 1);
        for (int i = 1; i < tamActual && todosIguales; i++) {
            if (dadosAsumar[i] != dadosAsumar[0]) {
                todosIguales = false;
            }
        }

         //chequeamos que sean diferentes a los dados bloqueadores
        bool sonDiferentesABloqueadores = true;
         for (int i = 0; i < tamActual && sonDiferentesABloqueadores; i++) {
              for (int j = 0; j < tamBloqueados; j++) {
                 if (dadosAsumar[i] == dadosBloqueados[j]) {
                     sonDiferentesABloqueadores = false;
        }
    }
}



        puntosTirada = sumarPuntos(dadosAsumar, dadosBloqueados, tamActual, tamBloqueados); //retorna los puntos de una tirada

        puntosRonda += puntosTirada; //puntos que vamos acumulando en la ronda

        //si son diferentes a los bloqueadores e iguales entre si smultiplica
        if (todosIguales && sonDiferentesABloqueadores) {
            puntosTirada *= 2;
            cout << "¡Todos los dados son iguales! Se duplican los puntos obtenidos en esta tirada." << endl;
            cout << "Puntos obtenidos en esta tirada: " << puntosTirada << endl;
            dadosSumadores(dadosAsumar, tamActual);
            eleccionUjugador = 's';
        } else {
            cout << "Puntos obtenidos en esta tirada: " << puntosTirada << endl;
            cout<<"Puntos acumulados en la ronda: "<<puntosRonda<<endl;
            eleccionUjugador = 'n';
        }


        cout << "--------------------------------------" << endl;


        //creamos nuevos dados con los dados que no se eliminaron.
        int nuevosDados[5];
        int nuevoTam = 0;

        //verificamos que no se repiten los dados para mantenerlos en la siguiente tirada
        for (int i = 0; i < tamActual; i++) {
            bool esRepetido = false;
            for (int j = 0; j < tamBloqueados; j++) {
                if (dadosAsumar[i] == dadosBloqueados[j]) {
                    esRepetido = true;
                }
            }
            if (!esRepetido) {
                nuevosDados[nuevoTam++] = dadosAsumar[i];
            }
        }

        //copiamos los valores de nuevos dados que no se bloquearon y ajustamos el tamaño actual
        for (int i = 0; i < nuevoTam; i++) {
            dadosAsumar[i] = nuevosDados[i];
        }
        tamActual = nuevoTam;



            if (tamActual > 0 && !(todosIguales && sonDiferentesABloqueadores)) {

            do {
                 cout << "Desea realizar otra tirada en esta ronda? (s/n): ";
                 cin >> eleccionUjugador;
                eleccionUjugador = tolower(eleccionUjugador);


            if (eleccionUjugador != 's' && eleccionUjugador != 'n') {
                cout << "COMANDO NO VALIDO. Por favor ingrese 's' o 'n'." << endl;
               }
           } while (eleccionUjugador != 's' && eleccionUjugador != 'n');


          } else if (tamActual == 0) {
              cout << "Perdiste la ronda, todos los dados han sido eliminados. Cambiando de ronda." << endl;
              puntosRonda = 0;
              eleccionUjugador = 'n';
             tamActual = 5;
}

    } while (eleccionUjugador == 's' && tamActual > 0);

    cout << "Puntos acumulados en la ronda " << ronda << " : " << puntosRonda << endl;
    puntosTotales += puntosRonda;
}


