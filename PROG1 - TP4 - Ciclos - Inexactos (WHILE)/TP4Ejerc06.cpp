/*
TP4 - CICLOS WHILE - Ejercicio 06
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.

*/

#include <iostream>
using namespace std;
int main(){
    int valor,cont_pos,cont_neg;
    cont_pos=0;
    cont_neg=0;
    valor=1;

    while(valor!=0){
    cout << "Ingrese un numero: ";
    cin >> valor;
    if (valor>0){
        cont_pos++;
        }
    else if(valor<0) {
        cont_neg++;
        }
    else{
        cout<<"Cant. positivos: "<<cont_pos<<" | "<<"Cant. negativos: "<<cont_neg;
        }
    }

    return 0;
}
