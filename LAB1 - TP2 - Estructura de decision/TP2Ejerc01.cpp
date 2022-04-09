/*
TP2 - Ejercicio 01
Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel
aclaratorio indicando si el mismo es positivo, negativo o cero.

*/

#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Ingresar numero: ";
    cin >> numero;

     if (numero > 0){
    cout << "El numero es positivo";
  }
  else{
    if (numero < 0){
      cout << "El numero es negativo";
    }
    else{
      cout << "El numero es cero";
    }
  }
  return 0;

}
