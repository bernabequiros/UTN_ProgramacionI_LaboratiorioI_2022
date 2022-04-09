/*
TP4 - CICLOS WHILE - Ejercicio 09
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listar� M�ximo -5 M�nimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el m�ximo
�seguramente� es un positivo y el m�nimo �seguramente� es un negativo, queda totalmente descartada.
*/

#include <iostream>
using namespace std;

int main(){
    int n,maximo,minimo,valor;

    cout << "Ingrese un numero: ";
    cin >> n;
    maximo=n;
    minimo=n;
    valor=1;

    while(valor!=0){
        cout << "Ingrese un numero: ";
        cin >> valor;
    if (valor>maximo&&valor!=0){
        maximo=valor;
        }
    if (valor<minimo&&valor!=0){
        minimo=valor;
        }

    }

    cout << "Maximo: " <<maximo <<" "<<"Minimo: "<<minimo<< endl;
    return 0;

}
