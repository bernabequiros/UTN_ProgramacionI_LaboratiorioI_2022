/*
TP2 - Ejercicio 06
Hacer un programa para ingresar por teclado tres n�meros y luego determinar e informar con una
leyenda aclaratoria si los tres son iguales entre s�, caso contrario no emitir nada. Ayuda:
Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

#include <iostream>
using namespace std;

int main(){
    int numero1,numero2,numero3;
    cout << "Ingresar un numero: ";
    cin >> numero1;
    cout << "Ingresar otro numero: ";
    cin >> numero2;
    cout << "Ingresar otro numero: ";
    cin >> numero3;

   if (numero1 == numero2 && numero2==numero3){

        cout << "Los numeros son iguales.";
  }

  return 0;
}
