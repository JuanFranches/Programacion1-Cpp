/*27 Una estación meteorológica registró una muestra climática de los últimos 15
días. Por cada día registró:
- Número de día (entero)
- Temperatura (float)
- Milímetros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada día. La información se encuentra ordenada por día. Se
pide calcular e informar:
- El número del día que se haya registrado la temperatura máxima.
- La amplitud térmica de todo el período.
- La cantidad de días con neblina.
- Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
De lo contrario mostrar "Quincena seca".
NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.*/
#include <iostream>
using namespace std;

int main (){
int PosicionTempMax; 
int contadorDiasNeblina = 0, contadorDiasLlovidos = 0; 
float temperatura, milimetrosDeLluvia, visibilidadEnKm, temperaturaMaxima, temperaturaMinima, amplitudTermica; 

for (int i = 1; i <= 15; i++){

    cout << "Dia: " << i << endl;
    cout << "Ingresar la temperatura : "; 
    cin >> temperatura; 
    cout << "Ingresar los milimetros de agua : "; 
    cin >> milimetrosDeLluvia; 
    cout << "Ingresar la visibilidad en km : "; 
    cin >> visibilidadEnKm; 
    cout << endl;

    if(i == 1){
        temperaturaMaxima = temperatura;
        PosicionTempMax = i; 
        temperaturaMinima = temperatura; 
    }
    else {
        if (temperatura > temperaturaMaxima) {
            temperaturaMaxima = temperatura; 
            PosicionTempMax = i; 
        }
        if (temperatura < temperaturaMinima) {
            temperaturaMinima = temperatura; 
        }
    }

    if (visibilidadEnKm < 2){
        contadorDiasNeblina++;
    }

    if (milimetrosDeLluvia > 0){
        contadorDiasLlovidos++;
    }

}

amplitudTermica = temperaturaMaxima - temperaturaMinima; 

cout << endl << "El dia " << PosicionTempMax << " se registro la temperatura maxima" << endl;
cout << "La amplitud termica es de: " << amplitudTermica << " grados" << endl;  
cout << "Cantidad de dias con neblina: " << contadorDiasNeblina << endl;

if (contadorDiasLlovidos > 7)
{
    cout << "Quincena lluviosa" << endl;
}
else if (contadorDiasLlovidos >= 5){
    cout << "Quincena humeda" << endl;
}
else if (contadorDiasLlovidos < 5){
    cout << "Quincena seca" << endl;
}


return 0;
}
