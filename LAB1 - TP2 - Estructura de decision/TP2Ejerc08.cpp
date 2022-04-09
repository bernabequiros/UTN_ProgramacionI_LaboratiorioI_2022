/*
TP2 - Ejercicio 08
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado
la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:

- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;

int main(){
    int lado1,lado2,lado3;
    cout << "Ingresar lado 1: ";
    cin >> lado1;
    cout << "Ingresar lado 2: ";
    cin >> lado2;
    cout << "Ingresar lado 3: ";
    cin >> lado3;

   if (lado1==lado2 && lado2==lado3){

        cout << "Triangulo equilatero.";
  }

  else {
      if(lado1==lado2 || lado2==lado3|| lado1==lado3 )
      {
        cout << "Triangulo isosceles.";
      } else{
        cout << "Triangulo escaleno.";
    }

  }

  return 0;
}
