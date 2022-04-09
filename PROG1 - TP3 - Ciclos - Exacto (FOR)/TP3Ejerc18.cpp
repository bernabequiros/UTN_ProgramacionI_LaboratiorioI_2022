/*
TP3 - CICLOS FOR - Ejercicio 18
Hacer un programa para ingresar un número y luego informar la cantidad de divisores
de ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listarán: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listará: 2 divisores.
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

