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
printf("A la espera del contenido.........................................................................");
    system("pause");
///////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO
//JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////
///////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO
//JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////
///////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO
//JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////
///////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO
//JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////JUEGO/////
    salir();
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
    printf("\tGracias por jugar J_A_Y\n\n\n");
    exit(0);
return 0;
}

void limpiar()
{
   system("cls||clear");
}