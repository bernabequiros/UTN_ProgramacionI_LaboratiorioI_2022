/*
TP4 - CICLOS WHILE - Ejercicio 05
Hacer un programa para que el usuario ingrese dos n�meros y luego el programa
muestre por pantalla los n�meros entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.
*/

#include <iostream>
using namespace std;

int main(){
    int n1, n2, menor, mayor, i;

    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if(n1>n2){
        menor=n2;
        mayor=n1;
        }

    else{
        menor=n1;
        mayor=n2;
    }
    while(menor<=mayor){
        cout << menor << endl;
        menor++;
        }

    return 0;
}
