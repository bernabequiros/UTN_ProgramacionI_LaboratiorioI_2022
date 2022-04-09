/*
TP2 - Ejercicio 09
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main(){
    int numero1,numero2,numero3;
    cout << "Ingresar numero 1: ";
    cin >> numero1;
    cout << "Ingresar numero 2: ";
    cin >> numero2;
    cout << "Ingresar numero 3: ";
    cin >> numero3;

   if (numero1>numero2&&numero1>numero3){

        cout << "Valor maximo: "<<numero1;
  }

  else {
      if(numero2>numero1 && numero2>numero3 )
      {
        cout << "Valor maximo: "<<numero2;
      } else{
        cout << "Valor maximo: "<<numero3;
    }

  }

  return 0;
}
