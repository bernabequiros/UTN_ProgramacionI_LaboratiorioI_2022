/*
TP4 - CICLOS WHILE - Ejercicio 07
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.

*/

#include <iostream>
using namespace std;

int main(){
    int maximo,minimo,valor;
    maximo=0;
    valor=1;

    while(valor!=0){
    cout << "Ingrese un numero: ";
    cin >> valor;
    if (valor>maximo){
        maximo=valor;
        }
    }

    cout<<"Valor maximo: "<<maximo;
    return 0;
}
