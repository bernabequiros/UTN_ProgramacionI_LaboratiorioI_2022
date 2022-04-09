/*
TP3 - CICLOS FOR - Ejercicio 07
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son
positivos, cuántos son negativos, y cuántos iguales a cero.

*/


#include <iostream>
using namespace std;

int main(){
    int i,n,pos,neg,ceros;
    pos=0;
    neg=0;
    ceros=0;

    for (i = 1; i <= 10; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n;

    if (n==0){
        ceros++;
        }
    else if
        (n>0)
    {
        pos++;
    }
    else{
        neg++;
    }
    }

    cout << "Cantidad nros positivos: " <<pos << endl;
    cout << "Cantidad nros negativos: " <<neg << endl;
    cout << "Cantidad nros igual a cero: " <<ceros << endl;
    return 0;

}
