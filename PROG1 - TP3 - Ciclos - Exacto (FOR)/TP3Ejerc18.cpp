/*
TP3 - CICLOS FOR - Ejercicio 18
Hacer un programa para ingresar un n�mero y luego informar la cantidad de divisores
de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listar�n: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listar�: 2 divisores.
*/

#include <iostream>
using namespace std;

int main(){
    int i,n,cant,valor;
    cant=0;
    cout << "Ingrese un numero: ";
    cin >> valor;

    for (i = 1; i <=valor; i++){
    if (valor%i==0){
        cout<<i<<" es divisor par de "<<valor<<endl;
        cant++;

        }
    }
    cout<<"Cant. divisores: "<<cant<<endl;
    return 0;

}

