#include"myLib.h"

int mapa[M][N][N]={
    {
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,3,1,1,5,0,5,1,1,0,0,0,0,0,0},
    {0,1,0,0,1,0,0,0,1,0,1,1,1,0,0},
    {0,1,1,1,1,0,1,1,1,0,1,0,1,0,0},
    {0,0,1,0,1,0,1,0,1,1,1,0,1,0,0},
    {0,1,1,0,1,0,1,0,1,0,0,0,1,1,0},
    {0,5,0,0,1,1,1,0,1,1,1,0,0,5,0},
    {0,0,1,0,1,1,0,0,0,0,1,0,0,0,0},
    {0,0,5,1,1,0,1,0,0,0,1,5,1,0,0},
    {0,5,0,1,1,1,0,0,0,0,0,0,1,0,0},
    {0,1,0,1,0,1,1,0,0,0,0,0,1,1,4},
    {0,1,1,1,0,1,1,1,0,5,0,1,0,1,0},
    {0,1,0,1,0,0,0,1,0,1,1,0,1,5,0},
    {0,5,0,1,1,1,1,1,1,1,1,0,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
},
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,3,1,0,1,1,1,1,5,0,0,0,0,0,0},
    {0,1,0,0,5,0,0,0,1,1,1,1,5,0,0},
    {0,1,1,1,1,1,1,1,0,0,1,0,1,0,0},
    {0,0,0,0,5,0,1,0,1,5,1,0,1,0,0},
    {0,1,0,0,1,0,1,0,1,0,0,0,1,5,0},
    {0,1,0,0,1,1,1,0,1,1,1,0,0,1,0},
    {0,1,1,0,1,5,0,0,0,0,1,0,0,0,0},
    {0,0,0,5,1,0,1,0,0,0,1,0,1,0,0},
    {0,1,1,1,1,1,0,0,1,1,1,0,1,0,0},
    {0,5,0,1,0,1,1,0,1,0,0,0,1,1,0},
    {0,0,1,1,0,1,1,0,1,1,1,1,0,1,0},
    {0,5,0,1,0,0,0,5,0,0,1,0,1,0,0},
    {0,1,1,1,1,1,1,1,1,0,1,0,1,5,0},
    {0,0,0,0,0,0,0,0,0,0,4,0,0,0,0},
},
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,4,0},
    {0,3,1,1,1,1,0,1,0,1,1,1,0,1,0},
    {0,0,0,0,0,5,1,0,0,1,0,1,1,1,0},
    {0,0,1,1,1,0,1,0,0,1,0,1,0,0,0},
    {0,0,1,0,5,1,1,0,5,1,0,1,1,1,0},
    {0,0,1,5,0,5,0,0,1,1,0,0,0,1,0},
    {0,0,0,1,0,0,0,0,0,1,0,5,1,1,0},
    {0,5,1,1,5,0,1,1,1,1,0,0,0,1,0},
    {0,1,0,0,0,0,5,0,0,0,0,5,1,1,0},
    {0,1,1,0,0,0,0,0,1,0,0,1,0,0,0},
    {0,0,1,1,5,0,0,5,1,1,1,1,1,1,0},
    {0,0,1,0,0,5,0,0,5,0,0,0,0,1,0},
    {0,0,1,0,1,1,1,0,0,0,0,5,0,1,0},
    {0,0,1,1,1,0,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
},
};

void menu_principal() //Para regresar al menu principal
{
    char seleccion;
        limpiar();
                printf("-------------------------\n");
                printf("       BIENVENIDO        \n");
                printf("           A             \n");
                printf("         J_A_Y           \n");
                printf("-------------------------\n");
        printf(" Que desea hacer?\n\n  1)Iniciar Juego.\n  2)Ver Instrucciones.\n  3)Para Salir del Juego\n");
        scanf("%c",&seleccion);
    switch (seleccion)
        {
            case '1':
                    printf("\n\n\n\tPulse alguna tecla para iniciar\n\n\n");
                    iniciar_juego();
            case '2':
                {
                    instrucciones();
                }
            break;
        //B es mirar instruccion de juego
            case '3':
                {
                    salir();
                }
            break;
        //Pulsar cualquier otra tecla salir del juego
            default:
                limpiar();
                menu_principal();
            break;
}}

void iniciar_juego()
{
    limpiar();
    int elige;
        printf(" 1. Inicio rapido\n 2. Nombrar al Campeon\n");
        scanf("%i",&elige);
        if(elige==1)
        {
            limpiar();
            strcpy(apodo,"anonimo");
        }
        else if(elige==2)
        {
            limpiar();
            printf("Introduce tu Apodo sin espacios.\n  (Maximo 20 caracteres)\n Nombre del Apodo:  ");
            scanf ("%s",apodo);
        }
        else
        {
            limpiar();
            iniciar_juego();
        }
    printf("\n Buienvenido, guerrero %s\n Aqui comienza tu historia......\n\n\n",apodo);
    system("pause");

//Entra al menu de juego
    int flag=0;

    menu_juego();

    while(1)
    {
        flag= movimiento();
        if(flag==1||flag==-1)
            return 0;
    }
    return 0;
}


void menu_juego()
{
    limpiar();
    estrellas[0]=0;
    char select [2];
    printf("\nNivel de fificultad(1,2,3):\n");
    while(1) //ELEGIR LOS NIVELES
    {
         scanf("%c", select);

             if('1'==select[0])
             {
                 level[0]=0;
                 break;
             }
             else if('2'==select[0])
             {
                 level[0]=1;
                 break;
             }
             else if('3'==select[0])
             {
                 level[0]=2;
                 break;
             }
             else
             {
                 printf("Escoja el nivel deseado:\n");
             }

         }
}

 int posicion_x()//POSICION DEL PERSONAJE X
{
    int i=0, j=0, x,y;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N; j++)
        {
        if(mapa[level[0]][i][j]==3)
               {
                   x=i;
                   y=j;
               }
        }
    }
        return x;
}
 int posicion_y()//POSICION DEL PERSONAJE Y
{
    int i=0, j=0, x,y;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N; j++)
        {
        if(mapa[level[0]][i][j]==3)
               {
                   x=i;
                   y=j;
               }
        }
    }
    return y;
}

