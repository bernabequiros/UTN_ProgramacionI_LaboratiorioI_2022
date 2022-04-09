    /*
    TP2 - Ejercicio 10
    Hacer un programa para ingresar cinco números y listar el máximo de ellos.
    */

    #include <iostream>
    using namespace std;

    int main(){
        int numero1,numero2,numero3,numero4,numero5,maximo;
        cout << "Ingresar numero 1: ";
        cin >> numero1;
        cout << "Ingresar numero 2: ";
        cin >> numero2;
        cout << "Ingresar numero 3: ";
        cin >> numero3;
        cout << "Ingresar numero 4: ";
        cin >> numero4;
        cout << "Ingresar numero 5: ";
        cin >> numero5;


       if (numero1>numero2){
            maximo=numero1;
            }
            else {
                maximo=numero2;
            }
            if (numero3>maximo){
            maximo=numero3;
            }
            if (numero4>maximo){
            maximo=numero4;
            }
            if (numero5>maximo){
            maximo=numero5;
            }

          cout << "Valor maximo: "<<maximo;


        return 0;
    }
