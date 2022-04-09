/*
TP3 - CICLOS FOR - Ejercicio 12
Dada una lista de 7 números informar cual es el primer y segundo número impar
ingresado.
Ejemplo 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.
*/

#include <iostream>
using namespace std;

int main(){
    int i,n,cont,num1,num2;
    num1=0;
    num2=0;
    cont=0;


    for (i = 1; i <=7; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n;
    if (cont==0){
            if(n%2!=0){
                    num1=n;
                cont+=1;
            }
    }
        else if (cont==1){
            if(n%2!=0){
                    num2=n;
                cont+=1;
            }
    }}



    cout << "Primer num:" <<num1 <<" | "<<"Segundo num: "<<num2<< endl;

    return 0;

}

