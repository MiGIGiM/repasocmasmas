/*
Escriba una función para implementar el juego de hablar con la “p”. Dada una frase que se
introduce desde teclado en una variable de cadena desde main, y se envía como
argumento a una función traductora que construya la frase equivalente, hablada con la “p”,
en una variable de cadena distinta y la retorne para ser mostrada en la función main. Por
ejemplo, si la frase recibida es Hola que tal entonces la frase retornada será Hopolapa
quepe tapal.
*/
#include <iostream>
using namespace std;

string translateToP(string phrase, string newString);

int main(void){
    string phrase = "", auxString = "";

    cout << "Ingrese una frase: ";
    getline(cin, phrase);

    cout << "Frase ingresada: " << phrase << endl;
    cout << "Frase en idioma P: " << translateToP(phrase, "") << endl;
    
}

string translateToP(string phrase, string newString){
    for (int i = 0; i < phrase.size(); i++)
    {
        switch (phrase[i])
        {
        case 'a':
            newString += "apa";
            break;
        case 'e':
            newString += "epe";
            break;
        case 'i':
            newString += "ipi";
            break;
        case 'o':
            newString += "opo";
            break;
        case 'u':
            newString += "upu";
            break;            
        default:
            newString += phrase[i];
            break;
        }
    }

    return newString;
}