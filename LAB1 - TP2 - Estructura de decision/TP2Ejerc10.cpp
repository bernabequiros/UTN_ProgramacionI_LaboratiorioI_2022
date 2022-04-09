    /*
    TP2 - Ejercicio 10
    Hacer un programa para ingresar cinco números y listar el máximo de ellos.
    */

    #include <iostream>
    using namespace std;

    int main(){
        int numero1,numero2,numero3,numero4,numero5;
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


       if (numero1>=numero2&&numero1>=numero3&&numero1>=numero4&&numero1>=numero5){
            cout << "Valor maximo: "<<numero1;
            }

      else {
          if(numero2>=numero1&&numero2>=numero3&&numero2>=numero4&&numero2>=numero5)
          {cout << "Valor maximo: "<<numero2;


          }

          if(numero3>=numero1&&numero3>=numero2&&numero3>=numero4&&numero3>=numero5)
          {cout << "Valor maximo: "<<numero3;
          }

          if(numero4>=numero1&&numero4>=numero2&&numero4>=numero3&&numero4>=numero5)
            {cout << "Valor maximo: "<<numero4;
            }

          else{cout << "Valor maximo: "<<numero5;}
            }

        return 0;
    }
