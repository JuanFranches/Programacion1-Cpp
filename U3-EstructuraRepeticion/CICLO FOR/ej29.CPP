/*
Se dispone de la información de los últimos 19 partidos del futbolista Diego
Armando Laradona. Por cada partido se registró:
- Número de partido
- Minutos jugados
- Tarjetas amarillas
- Tarjetas rojas
- Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por
número de partido. Se pide calcular e informar:
A) La cantidad de partidos que no jugó (partidos con minutos igual a cero)
B) La cantidad de partidos que jugó por completo (minutos >= 90)
C) El promedio de tarjetas recibidas por partido.
D) El número de partido en el que haya convertido mayor cantidad de goles.
Indicar también los goles convertidos.
E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor
cantidad de partidos consecutivos en los que haya convertido.
*/

#include <iostream>
using namespace std;

int main (){
int numeroDePartido, minutosJugados, tarjetasAmarillas, tarjetasRojas, goles, promedioTartejas, partidoGolesMaximos;
int partidosNojugados = 0, partidosCompletos = 0, acuTarjetas = 0, maximoGoles = 0, golesAnterior = 0, golesConsecutivos = 0; 

for (int i = 1; i <= 19; i++)
{
    cout << "Ingrese el numero de partido: ";
    cin >> numeroDePartido;
    cout << "Minutos jugaods: ";
    cin >> minutosJugados; 
    cout << "Tarjetas amarillas: ";
    cin >> tarjetasAmarillas;
    cout << "Tarjetas rojas: ";
    cin >> tarjetasRojas; 
    cout << "Goles: "; 
    cin >> goles; 
    cout << endl; 

    if (minutosJugados == 0){
        partidosNojugados++; 
    }
    else if (minutosJugados >= 90){
        partidosCompletos++; 
    }

    if(tarjetasAmarillas >= 1){
        acuTarjetas += tarjetasAmarillas;
    }
    if (tarjetasRojas >= 1){
        acuTarjetas += tarjetasRojas;
    }

    if (goles > maximoGoles)
    {
        maximoGoles = goles; 
        partidoGolesMaximos = numeroDePartido;
    }
    
    if (golesAnterior > 0 && goles > 0){
        golesConsecutivos++;
    }

    golesAnterior = goles;
}

promedioTartejas = acuTarjetas / 19;



return 0;
}