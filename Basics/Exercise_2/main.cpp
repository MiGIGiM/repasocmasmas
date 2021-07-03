/*
El costo de un curso ofrecido en la Dirección de Investigacion y postgrado puede ser cancelado
de la siguente manera: una inicial del 20% del costo del curso y el resto debe ser cancelado
en cuotas mensuales durante 2 años. Escriba el conjunto de instrucciones que permita calcular
e imprimir la inicial y el monto de las cuotas mensuales, dado el costo del curso
*/
#include <iostream>
using namespace std;

int main(void){

    float cuota = 0, inicial = 0, costo = 0;

    cout << "Ingrese costo del curso: $"; cin >> costo;

    //Calculando cuota inicial
    inicial = costo*0.2;

    //Calculando cuota
    cuota = (costo-inicial)/24;

    cout << "Cuota inicial es de: $" << inicial << endl;
    cout << "Cuota mensual es de: $" << cuota << endl; 

    return 0;
}