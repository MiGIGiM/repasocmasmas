/*
Simule un tablero de ajedrez para realizar los movimientos de la pieza del caballo. En un
tablero de ajedrez (matriz de carácteres de 8x8), el usuario podrá elegir la casilla donde
colocará inicialmente al caballo, y elegir otra de las casillas del tablero como casilla
destino. A continuación el usuario podrá elegir los movimientos que realizará para hacer
que el caballo llegue a la casilla destino. Los movimientos del caballo estarán numerados
como se indica en la figura. Para cada nuevo movimiento, haga una impresión de la matriz
para que el jugador vea cómo va progresando en su avance. Al final reporte la cantidad y la
secuencia de movimientos que fue necesario realizar. Puede inicializar las casillas del
tablero con una letra mayúscula, por ejemplo ‘H’, y la casilla en la que está ubicado el
caballo con un asterisco. Cada vez que el caballo pasa de una casilla a otra recuerde
colocar una H en la casilla que se deja y un asterisco en la nueva casilla visitada
*/

//Por favor ignora el hecho q esta mas quemado q el cader xd
#include <iostream>
using namespace std;

int main(void){
    char board[8][8];
    int opt = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
           board[i][j]= '+';
        }
    }
    // i son filas; j son columnas
    board[4][3] = 'H';
    board[5][5] = '1';
    board[3][5] = '2';    
    board[4][2] = '3';
    board[2][2] = '4';

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }


    cout << "A donde le gustaria moverse: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        board[4][3] = '*';
        board[5][5] = 'H';
        break;
    case 2:
        board[4][3] = '*';
        board[3][5] = 'H';
        break;

    case 3:
        board[4][3] = '*';
        board[4][2] = 'H';
        break;
    case 4:
        board[4][3] = '*';
        board[2][2] = 'H';
        break;                    
    
    default:
        cout << "Movimiento no valido" << endl;
        break;
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
}