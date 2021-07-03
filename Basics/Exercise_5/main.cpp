/*
Mostrar dia de la semana dado un numero entero.
*/
#include <iostream>
using namespace std;

int main(void){

    int n = 0;

    cout << "Ingrese un numero: "; cin >> n;

    switch (n)
    {
    case 1:
        cout << n << " corresponde a Lunes." << endl;
        break;
    case 2:
        cout << n << " corresponde a Martes." << endl;
        break;
    case 3:
        cout << n << " corresponde a Miercoles." << endl;
        break;
    case 4:
        cout << n << " corresponde a Jueves" << endl;
        break;
    case 5:
        cout << n << " corresponde a Viernes." << endl;
        break;            
    case 6:
        cout << n << " corresponde a Sabado." << endl;
        break;    
    case 7:
        cout << n << " corresponde a Domingo." << endl;
        break;    
    default:
        cout <<  n << " no corresponde a ningun dia de la semana." << endl;
        break;
    }

    return 0;
}