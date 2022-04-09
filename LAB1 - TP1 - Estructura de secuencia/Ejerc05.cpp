/*
TP1 - Ejercicio 05
Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y
luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

#include <iostream>
using namespace std;

int main(){
    float alfajor_A,alfajor_B,alfajor_C,total_alfajores,porc_A,porc_B,porc_C;

    cout << "Ingresar cantidad de alfajores A: ";
    cin >> alfajor_A;
    cout << alfajor_A;

    cout << "Ingresar cantidad de alfajores B: ";
    cin >> alfajor_B;

    cout << "Ingresar cantidad de alfajores C: ";
    cin >> alfajor_C;

    total_alfajores=alfajor_A+alfajor_B+alfajor_C;

    porc_A =(alfajor_A/total_alfajores)*100;
    porc_B=(alfajor_B/total_alfajores)*100;
    porc_C =(alfajor_C/total_alfajores)*100;

    cout << "Ventas de alfajor A: % " << porc_A;
    cout << endl;
    cout << "Ventas de alfajor B: % " << porc_B;
    cout << endl;
    cout << "Ventas de alfajor C: % " << porc_C;
    cout << endl;


    return 0;

}
