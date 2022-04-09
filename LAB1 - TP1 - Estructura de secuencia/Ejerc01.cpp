/*
TP1 - Ejercicio 01
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/

#include <iostream>
using namespace std;

int main(){
    int hs_trabajadas, valor_hs, sueldo;
    cout << "Ingresar cantidad de horas trabajadas: ";
    cin >> hs_trabajadas;
    cout << "Ingresar valor por hora: ";
    cin >> valor_hs;
    sueldo = hs_trabajadas * valor_hs;
    cout << endl;
    cout << "Sueldo correspondiente: $";
    cout << sueldo;

    return 0;

}
