/*
TP3 - CICLOS FOR - Ejercicio 10
Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y
el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el m�ximo
�seguramente� es un positivo y el m�nimo �seguramente� es un negativo, queda
totalmente descartada

*/


#include <iostream>
using namespace std;

int main(){
    int i,n,n1,maximo,minimo,aux,aux_max,aux_min;
    cout << "Ingrese un numero a listar: ";
    cin >> n;
    minimo=n;
    maximo=n;

     for (i = 2; i <= 10; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n1;


    if (n1>maximo){
        maximo=n1;
        }
    if (n1<minimo){
            minimo=n1;
        }

    }

    cout << "Maximo: " <<maximo <<" | "<<"Minimo: "<<minimo<< endl;

    return 0;

}
