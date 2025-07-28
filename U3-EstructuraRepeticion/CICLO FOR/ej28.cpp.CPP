/*La cuenta corriente de la famosa cantante Lady Lara ha registrado 14
movimientos durante la semana pasada. Por cada movimiento se registró:
- Número de movimiento
- Día
- Tipo ('E' - Extracción / 'D' - Depósito)
- Importe
Existe un registro por movimiento. Se desea calcular e informar:
- El saldo final de la cuenta.
- El porcentaje de movimientos de extracción y el porcentaje de depósito.
- El depósito de mayor importe indicando también día y número de
movimiento.
- La cantidad de movimientos del día 10.*/

#include <iostream>
using namespace std;

int main (){
int numeroMovimiendo, dia, diaMayorDeposito, movimientoMayorImporte;  
int contMovimientosExtraccion = 0, contMovimientosDeposito = 0, cantMovimientosDiaDiez = 0;  
float acuExtracciones = 0, acuDepositos = 0;
float importe, saldoFinal, porcentajeExtraccion, procentajeDeposito, importeMaximo = 0;  
char tipoDeMovimiento;
 


for (int i = 1; i <= 14; i++){
cout << "Numero de movimiento"; 
cin >> numeroMovimiendo; 
cout << "Día " << dia;
cout <<  "Tipo ('E' - Extracción / 'D' - Depósito)"; 
cin >> tipoDeMovimiento; 
cout << "Importe: $"; 
cin >> importe; 

switch (tipoDeMovimiento)
{
case 'e':
case 'E':
    acuExtracciones += importe; 
    contMovimientosExtraccion++; 
    break;
case 'd': 
case 'D':
    acuDepositos += importe; 
    contMovimientosDeposito++;

    if (importe > importeMaximo){
        importeMaximo = importe; 
        diaMayorDeposito = dia; 
        movimientoMayorImporte = numeroMovimiendo; 
    }
    
    break;

default:
    cout << "Ingrese un tipo de movimiento valido"; 
    break;
}

if (dia == 10)
{
    cantMovimientosDiaDiez++; 
}


}

saldoFinal = acuDepositos - acuExtracciones;
porcentajeExtraccion = (contMovimientosExtraccion * 100)/ 14;
procentajeDeposito = (contMovimientosDeposito * 100)/ 14;



return 0;
}