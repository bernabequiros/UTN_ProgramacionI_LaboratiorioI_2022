/*
TP3 - CICLOS FOR - Ejercicio 14
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están
ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos
como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
*/

#include <iostream>
using namespace std;

int main(){
    int i,n,n1,cont,mayor;
    cont=0;

    cout << "Ingrese un numero a listar: ";
    cin >> mayor;

    for (i = 1; i <=7; i++){
    cout << "Ingrese un numero a listar: ";
    cin >> n;
    if (n<mayor){
        cont++;
    }
    else{
        n=mayor;
    } }

    if (cont==0){
        cout<<"Conjunto ordenado"<< endl;
    }

    else  {
        cout<<"Conjunto desordenado"<<endl;
    }

    return 0;

}







