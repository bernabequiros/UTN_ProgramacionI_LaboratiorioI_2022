    /*
    TP2 - Ejercicio 12
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a
mayor. Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.

    */

    #include <iostream>
    using namespace std;

    int main(){
        int num1,num2,num3;
        cout << "Ingresar numero 1: ";
        cin >> num1;
        cout << "Ingresar numero 2: ";
        cin >> num2;
        cout << "Ingresar numero 3: ";
        cin >> num3;


    if (num1<num2 && num2<num3){
    cout<<"Ordenado de menor a mayor: "<<" "<<num1<<" "<<num2<<" "<<num3;
    }
    else if (num2<num1 && num1<num3){
    cout<<"Ordenado de menor a mayor: "<<" "<<num2<<" "<<num1<<" "<<num3;
    }

     else if (num2<num3 && num3<num1){
    cout<<"Ordenado de menor a mayor: "<<" "<<num2<<" "<<num3<<" "<<num1;
    }

     else if (num3<num1 && num1<num2){
    cout<<"Ordenado de menor a mayor: "<<" "<<num3<<" "<<num1<<" "<<num2;
    }

     else if (num3<num2 && num2<num1){
    cout<<"Ordenado de menor a mayor: "<<" "<<num3<<" "<<num1<<" "<<num2;
    }

        return 0;
    }
