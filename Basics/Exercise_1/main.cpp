/*
Calcular longitud y área de la circunferencia y el volumen de la esfera
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void){

    int r = 0, longitude = 0, area = 0, volume = 0;

    cout << "Ingrese radio de la cirfunferencia: "; 
    cin >> r;

    //Calculando longitud
    cout << "Longitud de la circunferencia: " << 2*r*M_PI << endl;

    //Calculando Area
    cout << "Area de la circunferencia: " << M_PI*pow(r,2) << endl;

    //Calculando Volumen
    cout << "Volumen de la esfera: " << ((4.0)/3)*M_PI*pow(r,3) << endl;

    return 0;
}