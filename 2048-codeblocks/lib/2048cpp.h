#ifndef j2048CPP_H_INCLUDED
#define j2048CPP_H_INCLUDED

#define TAM 4

typedef struct{

    int tablero [TAM][TAM];
    int puntuacion;

}juego;

void inicializar_juego(juego&);
void imprimir_juego(juego);
void prueba();

#endif // 2048CPP_H_INCLUDED
