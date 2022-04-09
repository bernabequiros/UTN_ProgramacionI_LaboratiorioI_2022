/* Dados dos numeros que se ingresan por teclado,
calcular la suma de ellos y mostrarla por pantalla.
*/


#include <iostream>
using namespace std;

int main(){
    /* int num1,num2,suma; */
    int num1;
    int num2;
    int suma;
    cout << "Ingresar primer numero: ";
    cin >> num1;
    cout << "Ingresar segundo numero: ";
    cin >> num2;
    suma = num1 + num2;
    cout << endl;
    cout << "Resultado de la suma: ";
    cout << suma;

    return 0;

}
