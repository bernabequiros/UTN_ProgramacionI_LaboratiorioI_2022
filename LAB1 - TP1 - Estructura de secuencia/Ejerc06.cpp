/*
TP1 - Ejercicio 06
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las
çuatros semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400
se listara como recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

#include <iostream>
using namespace std;

int main(){
    int semana_1,semana_2,semana_3,semana_4;
    float recaudacion_total,recaudacion_promedio,porc_semana_1,porc_semana_2,porc_semana_3,porc_semana_4;

    cout << "Ingresar recaudacion semana 1: ";
    cin >> semana_1;
    cout << "Ingresar recaudacion semana 2: ";
    cin >> semana_2;
    cout << "Ingresar recaudacion semana 3: ";
    cin >> semana_3;
    cout << "Ingresar recaudacion semana 4: ";
    cin >> semana_4;
    cout << endl;

    recaudacion_total=semana_1+semana_2+semana_3+semana_4;
    recaudacion_promedio = recaudacion_total/4;

    porc_semana_1= (semana_1/recaudacion_total)*100;
    porc_semana_2= (semana_2/recaudacion_total)*100;
    porc_semana_3= (semana_3/recaudacion_total)*100;
    porc_semana_4= (semana_4/recaudacion_total)*100;

    cout << "Recaudacion promedio: $ " << recaudacion_promedio;
    cout << endl;

    cout << "Recaudacion semana 1: % " << porc_semana_1;
    cout << endl;
    cout << "Recaudacion semana 2: % " << porc_semana_2;
    cout << endl;
    cout << "Recaudacion semana 3: % " << porc_semana_3;
    cout << endl;
    cout << "Recaudacion semana 4: % " << porc_semana_4;
    cout << endl;
    cout << endl;

    return 0;

}
