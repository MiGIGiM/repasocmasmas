/*
Convierta un número binario, a su número decimal equivalente. La función main invocará
una función que lea el número binario desde teclado y lo almacene en una cadena, que
será retornada. Luego la función main invocará a la función que realiza la conversión a
base diez. Esta función recibirá la cadena y retornará el número en base diez para ser
impreso en main.
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string getBinary();
double convertBinary(string binaryChar);

int main(void)
{
    cout << convertBinary(getBinary()) << endl;

    return 0;
}

string getBinary(){
    string binaryChar = "";

    cout << "Introduce numero: ";
    cin >> binaryChar;

    return binaryChar;
}

double convertBinary(string binaryChar){
    int exp = 0, digito = 0;
    double decimal = 0, binario = 0;

    binario = stod(binaryChar);

    while (((int)(binario / 10)) != 0)
    {
        digito = (int)binario % 10;
        decimal += + digito * pow(2.0, exp);
        exp++;
        binario = (int)(binario / 10);
    }
    decimal += binario * pow(2.0, exp);

    return decimal;
}
