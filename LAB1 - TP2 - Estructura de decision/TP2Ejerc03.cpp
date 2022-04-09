/*
TP2 - Ejercicio 03
Hacer un programa para ingresar por teclado un número y luego informar por pantalla
con un cartel aclaratorio si el mismo es par o impar.
*/

#include <iostream>
using namespace std;

int main(){
    int numero1;
    cout << "Ingresar numero: ";
    cin >> numero1;


   if (numero1%2==0){
    cout << "El numero es par";
  }

    else{
      cout << "El numero es impar";
    }

  return 0;

}

