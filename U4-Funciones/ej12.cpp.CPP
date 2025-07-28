/*Escribir una función de nombre validarFecha que reciba 3 valores
correspondientes al día, mes y año, y devuelva 1 si los valores recibidos
corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la
función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá
devolver 1.*/

#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int validarFecha(int dia, int mes, int anio) {
    // Verificar que el mes esté en el rango válido
    if (mes < 1 || mes > 12) {
        return 0;
    }

    // Verificar días según el mes
    if (dia < 1 || dia > 31) {
        return 0;
    }

    // Validar el número de días según el mes
    switch (mes) {
        case 4: case 6: case 9: case 11: // Meses con 30 días
            if (dia > 30) return 0;
            break;
        case 2: // Febrero
            if (esBisiesto(anio)) {
                if (dia > 29) return 0;
            } else {
                if (dia > 28) return 0;
            }
            break;
        default: // Meses con 31 días ya han sido validados
            break;
    }

    return 1; // La fecha es válida
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