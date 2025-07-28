/*Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  
Calcular e informar:
La nota promedio entre todos los estudiantes.
El legajo del estudiante con menor nota.
La cantidad de exámenes rendidos para la materia 10.
El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.*/
#include <iostream>
using namespace std;

int main () {
    int legajoEstudiante, codigoMateria;
    int contadorNotas = 0, legajoMenorNota = 0, contadorMateria10 = 0;
    int contadorAprobados = 0, contadorDesaprobados = 0, totalExamenes;
    float nota, notaPromedio = 0, acuNotas = 0, menorNota, porcentajeAprobados, porcentajeDesaprobados;
    bool primerNota = false;

    cout << "Ingresar el Legajo del estudiante: ";
    cin >> legajoEstudiante;

    while (legajoEstudiante <= 30000) {
        cout << "Ingresar el codigo de materia: ";
        cin >> codigoMateria;
        cout << "Ingresar la nota: ";
        cin >> nota;

        contadorNotas++;
        acuNotas += nota;

        if (!primerNota)
        {
            menorNota = nota;
            legajoMenorNota = legajoEstudiante;
            primerNota = true;
        }
        else if(nota < menorNota){
            menorNota = nota; 
            legajoMenorNota = legajoEstudiante;
        }
        if (codigoMateria == 10) {
            contadorMateria10++;
        }
        if (nota >= 6) {
            contadorAprobados++;
        } 
        else {
            contadorDesaprobados++;
        }

        
        cout << "Ingresar el Legajo del estudiante: ";
        cin >> legajoEstudiante;
    }
  
        notaPromedio = acuNotas / contadorNotas;
        totalExamenes = contadorAprobados + contadorDesaprobados;
        
        porcentajeAprobados = (contadorAprobados * 100.0) / totalExamenes;
        porcentajeDesaprobados = (contadorDesaprobados * 100.0) / totalExamenes;

        cout << "La nota promedio es: " << notaPromedio << endl;
        cout << "El legajo del estudiante con la menor nota es: " << legajoMenorNota << endl;
        cout << "Exámenes rendidos para la materia 10: " << contadorMateria10 << endl;
        cout << "Porcentaje de aprobados: " << porcentajeAprobados << "%, " << "Porcentaje de desaprobados: " << porcentajeDesaprobados << "%" << endl;
    

    return 0;
}