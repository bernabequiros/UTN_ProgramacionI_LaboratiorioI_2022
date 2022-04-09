    /*
    TP2 - Ejercicio 16
    Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas
    por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
    - “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
    - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
    - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
    - “Recursa la materia”, si no aprobó ningún examen parcial.

    */

    #include <iostream>
    using namespace std;

    int main(){
        int nota1,nota2,nota3,nota4;

        int cont_promocionar=0;
        int cont_aprobar=0;
        int cont_recuperar=0;
        cout << "Ingresar nota 1: ";
        cin >> nota1;
        cout << "Ingresar nota 2: ";
        cin >> nota2;
        cout << "Ingresar nota 3: ";
        cin >> nota3;
        cout << "Ingresar nota 4: ";
        cin >> nota4;


        if (nota1>=7){
            cont_promocionar+=1;
            }
        else if(nota1>=4&&nota1<7){
            cont_aprobar+=1;
            }
        else{
            cont_recuperar+=1;

            }


        if (nota2>=7){
            cont_promocionar+=1;
            }
        else if(nota2>=4&&nota2<7){
            cont_aprobar+=1;
            }
        else{
            cont_recuperar+=1;

            }

        if (nota3>=7){
            cont_promocionar+=1;
            }
        else if(nota3>=4&&nota3<7){
            cont_aprobar+=1;
            }
        else {
            cont_recuperar+=1;

            }

        if (nota4>=7){
            cont_promocionar+=1;
            }
        else if(nota4>=4&&nota4<7){
            cont_aprobar+=1;
            }
        else {
            cont_recuperar+=1;
            }



        if (cont_promocionar==4){
            cout << "Promociona";
            }
        else if (cont_aprobar==3||cont_aprobar==4) {

            cout << "Rinde examen final";
            }
        else if (cont_aprobar==1||cont_aprobar==2) {

            cout << "Recupera Parciales";
            }
        else if (cont_aprobar==0) {

            cout << "Recursa la materia";
            }


        return 0;
    }

