/*
Dado una cadena de caracteres, que deben ser introducidos desde teclado, codifique su
contenido utilizando la clave del murciélago. Recuerde que las letras de esta clave tienen
la siguiente equivalencia: m = 0, u = 1, r = 2, c = 3, i = 4, e = 5, l = 6, a = 7, 
g = 8, o = 9
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string word;

    cout << "Ingrese una palabra: ";
    cin >> word;

    for (int i = 0; i <= word.size(); i++)
    {
        switch (word[i])
        {
        case 'm':
            word[i] = '0';
            break;
        case 'u':
            word[i] = '1';
            break;
        case 'r':
            word[i] = '2';
            break;
        case 'c':
            word[i] = '3';
            break;
        case 'i':
            word[i] = '4';
            break;
        case 'e':
            word[i] = '5';
            break;
        case 'l':
            word[i] = '6';
            break;
        case 'a':
            word[i] = '7';
            break;
        case 'g':
            word[i] = '8';
            break;
        case 'o':
            word[i] = '9';
            break;
        default:
            word[i] = word[i];
            break;
        }
    }

    cout << "Palabra convertida: " << word << endl;
    return 0;
}