/*
TP3 - CICLOS FOR - Ejercicio 06
Hacer un programa para ingresar un N valor que indica la cantidad de números que
componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos
son positivos.
Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará
Cantidad de Positivos: 4
Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará
Cantidad de Positivos: 0

*/


#include <iostream>
using namespace std;

int main(){
    int cont,n,i,n1;
    cout << "Ingrese un numero: ";
    cin >> n;
    cont=0;


    for (i = 1; i <= n; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n1;

    if (n1>0){
        cont++;
        }
    }

    cout << "Cantidad nros positivos ingresados: " <<cont << endl;
    return 0;

}
