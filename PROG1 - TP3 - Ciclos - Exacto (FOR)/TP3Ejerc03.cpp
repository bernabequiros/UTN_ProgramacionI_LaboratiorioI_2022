/*
TP3 - CICLOS FOR - Ejercicio 03
Hacer un programa para mostrar por pantalla los n�meros del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ning�n ingreso de datos.
*/


#include <iostream>
using namespace std;

int main(){


    int i;

    for (i = 20; i >= 1; i-=1)
    {
        cout << i << endl;
    }

    return 0;

}
