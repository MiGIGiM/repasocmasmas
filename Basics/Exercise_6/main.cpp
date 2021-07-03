/*
Escriba un programa que permita generar los primeros N multiplos de 5 y calcule la sumatoria
y el promedio (usando while)
*/

#include <iostream>
using namespace std;

int main()
{

    int z, n, m, a, p;

    int x;

    a = 0;

    z = 0;

    x = 1;

    while (x == 1)
    {

        cout << "Cual Multiplo de 5 desea generar: ";

        cin >> n;

        m = 5 * n;

        a = a + m;

        z++;

        p = a / z;

        cout << "Desea Otro Múltiplo de 5? 1=si 2=no";

        cin >> x;
    }

    cout << "Los N múltiplos de 5 " << endl;

    cout << "La sumatoria de los Múltiplos de 5 es: " << a << endl;

    cout << "El promedio de los Múltiplos de 5 es: " << p << endl;

    return 0;
}