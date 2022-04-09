/*
TP1 - Ejercicio 11
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.

*/

#include <iostream>
using namespace std;

int main(){

    int minutos_ingresados,dias,horas,minutos;

    cout << "Ingresar cantidad de minutos: ";
    cin >> minutos_ingresados;

    dias=(minutos_ingresados/1440);
    horas=(minutos_ingresados%1440)/60;
    minutos=(minutos_ingresados%1440)%60;

    cout << endl;
    cout << "Dias: "<< dias;
    cout << endl;
    cout << "Horas: "<< horas;
    cout << endl;
    cout << "Minutos: "<< minutos;
    cout << endl;
    cout << endl;
    return 0;

}
