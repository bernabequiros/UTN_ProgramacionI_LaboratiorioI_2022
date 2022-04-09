/*
TP1 - Ejercicio 03
Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.
*/

#include <iostream>
using namespace std;

int main(){
    int cant_autos,sueldo_fijo,premio,sueldo_total;
    sueldo_fijo = 15000;
    premio = 2000;
    cout << "Ingresar cantidad de autos vendidos: ";
    cin >> cant_autos;
    sueldo_total = sueldo_fijo +(cant_autos*premio);
    cout << "Sueldo total: $";
    cout << sueldo_total;
    cout << endl;
    return 0;

}
