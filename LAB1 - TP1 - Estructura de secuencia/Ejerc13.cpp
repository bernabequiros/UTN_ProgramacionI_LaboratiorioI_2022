/*
TP1 - Ejercicio 13
Hacer un programa para un cajero autom�tico para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrar� por pantalla que se deber�n entregar 2 billetes de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100.
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrar� por pantalla que se deber�n entregar 3 billetes de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrar� por pantalla que se deber�n entregar 1 billete de $ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos m�ltiplo de $ 100 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.


*/

#include <iostream>
using namespace std;

int main(){

    int importe;
    float billetes_1000,billetes_500,billetes_200,billetes_100;

    cout << "Ingresar importe a retirar: ";
    cin >> importe;

    billetes_1000=(importe/1000);
    importe=importe%1000;

    billetes_500=(importe/500);
    importe=importe%500;

    billetes_200=(importe/200);
    importe=importe%200;

    billetes_100=(importe/100);
    importe=importe%100;

    cout << "billetes de $1000 x " << billetes_1000;
    cout << endl;
    cout << "billetes de $500 x " << billetes_500;
    cout << endl;
    cout << "billetes de $200 x " << billetes_200;
    cout << endl;
    cout << "billetes de $100 x " << billetes_100;
    cout << endl;
    cout << endl;

    return 0;

}
