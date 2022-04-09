/*
TP1 - Ejercicio 07
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.
*/

#include <iostream>
using namespace std;

int main(){
    int importe_venta;
    float porc_descuento,total,descuento;

    cout << "Ingresar importe de venta: $ ";
    cin >> importe_venta;
    cout << "Ingresar porcentaje de descuento: % ";
    cin >> porc_descuento;

    descuento= importe_venta*(porc_descuento/100);
    total=importe_venta-descuento;

    cout << "Total a pagar: $ " << total;

    cout << endl;


    return 0;


}
