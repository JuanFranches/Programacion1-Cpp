/*funcions / procedimientos
   Son una serie de instrucciones que estan bajo 
   un identificador( nombre de la funcion), 
   puede recibir argumentos (parametros)
   Puede devolver un valor (retorno)

   las funciones pueden ser llamadar o invocadas
   desde cualquier parte del programa*/
   /*por lo general la declaracion de la funcion es una accion, por ejemplo: calcularExponente, 
   calcularMaximo*/
   /*El void es el tipo de dato de retorno, en el caso de void es porque por lo general 
    no devuelve nada simplente muestra algo en pantalla*/
   /*si no devuleve un valor le voy a poner void pero si devuelve un tipo de dato le tenemos que poner
    el tipo de dato, en el caso de que sea un entero vamamos a poner int*/

    /*mostrar : cout. Usamos void
    devolver un valor: usamos return
    */

#include <iostream>
using namespace std;


//declaracion de la funcion
int sumar (int primerNumero, int segundoNumero){ // primerNumero y segundoNumero serian los parametros de la funcion, los parametros se reciben en el orden que fueron enviado los arguemntos
    int resultado;
    resultado = primerNumero + segundoNumero;
    return resultado; 
}

//llamado a la funcion 
int main () {
    cout << "2 + 5 = " << sumar (2,5) << endl; //le enviamos como argumento 
    return 0;
}


