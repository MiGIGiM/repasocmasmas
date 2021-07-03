/*
Escriba una función que reciba una cadena que contiene letras del alfabeto, cuente la
cantidad de cada una de las vocales que contiene y cuantas celdas tienen un carácter que
no es vocal. Devuelva a main todos estos resultados por medio de argumentos por
referencia.
*/

#include <iostream>
#include <string>
using namespace std;

void countVowels(string word, int *vowels, int *notVowels);

int main(){
    string charChain;
    int vowels = 0, notVowel = 0;

    cout << "Ingrese una cadena: ";
    getline(cin, charChain);

    countVowels(charChain, &vowels, &notVowel);
    
    cout << "Vocales: " << vowels << endl;
    cout << "No vocales: " << notVowel << endl;

    return 0;
}

void countVowels(string word, int *vowels, int *notVowels){
    for (int i = 0; i < word.size(); i++){
        switch (word[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
                (*vowels)++;
                break;
        
        default:
            (*notVowels)++;
            break;
        }
    }
}

