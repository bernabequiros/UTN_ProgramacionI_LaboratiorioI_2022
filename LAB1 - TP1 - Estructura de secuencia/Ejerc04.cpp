/*
TP1 - Ejercicio 04
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la cantidad
de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes,
el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.

*/

#include <iostream>
using namespace std;

int main(){
    int asientos_disponibles, pasajes_vendidos,porc_ocupacion,porc_no_ocupacion;
    cout << "Ingresar cantidad de asientos disponibles: ";
    cin >> asientos_disponibles;
    cout << "Ingresar cantidad de pasajes vendidos: ";
    cin >> pasajes_vendidos;

    porc_ocupacion=(pasajes_vendidos*100)/asientos_disponibles;
    cout << endl;
    cout << "Porcentaje de ocupacion: %";
    cout << porc_ocupacion;

    porc_no_ocupacion=(100-porc_ocupacion);
    cout << endl;
    cout << "Porcentaje de no ocupacion: %";
    cout << porc_no_ocupacion;
    cout << endl;

    return 0;

}
