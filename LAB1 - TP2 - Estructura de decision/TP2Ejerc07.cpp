/*
TP2 - Ejercicio 07
Hacer un programa para ingresar por teclado tres n�meros e informar con una leyenda aclaratoria si los tres
son todos distintos entre s�, caso contrario no emitir nada. Ayuda: Si A es distinto de B y B es distinto de C,
eso no signica qu1e A y C sean distintos. Ejemplo: A=8, B=6 y C=8.

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

   if (numero1 != numero2 && numero1 != numero3 && numero2 != numero3){

        cout << "Los numeros son distintos.";
  }

  return 0;
}
