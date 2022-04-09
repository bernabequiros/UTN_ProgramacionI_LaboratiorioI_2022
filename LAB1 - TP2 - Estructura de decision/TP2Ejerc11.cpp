    /*
    TP2 - Ejercicio 11
    Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.
    */

    #include <iostream>
    using namespace std;

    int main(){
        int numero1,numero2,numero3,numero4,numero5,contador=0;
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


       if (numero1>0){
            contador=contador+1;
            }
            if (numero2>0){
            contador=contador+1;
            }
            if (numero3>0){
            contador=contador+1;
            }
            if (numero4>0){
            contador=contador+1;
            }
            if (numero5>0){
            contador=contador+1;
            }
                cout<< contador;


        return 0;
    }

