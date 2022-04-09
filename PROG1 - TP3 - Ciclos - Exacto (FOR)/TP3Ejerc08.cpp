/*
TP3 - CICLOS FOR - Ejercicio 08
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.

*/


#include <iostream>
using namespace std;

int main(){
    int i,n,maximo;
    maximo=0;

    for (i = 1; i <= 10; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n;

    if (n>maximo){
        maximo=n;
        }

    }

    cout << "Maximo: " <<maximo << endl;

    return 0;

}
