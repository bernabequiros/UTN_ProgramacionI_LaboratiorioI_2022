/*
TP4 - CICLOS WHILE - Ejercicio 04
Hacer un programa para que el usuario ingrese un número positivo y que luego se
muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
*/

#include <iostream>
using namespace std;

int main(){
    int i,n;
    i=1;
    cout << "Ingrese un numero: ";
    cin >> n;


while(i<=n){
    cout << i << endl;
    i++;
    }

    return 0;

    }
