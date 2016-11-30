#include "2048cpp.h"
#include <iostream>

using namespace std;



void prueba(){
    cout << "hello world";
}

void imprimir_celda(int n);

/** inicializar_juego pone a 0ctodas las posiciones de la matriz y la puntuacion
    @param j es una estructura de tipo juego, definida en el fichero de cabecera.h
    @return esta una funcion no tiene valor de retorno
*/
void inicializar_juego(juego &ju){

    for (int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            ju.tablero[i][j] = 0;
        }
    }
    ju.puntuacion = 0;
}
/** imprimir_juego imprime el tablero y la puntuacion de manera amigable
    @param ju es un tipo juego

*/
void imprimir_juego(juego ju){

    cout << "+------+------+------+------+" << endl;
    for (int i=0;i<TAM;i++){
    cout << "|";
        for (int j=0;j<TAM;j++){
            imprimir_celda(ju.tablero[i][j]);
            cout << "|";
        }
        cout << endl;
        cout << "+------+------+------+------+" << endl;
    }
    cout << "Puntos: "<<ju.puntuacion;
}

/** imprimir_celda es una funcion que imprime el contenido de la celda segun sea el numero
    de cifras del numero pasado por parametro, completando con espacios hasta un total de
    6 caracteres
    @param n es un entero que se imprimira
    @return no devuelve nada
*/
void imprimir_celda(int n){

    if (n=<0){
        cout << "Error!"
    }else if (n==0){
        cout << "      ";
    }else if (n<10){
        cout << "   " << n << "  ";
    } else if (n<100){
        cout << "  " << n << "  ";
    } else if (n<1000){
        cout << "  " << n << " ";
    } else if (n<10000){
        cout << " " << n << " ";
    } else {
        cout << "Error!";
    }
}