int movimiento()
{
    int flag = 0;
    while(1)
    {
        flag=0;
        print();
        switch(getch())//RECIBIR ORDENES
        {
            case 'W':
            case 'w': flag=Up();
            break;
            case 'A':
            case 'a': flag=Left();
            break;
            case 'S':
            case 's': flag=Down();
            break;
            case 'D':
            case 'd': flag=Right();
            break;
            case 'X':
            case 'x': menu_juego();
            break;
        }
        if(flag==1)
        {
            if(level[0]==M-1)
            {
                printf(" \n\n\tFinalizando el juego\n");
                printf(" \tHas conseguido %i estrellas.\n\n",estrellas[0]);
                system("pause");
                rankin();
                salir();//TERMINAR LA PARTIDA
            }
        else
        {
            system("pause");
            level[0]++;//SIGUIENTE NIVEL
            return 0;
        }}
    }
}
int Up()
{
    int x, y;
    x=posicion_x();
    y=posicion_y();
    if(x!=0)
    {
        if(mapa[level[0]][(x-1)][y]==1)//funciona
        {
            mapa[level[0]][(x-1)][y]=3;
            mapa[level[0]][x][y]=1;
        }
        else if(mapa[level[0]][(x-1)][y]==5)
        {
            mapa[level[0]][(x-1)][y]=3;
            mapa[level[0]][x][y]=1;
            cuenta_estrellas();
        }
        else if(mapa[level[0]][(x-1)][y]==4)
        {
            return 1;
        }
    }
    return 0;
}
int Down()
{
    int x, y;
    x=posicion_x();
    y=posicion_y();
    if(x!=N-1)
    {
        if(mapa[level[0]][(x+1)][y]==1)//funciona
        {
            mapa[level[0]][(x+1)][y]=3;
            mapa[level[0]][x][y]=1;
        }
        else if(mapa[level[0]][(x+1)][y]==5)
        {
            mapa[level[0]][(x+1)][y]=3;
            mapa[level[0]][x][y]=1;
            cuenta_estrellas();
        }
        else if(mapa[level[0]][(x+1)][y]==4)
        {
            return 1;
        }
    }
    return 0;
}
int Right()
{
    int x, y;
    x=posicion_x();
    y=posicion_y();
    if(y!=N-1)
    {
        if(mapa[level[0]][x][(y+1)]==1)//funciona
        {
            mapa[level[0]][x][(y+1)]=3;
            mapa[level[0]][x][y]=1;
        }
        else if(mapa[level[0]][x][(y+1)]==5)
        {
            mapa[level[0]][x][(y+1)]=3;
            mapa[level[0]][x][y]=1;
            cuenta_estrellas();
        }
        else if(mapa[level[0]][x][(y+1)]==4)
        {
            return 1;
        }
    }
    return 0;
}
int Left()
{
    int x, y;
    x=posicion_x();
    y=posicion_y();
    if(x!=0)
    {
        if(mapa[level[0]][x][(y-1)]==1)//funciona
        {
            mapa[level[0]][x][(y-1)]=3;
            mapa[level[0]][x][y]=1;
        }
        else if(mapa[level[0]][x][(y-1)]==5)
        {
            mapa[level[0]][x][(y-1)]=3;
            mapa[level[0]][x][y]=1;
            cuenta_estrellas();
        }
        else if(mapa[level[0]][x][(y-1)]==4)
        {
            return 1;
        }
    }
    return 0;
}

void print() //Imprimir el mapa en pantalla
{
    int i=0, j=0;
    limpiar();
    for(i=0;i<N;i++)
    {
        for(j=0;j<N; j++)
        {
            if(mapa[level[0]][i][j]==0)
                printf("[_]");//PARED
            else if(mapa[level[0]][i][j]==3)
                printf("(x)");//PERSONAJE
            else if(mapa[level[0]][i][j]==1)
                printf("   ");//ESPACIO
            else if(mapa[level[0]][i][j]==4)
                printf(" X ");//SALIDA
            else if(mapa[level[0]][i][j]==5)
                printf(" * ");//ESTRELLA
        }
        printf("\n");
    }
}

void cuenta_estrellas()
{
    estrellas[0]+=1;
}

typedef struct {/////////// Uso de estructura
  char nombre[21];
  int puntuacion;
} datos_rankin;

void rankin()
{
    datos_rankin jugador;
    strcpy(jugador.nombre, apodo);
    jugador.puntuacion = estrellas[0];

    FILE *clasificacion;
    clasificacion = fopen("clasificacion.txt", "a");
    fprintf(clasificacion, "\t %s :\t %i\n", jugador.nombre, jugador.puntuacion);
    fclose(clasificacion);
}

void instrucciones()
{
limpiar();
    FILE *instruccion;
    instruccion = fopen("instrucciones.txt", "r");
    char c;
    while ((c=fgetc(instruccion))!=EOF)
            putchar(c);
system("pause");//pausa el programa para no empezar de nuevo
    fclose (instruccion);

menu_principal();
}

void salir()
{
    printf("\n\n\tGracias por jugar J_A_Y\n\n\n");
    exit(0);
}

void limpiar()
{
   system("cls||clear");
}
