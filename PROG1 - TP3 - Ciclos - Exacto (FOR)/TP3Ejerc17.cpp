/*
TP3 - CICLOS FOR - Ejercicio 17
Hacer un programa para ingresar un n�mero y luego informar todos los divisores pares
de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 2 y 6
Ejemplo 2. Si se ingresa 8 se listar�n: 2 y 4.
Ejemplo 3. Si se ingresa 11 no se listar� nada.
*/

#include <iostream>
using namespace std;

int main(){
    int i,n,cont,valor;
    cont=0;
    cout << "Ingrese un numero: ";
    cin >> valor;



    for (i = 1; i <=valor; i++){
    if (i%2==0&&valor%i==0){

        cout<<i<<" es divisor par de "<<valor<<endl;

    }


}
    return 0;

}







