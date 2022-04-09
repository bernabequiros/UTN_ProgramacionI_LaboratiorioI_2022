/*
TP2 - Ejercicio 04
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la
diferencia absoluta entre ambos. Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.
*/

#include <iostream>
using namespace std;

int main(){
    int numero1,numero2,resultado;
    cout << "Ingresar numero: ";
    cin >> numero1;
    cout << "Ingresar otro numero: ";
    cin >> numero2;
    resultado=numero1-numero2;


   if (resultado<0){
        resultado=resultado*-1;
    cout << "Diferencia absoluta: " <<resultado;
  }

    else{
      cout << "Diferencia absoluta: " <<resultado;
    }

  return 0;

}

