/*
Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
calcular e informar:
- La cantidad de personas mayores a 30 años que midan más de 1.8
metros.
- El promedio de altura de las personas mayores a 30 años.
- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
- La cantidad de personas cuya edad sea de 20, 30 o 40 años. 
*/

#include <iostream>
using namespace std;

int main()
{
    int edad1, edad2, edad3, edad4, edad5;
    float altura1, altura2, altura3, altura4, altura5, promedio;
    int PersonasMayoresA30 = 0, contMayores = 0, alturaPersonas = 0, contEdad = 0;
    float acuPromedioAltura = 0;


    cout << "Ingrese la edad de la primera persona: ";
    cin >> edad1;
    cout << "Ingrese la altura de la primera persona ";
    cin >> altura1;

    cout << "Ingrese la edad de la segunda persona: ";
    cin >> edad2;
    cout << "Ingrese la altura de la segunda persona ";
    cin >> altura2;


    cout << "Ingrese la edad de la tercera persona: ";
    cin >> edad3;
    cout << "Ingrese la altura de la tercera persona ";
    cin >> altura3;


    cout << "Ingrese la edad de la cuarta persona: ";
    cin >> edad4;
    cout << "Ingrese la altura de la cuarta persona ";
    cin >> altura4;

    cout << "Ingrese la edad de la quinta persona: ";
    cin >> edad5;
    cout << "Ingrese la altura de la quinta persona ";
    cin >> altura5;

    //punto A 

    if (edad1 > 30 && altura1 > 1.8){
        PersonasMayoresA30++;
    }
    if (edad2 > 30 && altura2 > 1.8){
        PersonasMayoresA30++;
    }
    if (edad3 > 30 && altura3 > 1.8){
        PersonasMayoresA30++;
    }
    if (edad4 > 30 && altura4 > 1.8){
        PersonasMayoresA30++;
    }
    if (edad5 > 30 && altura5 > 1.8){
        PersonasMayoresA30++;
    }

    //punto B

    if (edad1 > 30)
    {
        acuPromedioAltura += altura1;
        contMayores++;
    }
    if (edad2 > 30)
    {
        acuPromedioAltura += altura2;
        contMayores++;
    }
    if (edad3 > 30)
    {
        acuPromedioAltura += altura3;
        contMayores++;
    }
     if (edad4 > 30)
    {
        acuPromedioAltura += altura4;
        contMayores++;
    }
    if (edad5 > 30)
    {
        acuPromedioAltura += altura5;
        contMayores++;
    }
    
    if (contMayores >= 1)
    {
        promedio = acuPromedioAltura / contMayores;
    }
    else{
        promedio = 0;
    }

    

    //punto C

    if (altura1 >= 1.7 && altura1 <= 1.8){
        alturaPersonas++;
    }
    if (altura2 >= 1.7 && altura2 <= 1.8){
        alturaPersonas++;
    }
    if (altura3 >= 1.7 && altura3 <= 1.8){
        alturaPersonas++;
    }
    if (altura4 >= 1.7 && altura4 <= 1.8){
        alturaPersonas++;
    }
    if (altura5 >= 1.7 && altura5 <= 1.8){
        alturaPersonas++;
    }

    //punto D

    if (edad1 == 20 || edad1 == 30 || edad1 == 40){
        contEdad++;
    }
    if (edad2 == 20 || edad2 == 30 || edad2 == 40){
        contEdad++;
    }
    if (edad3 == 20 || edad3 == 30 || edad3 == 40){
        contEdad++;
    }
    if (edad4 == 20 || edad4 == 30 || edad4 == 40){
        contEdad++;
    }
    if (edad5 == 20 || edad5 == 30 || edad5 == 40){
        contEdad++;
    }


    cout << endl << "La cantidad de personas mayores de 30 anios que midan mas de 1.8 metros son: " << PersonasMayoresA30;
    cout << endl << "El promedio de altura de las personas mayores de 30 anios es de: " << promedio;
    cout << endl<< "La cantidad de personas con altura entre 1.7 y 1.8 es: " << alturaPersonas;
    cout << endl << "La cantidad de personas cuya edad sea de 20, 30 o 40 anios son: " << contEdad;


return 0;

}