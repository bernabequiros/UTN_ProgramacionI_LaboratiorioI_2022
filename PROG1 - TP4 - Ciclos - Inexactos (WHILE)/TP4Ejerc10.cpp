/*
TP4 - CICLOS WHILE - Ejercicio 10
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. Máximo Negativo -3. Mínimo Positivo 2.
*/

#include <iostream>
using namespace std;

int main(){
    int i,max_neg,min_pos,b_pos,b_neg,valor;

    b_pos=0;
    b_neg=0;
    valor=1;

    while(valor!=0){
    cout << "Ingrese un numero a listar: ";
    cin >> valor;

    if (valor>0){
            if(b_pos==0){
                min_pos=valor;
                b_pos=1;
                }
            else {
            if (valor<min_pos&&valor!=0){
                min_pos=valor;
                }
            }

        }
        else{
            if (b_neg==0){
                max_neg=valor;
                b_neg=1;

            }
            else {
                if (valor>max_neg&&valor!=0){
                    max_neg=valor;
                    }
                }
            }
         }

    cout << "Maximo negativo:" <<max_neg <<" | "<<"Minimo positivo: "<<min_pos<< endl;

    return 0;
}
