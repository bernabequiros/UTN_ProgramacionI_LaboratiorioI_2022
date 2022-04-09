/*
TP3 - CICLOS FOR - Ejercicio 20
Se define a un n�mero como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son n�meros primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Favor de no confundir n�mero primo con n�mero par. Son dos definiciones diferentes.
Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el
mismo es un n�mero primo o es n�mero no primo.

*/

#include <iostream>
using namespace std;

int main(){
    int i,n,cont,valor;
    cont=0;
    cout << "Ingrese un numero: ";
    cin >> valor;

    for (i = 1; i <valor; i++){
    if (valor%i==0){
        cont+=i;
        }
    }

    if(cont==valor){
    cout<<valor<<" es numero perfecto"<<endl;
    }
    else{
       cout<<valor<<" NO es numero perfecto"<<endl;

    }

    return 0;

}

