#define N 15
#define M 3//NIVELES
int level=0;
int x, y;

int mapa[M][N][N]={
    {
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,3,1,1,1,0,1,1,1,0,0,0,0,0,0},
    {0,1,0,0,1,0,0,0,1,0,1,1,1,0,0},
    {0,1,1,1,1,0,1,1,1,0,1,0,1,0,0},
    {0,0,1,0,1,0,1,0,1,1,1,0,1,0,0},
    {0,1,1,0,1,0,1,0,1,0,0,0,1,1,0},
    {0,1,0,0,1,1,1,0,1,1,1,0,0,1,0},
    {0,1,1,0,1,1,0,0,0,0,1,0,0,0,0},
    {0,0,0,1,1,0,1,0,0,0,1,1,1,0,0},
    {0,1,0,1,1,1,0,0,0,0,0,0,1,0,0},
    {0,1,0,1,0,1,1,0,0,0,0,0,1,1,4},
    {0,0,1,1,0,1,1,1,0,1,0,1,0,1,0},
    {0,1,0,1,0,0,0,1,0,1,1,0,1,0,0},
    {0,1,0,1,1,1,1,1,1,1,1,0,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

},
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,3,1,0,1,1,1,1,1,0,0,0,0,0,0},
    {0,1,0,0,1,0,0,0,1,1,1,1,1,0,0},
    {0,1,1,1,1,1,1,1,0,0,1,0,1,0,0},
    {0,0,0,0,1,0,1,0,1,1,1,0,1,0,0},
    {0,1,0,0,1,0,1,0,1,0,0,0,1,1,0},
    {0,1,0,0,1,1,1,0,1,1,1,0,0,1,0},
    {0,1,1,0,1,1,0,0,0,0,1,0,0,0,0},
    {0,0,0,1,1,0,1,0,0,0,1,0,1,0,0},
    {0,1,1,1,1,1,0,0,1,1,1,0,1,0,0},
    {0,1,0,1,0,1,1,0,1,0,0,0,1,1,0},
    {0,0,1,1,0,1,1,0,1,1,1,1,0,1,0},
    {0,1,0,1,0,0,0,1,0,0,1,0,1,0,0},
    {0,1,0,1,1,1,1,1,1,0,1,0,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,4,0,0,0,0},
},
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,4,0},
    {0,3,1,1,1,1,0,1,0,1,1,1,0,1,0},
    {0,0,0,0,0,1,1,0,0,1,0,1,1,1,0},
    {0,0,1,1,1,0,1,0,0,1,0,1,0,0,0},
    {0,0,1,0,1,1,1,0,1,1,0,1,1,1,0},
    {0,0,1,1,0,1,0,0,1,1,0,0,0,1,0},
    {0,0,0,1,0,0,0,0,0,1,0,1,1,1,0},
    {0,1,1,1,1,0,1,1,1,1,0,0,0,1,0},
    {0,1,0,0,0,0,1,0,0,0,0,1,1,1,0},
    {0,1,1,0,0,0,0,0,1,0,0,1,0,0,0},
    {0,0,1,1,1,0,0,1,1,1,1,1,1,1,0},
    {0,0,1,0,0,1,0,0,1,0,0,0,0,1,0},
    {0,0,1,0,1,1,1,0,0,0,0,1,0,1,0},
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
        char apodo[21];

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


void instrucciones()
{
limpiar();
printf("El JAY es un juego de accion, que tiene luegar en un laberinto horizontal.\nEl objetivo principal del jugador es salir de los laberintos y conseguir las monedas magicas.\n\nEl jugador debe utilizar los siguientes comandos\n\n\tW= DELANTE\n\tS= ABAJO\n\tA= DERECHA\n\tD= IZQUIERDA\n\n\n");//instrucciones del juego
system("pause");//pausa el programa para no empezar de nuevo
menu_principal();
}

void salir()
{
    printf("\n\n\tGracias por jugar J_A_Y\n\n\n");
    exit(0);
return 0;
}

void limpiar()
{
   system("cls||clear");
}

void menu_juego()
{
    limpiar();
    char select [10];
    printf("\nDiga el nivel(1,2,3):\n");
    while(1) //ELEGIR LOS NIVELES
    {
         scanf("%c", select);

             if('1'==select[0])
             {
                 level=0;
                 break;
             }
             else if('2'==select[0])
             {
                 level=1;
                 break;
             }
             else if('3'==select[0])
             {
                 level=2;
                 break;
             }
             else
             {
                 printf("Escoja el nivel deseado:\n");
             }

         }
}

 void posicion()//POSICION DEL PERSONAJE
{
    int i=0, j=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N; j++)
        {
        if(mapa[level][i][j]==3)
               {
                   x=i;
                   y=j;
                   break;
               }
        }
    }
}

int movimiento()
{
    int flag = 0;
    while(1)
    {
        flag=0;
        posicion();
        print();
        switch(getch())//RECIBIR ORDENES
        {
            case 'w': flag=Up();
            break;
            case 'a': flag=Left();
            break;
            case 's': flag=Down();
            break;
            case 'd': flag=Right();
            break;
        }
        if(flag==1)
        {
            if(level==M-1)
            {
                printf("Finalizado el juego\n");
                salir();//TERMINAR LA PARTIDA
            }
        else
        {
            system("pause");
            level++;//SIGUIENTE NIVEL
            return 0;
        }}
    }
}
int Up()
{
    if(x!=0)
    {
        if(mapa[level][x-1][y]==1)//funciona
        {
            mapa[level][x-1][y]=3;
            mapa[level][x][y]=1;
        }
        else if(mapa[level][x-1][y]==4)
        {
            return 1;
        }
    }
    return 0;
}
int Down()
{
    if(x!=N-1)
    {
        if(mapa[level][x+1][y]==1)//funciona
        {
            mapa[level][x+1][y]=3;
            mapa[level][x][y]=1;
        }
        else if(mapa[level][x+1][y]==4)
        {
            return 1;
        }
    }
    return 0;
}
int Right()
{
if(y!=N-1)
    {
        if(mapa[level][x][y+1]==1)//funciona
        {
            mapa[level][x][y+1]=3;
            mapa[level][x][y]=1;
        }
        else if(mapa[level][x][y+1]==4)
        {
            return 1;
        }
    }
    return 0;
}
int Left()
{
if(x!=0)
    {
        if(mapa[level][x][y-1]==1)//funciona
        {
            mapa[level][x][y-1]=3;
            mapa[level][x][y]=1;
        }
        else if(mapa[level][x][y-1]==4)
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
            if(mapa[level][i][j]==0)
                printf("�");//PARED
            else if(mapa[level][i][j]==3)
                printf("O");//PERSONAJE
            else if(mapa[level][i][j]==1)
                printf(" ");//ESPACIO
            else if(mapa[level][i][j]==4)
                printf("X");//SALIDA
        }
        printf("\n");
    }
}
