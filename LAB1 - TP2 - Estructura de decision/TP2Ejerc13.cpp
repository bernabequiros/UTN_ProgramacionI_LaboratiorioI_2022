    /*
    TP2 - Ejercicio 13
    Hacer un programa para leer tres números diferentes y determinar e informar el número del medio.
    Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
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



       if ((numero1>numero2&&numero1<numero3)||(numero1<numero2&&numero1>numero3)){
            cout << numero1;
            }
            else{
                    if ((numero2>numero1&&numero2<numero3)||(numero2<numero1&&numero2>numero3)){
            cout <<numero2;}
            else{

                cout<< numero3;
            }


        return 0;
    }}

