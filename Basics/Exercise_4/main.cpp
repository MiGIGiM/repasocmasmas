/*
Dado el nombre, la edad, el sexo y el estado civil de una persona escriba un programa que
imprima "Usted no se manda" solo si la persona menor de edad, u es hombre casado de cualquier
edad, si no es el caso sol imprimir el nombre.
*/

#include <iostream>
#include <string>
using namespace std;

struct people
{
    string name;
    int age;
    int sex;
    int civilState;
} person;

int main(void){

    cout << "Ingrese su nombre: "; cin >> person.name;
    cout << "Ingrese su edad: "; cin >> person.age;
    cout << "Ingrese su genero: \n(1 -> hombre, 2 -> mujer, 3 -> otro"; cin >> person.sex;
    cout << "Ingrese su estado civil: \n(1->solter@, 2->casad@, 3->otro)"; cin >> person.civilState;

    if(person.age < 18 || person.civilState == 2)
        cout << "Usted no se manda, " << person.name << endl;
    else
        cout << person.name << endl;

    return 0;    
}