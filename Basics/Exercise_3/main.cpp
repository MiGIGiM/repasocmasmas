/*
Determinar si un numero es par o no.
*/
#include <iostream>
#include <string>
using namespace std;

int main(void){
    
    int n = 0;
    string pair = "";

    cout << "Ingrese un numero: "; cin >> n;

    pair = n%2 == 0 ? "Es par" : "Es Impar";

    /*
    if(n % 2 == 0)
        cout << "Es par" << endl;
    else
        cout << "Es impar" << endl;
    */

    cout << pair << endl;

    return 0;
}