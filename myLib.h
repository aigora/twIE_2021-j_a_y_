#include<stdio.h>
#define N 15
#define M 3//NIVELES


void menu_principal();
void menu_juego();
void iniciar_juego();
void instrucciones();
void salir();
void limpiar();
char apodo[21];
void print();
int posicion_x(void);
int posicion_y(void);

//Aqui comienza funciones del movimiento
int movimiento();
int Up();
int Down();
int Left();
int Right();
