/*
TP3 - CICLOS FOR - Ejercicio 11
Hacer un programa para ingresar una lista 10 números e informar el máximo de los
negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.
*/

#include <iostream>
using namespace std;

int main(){
    int i,n,max_neg,min_pos,b_pos,b_neg;

    b_pos=0;
    b_neg=0;


    for (i = 1; i <=10; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n;

    if (n>0){
            if(b_pos==0){
                min_pos=n;
                b_pos=1;
                }
            else {
            if (n<min_pos){
                min_pos=n;
                }
            }

        }
        else{
            if (b_neg==0){
                max_neg=n;
                b_neg=1;

            }
            else {
                if (n>max_neg){
                    max_neg=n;
                    }
                }
            }
         }







    cout << "Maximo negativo:" <<max_neg <<" | "<<"Minimo positivo: "<<min_pos<< endl;

    return 0;

}

