#include <iostream>
using namespace std;

int main()
{
    const float VH_CPP = 10000, VH_CS = 6100, VH_PY = 5400, VH_GO = 5000;
    int cantidadHoras;
    char tipoLenguaje;
    float valorHora, totalProyecto; // va en floar por si pagan con centavos
    bool urgente;

    cout << "Cantidad de horas trabajadas: ";
    cin >> cantidadHoras;

    cout << endl;
    cout << ".--------.------.------------." << endl;
    cout << "| Nombre | Tipo | Valor hora |" << endl;
    cout << ":--------+------+------------:" << endl;
    cout << "| C/C++  | 'C'  | $ 10000    |" << endl;
    cout << "| C#     | '#'  | $ 6100     |" << endl;
    cout << "| Python | 'P'  | $ 5400     |" << endl;
    cout << "| Go     | 'G'  | $ 5000     |" << endl;
    cout << "'--------'------'------------'" << endl;

    cout << endl << "Tipo de lenguaje: ";
    cin >> tipoLenguaje;

    cout << endl << "Urgente (1 - Si, 0 - No): ";
    cin >> urgente; 

    switch (tipoLenguaje)
    {
    case 'C':
    case 'c':
        valorHora = VH_CPP;
        break;
    case '#':
        valorHora = VH_CS;
        break;
    case 'P':
    case 'p':
        valorHora = VH_PY;
        break;
    case 'G':
    case 'g':
        valorHora = VH_GO;
        break;
    }

    if (urgente == true) {
        totalProyecto = (cantidadHoras * valorHora) * 2.2;    
    }
    else {
        totalProyecto = cantidadHoras * valorHora;
    }

    cout << endl
         << "Total del proyecto: $" << totalProyecto << endl;

    return 0;
}