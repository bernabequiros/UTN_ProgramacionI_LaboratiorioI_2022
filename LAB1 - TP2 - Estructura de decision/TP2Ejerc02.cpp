/*
TP2 - Ejercicio 02
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla
con un cartel aclaratorio si el primer número es múltiplo del segundo.
*/

#include <iostream>
using namespace std;

int main(){
    int numero1,numero2;
    cout << "Ingresar numero: ";
    cin >> numero1;
    cout << "Ingresar otro numero: ";
    cin >> numero2;

   if (numero1%numero2==0){
    cout << "El numero es multiplo";
  }

    else{
      cout << "El numero no es multiplo";
    }

  return 0;

}
