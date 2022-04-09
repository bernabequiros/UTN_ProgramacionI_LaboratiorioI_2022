/*
TP1 - Ejercicio 02
Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/

#include <iostream>
using namespace std;

int main(){
    int valorA,valorB,aux;
    cout << "Ingresar primer numero: ";
    cin >> valorA;
    cout << "Ingresar segundo numero: ";
    cin >> valorB;
    cout << endl;
    cout << "Numeros ingresados: ";
    cout << endl;
    cout << "valorA: "<<valorA<<" y "<<"valorB: "<<valorB;
    cout << endl;
    aux=valorA;
    valorA=valorB;
    valorB=aux;

    cout << " ****proceso****";
    cout << endl;
    cout << "valorA: "<<valorA<<" y "<<"valorB: "<<valorB;


    return 0;

}
