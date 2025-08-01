/*
Escribir una función de nombre validarFecha que reciba 3 valores
correspondientes al día, mes y año, y devuelva 1 si los valores recibidos
corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la
función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá
devolver 1.
*/

#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int validarFecha(int dia, int mes, int anio) {
    
    if (mes < 1 || mes > 12) {
        return 0;
    }

    
    if (dia < 1 || dia > 31) {
        return 0;
    }

    
    switch (mes) {
        case 4: case 6: case 9: case 11: 
            if (dia > 30) return 0;
            break;
        case 2: // Febrero
            if (esBisiesto(anio)) {
                if (dia > 29) return 0;
            } else {
                if (dia > 28) return 0;
            }
            break;
        default: 
            break;
    }

    return 1; 
}

int main() {
    int dia, mes, anio;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;

    if (validarFecha(dia, mes, anio)) {
        cout << "La fecha es correcta." << endl;
    } else {
        cout << "La fecha es incorrecta." << endl;
    }

    return 0;
}