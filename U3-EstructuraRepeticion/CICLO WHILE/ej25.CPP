/*
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie
de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
registre los artistas que participarán. Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)
La información no se encuentra ordenada bajo ningún criterio. La carga de
datos se finaliza con un número de artista igual a cero. Calcular e informar:
- El número de artista que realice el show más largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en
cada una de las jornadas. (se muestran tres resultados).
- La jornada más extensa (en minutos totales).
- Duración promedio de show por artista (se muestra un resultado).
*/


#include <iostream>
using namespace std;

int main() { 
int numeroDeArtista, integrantes, jornada, duracionDelShow; 
int numeroDeArtistaMasLargo, showMasLargo, duracionPromedio;
int canitdadSolistasJornada1 = 0, canitdadSolistasJornada2 = 0, cantidadSolistasJornada3 = 0, acuJornada1 = 0, acuJornada2 = 0, acuJornada3 = 0, jornadaMasExtensa, TotalDeArtistas = 0, acuDuracionTotal = 0;
bool primerShowJornada1 = false;
 

cout << "Ingrese el numero de artista (0 para finalizar): ";
cin >> numeroDeArtista;


while (numeroDeArtista != 0){

    cout << "Ingrese la cantidad de integrantes: ";
    cin >> integrantes;
    cout << "Ingrese la jornada (1, 2 o 3): ";
    cin >> jornada;
    cout << "Ingrese la duracion del show en minutos: ";
    cin >> duracionDelShow;

  if (jornada == 1){
    if (!primerShowJornada1){
        showMasLargo = duracionDelShow; 
        numeroDeArtistaMasLargo = numeroDeArtista;
        primerShowJornada1 = true;
    }
    else if (duracionDelShow > showMasLargo){
        showMasLargo = duracionDelShow; 
        numeroDeArtistaMasLargo = numeroDeArtista;
    }   
  } 

  if (jornada == 1){
    acuJornada1 += duracionDelShow;
    if (integrantes == 1){
      canitdadSolistasJornada1++;
    }
  }
  if (jornada == 2){
    acuJornada2 += duracionDelShow;
    if(integrantes == 1){
      canitdadSolistasJornada2++;
    }
  }
  if (jornada == 3){
    acuJornada3 += duracionDelShow;
    if(integrantes == 1){
      cantidadSolistasJornada3++;
    }
  }

  TotalDeArtistas++;
  acuDuracionTotal += duracionDelShow;
  
  cout << "Ingrese el numero de artista (0 para finalizar): ";
  cin >> numeroDeArtista;

}

if (acuJornada1 > acuJornada2 && acuJornada1 > acuJornada2){
  jornadaMasExtensa = 1; 
}

if (acuJornada2 > acuJornada1 && acuJornada2 > acuJornada3){
  jornadaMasExtensa = 2;
}

if (acuJornada3 > acuJornada2 && acuJornada3 > acuJornada1){
  jornadaMasExtensa = 3;
}

duracionPromedio = acuDuracionTotal / TotalDeArtistas;

cout << "Numero de artista que realizo el show mas largo: " << numeroDeArtistaMasLargo << endl;
cout << "Cantidad de solistas en la jornada 1: " << canitdadSolistasJornada1 << endl;
cout << "Cantidad de solistas en la jornada 2: " << canitdadSolistasJornada2 << endl;
cout << "Cantidad de solistas en la jornada 3: " << cantidadSolistasJornada3 << endl;
cout << "Jornada mas extensa: " << jornadaMasExtensa << endl;
cout << "Duracion promedio de show por artista: " << duracionPromedio << endl;
  
}
