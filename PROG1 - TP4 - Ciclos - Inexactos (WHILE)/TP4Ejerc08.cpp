/*
TP4 - CICLOS WHILE - Ejercicio 08
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates�
considerar la primera aparici�n.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7

*/

#include <iostream>
using namespace std;

int main(){
    int i,maximo,minimo,valor,indice;
    maximo=0;
    indice=0;
    i=0;
    valor=1;

    while(valor!=0){
    cout << "Ingrese un numero: ";
    cin >> valor;
    if (valor>maximo&&valor!=maximo){
        maximo=valor;
        indice=i;
        }
        i++;
    }

    cout<<"Valor maximo: "<<maximo<<" | "<<"Indice: "<<indice;
    return 0;
}
