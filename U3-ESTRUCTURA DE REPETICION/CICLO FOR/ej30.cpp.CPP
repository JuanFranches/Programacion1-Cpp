    /*Dada una lista de 7 números enteros todos distintos entre sí determinar e
    informar con un cartel aclaratorio si los números primos ingresados en la
    misma están ordenados de menor a mayor. Los números primos pueden no ser
    consecutivos, pero sí estar ordenados.

    Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que
    los números primos están ordenados: 5, 7, 13, 19.

    Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya
    que los números primos no están ordenados: 3, 5, 11, 7.*/
    
    #include <iostream>
    using namespace std;

    int main (){
        
    int numero, numeroPrimo, numeroAnterior = 0; 
    bool estaOrdenado = true, primerPrimo = false;



    for (int i = 1; i <= 7; i++)
    {   
        cout << "Ingresar un numero ";
        cin >> numero; 


        numeroPrimo = 0;
        for (int j = 1; j <= numero; j++){
            if (numero % j == 0){
                numeroPrimo++; 
            }
        }

        if (numeroPrimo == 2) {
            if (!primerPrimo) {
                numeroAnterior = numero;
                primerPrimo = true;
            } 
            else if (numero >= numeroAnterior) {
            numeroAnterior = numero;
            } 
            else {
                estaOrdenado = false;
            }       
        }
    }

    if (estaOrdenado){
    cout << "La lista de numeros primos esta ordenada";
    }
    else{
    cout << "La lista de numeros primos esta desordenada"; 
    }

    return 0;
    }