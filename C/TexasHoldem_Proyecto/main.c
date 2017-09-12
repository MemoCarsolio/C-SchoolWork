/**
 * Texas Hold em
 * @author: Franco Garcia Pedregal y Guillermo Carsolio
 * Matricula: A01273527 y A01700041
 * @date 18/10/2016
 **/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "libreria.h"
int compu1[7][3];
int compu2[7][3];
int jugador[7][3];




int main()
{
    int dinero;
    int matriz_j[7][3];
    int matrizaleatorea[TAM][3];
    int matriz_orden[7][3];
    int jugador_valor;
    int compu1_valor;
    int compu2_valor;
    int opcion = 0;
    int ganador; //este valor si es  = 1 jugador gana si es = 2 compu1 gana y si es = 3 compu2 gana
    
    
    llenado11_aleatorio(matrizaleatorea);
    llenar_matriz(matrizaleatorea);
    do
    {
        menu();
        
        scanf("%i%*c",&opcion);
        switch(opcion)
        {
            case 1:
            {
                menu_juego(jugador_valor, compu1_valor, compu2_valor, matrizaleatorea, matriz_orden, matriz_j, ganador, dinero);
                
                
                break;
            }
            case 2:
            {
                base_datos();
                
                
                break;}
        }
        
    }
    while(opcion!=6);
}
