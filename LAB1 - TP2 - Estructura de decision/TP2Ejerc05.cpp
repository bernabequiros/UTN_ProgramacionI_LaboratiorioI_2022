/*
TP2 - Ejercicio 05
Un negocio de perfumería efectúa descuentos según el importe de la venta. - Si el importe es menor a $100
aplicar un descuento del 5% - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% -
Si el importe es mayor a $500 aplicar un descuento del 15% Hacer un programa donde se ingresa el
importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.
*/

#include <iostream>
using namespace std;

int main(){
    int importe,total_con_descuento;
    cout << "Ingresar importe: ";
    cin >> importe;

   if (importe<100){
        total_con_descuento=importe - (importe*0.05);
        cout << "Total a pagar con descuento del 5% aplicado: $" << total_con_descuento;
  }
  else{
    if (importe>=100&&importe<=500){
        total_con_descuento=importe - (importe*0.10);
        cout << "Total a pagar con descuento del 10% aplicado: $" << total_con_descuento;
    }
    else{
        total_con_descuento=importe - (importe*0.15);
        cout << "Total a pagar con descuento del 15% aplicado: $" << total_con_descuento;
    }
  }
  return 0;
}
