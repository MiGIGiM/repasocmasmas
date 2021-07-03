/*
Escriba una función de tres argumentos que reciba, desde main, un número entero en base
diez, lo convierte a su binario equivalente y lo almacene en un arreglo que será pasado en
el segundo argumento. En el tercer argumento coloque la cantidad de dígitos claculados. 
Luego, la función main invocará a una función que imprimirá el número binario, mandándole el
arreglo y la cantidad de dígitos calculados
*/
#include <iostream>
using namespace std;

void convertToBinary(int n, int *binaryNum, int *digit);
void printBinary(int *binaryNum, int *digits);

int main(){

    int n = 28, digit = 0;
    int* binaryNum = new int[20];

    convertToBinary(n, binaryNum, &digit);

    printBinary(binaryNum, &digit);


    return 0;
}

void convertToBinary(int n, int *binaryNum, int *digit){
    int aux = 0;

    do{
        binaryNum[aux] += n % 2;
        n /= 2;

        (*digit)++;
        aux++;
    }while (n != 0);
}

void printBinary(int *binaryNum, int *digits){
    for (int i = (*digits) - 1 ; i >= 0; i--)
    {
        cout << binaryNum[i];
    }
    
}

