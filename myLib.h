#include<stdio.h>
#include <string.h>

#define N 15
#define M 3//Numero de niveles

int level[1];//Nivel
char apodo[21];//Nombre del jugador

//contenido deljuego
void menu_principal();
void menu_juego();
void iniciar_juego();
void instrucciones();

//Funciones del movimiento
int posicion_x(void);
int posicion_y(void);
int movimiento();
int Up();
int Down();
int Left();
int Right();

//Funciones de estrellas recogidas
int estrellas[1];//numero de estrellas
void cuenta_estrellas();//contador


//ranking
void rankin();//Uso de estructuras


void limpiar();//limpiar pantalla
void print();//Dibujar el mapa
void salir();//Salir del juego