/* 22 Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
siguientes costos:

- Costo de alquiler de $10000
- Costo por caramelo producido de $2.50
- Costo por mantenimiento cada 100 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
mes, informar:
- "El presupuesto es suficiente para cubrir los costos de $XXXX"
- "El presupuesto no es suficiente, necesita un crédito de $XXXX" */

#include <iostream>
using namespace std;

int main (){
const float COSTO_ALQUILER = 1000, COSTO_CARAMELO_PRODUCIDO = 2.50, COSTO_MANTENIMIENTO_100 = 5000;
int carameloProducido;
float presupuestoInicial, costoTotalMantenimiento, costoTotalProduccion, costoTotalFinal, credito;

cout << "Ingrese el presupuesto inicial: $";
cin >> presupuestoInicial;
cout << "Ingrese la cantidad de caramelos a producir el primer mes: ";
cin >> carameloProducido;

costoTotalProduccion = COSTO_CARAMELO_PRODUCIDO * carameloProducido;
costoTotalMantenimiento = (carameloProducido / 100) * COSTO_MANTENIMIENTO_100;
costoTotalFinal = COSTO_ALQUILER + costoTotalProduccion + costoTotalMantenimiento;

if (presupuestoInicial >= costoTotalFinal){
    cout << "El presupuesto es suficiente para cubrir los costos de: $" << costoTotalFinal;
}
else{
    credito = costoTotalFinal - presupuestoInicial;
    cout << "El presupuesto no es suficiente, necesita un credito de $" << credito;
}

return 0;
}