//
//  librería.h
//  Texas Final
//
//  Created by Guillermo Carsolio on 11/17/16.
//  Copyright © 2016 F&M Cas. All rights reserved.
//

#ifndef libreri_a_h
#define libreri_a_h

#include <time.h>
#include <string.h>
#define true 1
#define false 0
#define ELEMS 3
#include <time.h>
#define TAM 11
#define ELEMS 3



int compu1[7][3];
int compu2[7][3];
int jugador[7][3];

int determine_ganador(int ganador, int dinero)
{
    //printf("entre a determinar ganador");
    //printf("%i",ganador);
    if(ganador==1){
        
    dinero = dinero + 15;
    

        printf("\n\nGanaste Felicidades!!!! Dinero: %i\n\n", dinero);
    }
    else if(ganador==2)
    {
        printf("\n\nGano la computadora 1   Dinero: %i\n\n", dinero);
    }
    else if(ganador==3)
    {
        printf("\n\nGano la computadora 2   Dinero: %i\n\n", dinero);
    }
    else if(ganador==4)
    {
        printf("\n\nEmpate\n\n");
    }
    return dinero;
    //printf("sali de determinar ganador");
}




//Esste procedimiento es para que despues de cada ronda te imprima las manos de las computadoras (NO EN CARTAS SINO EN PALABRA)
//uso matrizaleatorea porque si uso las compu1 y compu 2 esas ya estan ordenadas entonces puede enseñar cartas que tambien puso el dealer
void imprime_manos_jugadores(int matrizaleatorea[TAM][3]){
    
    int i;
    printf("Computadora 1: ");
    
    for (i = 2; i< 4 ; i++){
        switch(matrizaleatorea[i][1]){
                
            case 1:
                printf("1");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 2:
                printf("2");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 3:
                printf("3");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 4:
                printf("4");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 5:
                printf("5");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 6:
                printf("6");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 7:
                printf("7");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 8:
                printf("8");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 9:
                printf("9");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 10:
                printf("10");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 11:
                printf("J");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 12:
                printf("Q");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 13:
                printf("R");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ ");
                        break;
                }
                break;
            case 14:
                printf("A");
                switch(matrizaleatorea[i][2]){
                    case 1:
                        printf("♥ ");
                        break;
                    case 2:
                        printf("♦ ");
                        break;
                    case 3:
                        printf("♠ ");
                        break;
                    case 4:
                        printf("♣ " );
                        break;
                }
                break;
                
        }
    }
    printf("\n");
    printf("Computadora 2: ");
    
    for (i = 4; i< 6 ; i++){
    switch(matrizaleatorea[i][1]){
            
        case 1:
            printf("1");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 2:
            printf("2");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 3:
            printf("3");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 4:
            printf("4");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 5:
            printf("5");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 6:
            printf("6");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 7:
            printf("7");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 8:
            printf("8");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 9:
            printf("9");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 10:
            printf("10");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 11:
            printf("J");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 12:
            printf("Q");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 13:
            printf("R");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
        case 14:
            printf("A");
            switch(matrizaleatorea[i][2]){
                case 1:
                    printf("♥ ");
                    break;
                case 2:
                    printf("♦ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                case 4:
                    printf("♣ " );
                    break;
            }
            break;
            
    }}
    
    
    printf("\n");
    
    
    
    
    
    
    
    
    
    
}


int jerarquia(int matriz_j[7][3])
{
    
    int i = 1;
    
    
    
    switch(i)
    {
            
        case 1: //Evaluación de "Royal Flush"
        {
            
            //est· variable me ayuda a verificar cada caso
            
            int posicion_en_7 = -1;
            
            //evaluaciÛn a jugador 1, compara valor de carta y siguiente carta - 1 esperando que sea el mismo valor
            
            
            // Estos if statements son para poder contar la corrida solo de 5 cartas. y como esta en orden de menor a mayor la matriz
            //
            
            
            
            if ((matriz_j[6][1]-12) == (matriz_j[1][1])&&matriz_j[1][1] == (matriz_j[2][1]-1)&&matriz_j[2][1] == (matriz_j[3][1]-1)&&matriz_j[3][1] == (matriz_j[4][1]-1))
            {
                posicion_en_7 = 3;
            }
            else if (matriz_j[0][1] == (matriz_j[1][1]-1)&&matriz_j[1][1] == (matriz_j[2][1]-1)&&matriz_j[2][1] == (matriz_j[3][1]-1)&&matriz_j[3][1] == (matriz_j[4][1]-1))
            {
                posicion_en_7 = 0;
            }
            else if (matriz_j[1][1] == (matriz_j[2][1]-1)&&matriz_j[2][1] == (matriz_j[3][1]-1)&&matriz_j[3][1] == (matriz_j[4][1]-1)&&matriz_j[4][1] == (matriz_j[5][1]-1))
            {
                posicion_en_7 = 1;
            }
            else if (matriz_j[2][1] == (matriz_j[3][1]-1)&&matriz_j[3][1] == (matriz_j[4][1]-1)&&matriz_j[4][1] == (matriz_j[5][1]-1)&&matriz_j[5][1] == (matriz_j[6][1]-1))
            {
                posicion_en_7 = 2;
            }
            
            if( posicion_en_7!=-1)
            {
                int a;
                int si_flush = 0;
                int palo = matriz_j[0][2];
                //for para checar si todas las cartas son del mismo palo
                for (a = 0; a < 5; a++)
                {
                    if (matriz_j[a+posicion_en_7][2] == palo)
                    {
                        si_flush++;
                    }
                }
                
                if (si_flush == 5)
                {
                    
                    //checa si acaba en Ace para definirlo como "Royal Flush"
                    if(matriz_j[6][1]==14 && matriz_j[6][1] == palo)
                    {
                        return 10;
                        
                        
                    }
                    //de lo contrario definirlo como "Straight Flush"
                    else
                    {
                        
                        return 9;
                        
                        
                    }
                }
                else
                {
                    //finalmente si no hay color
                    return 5;
                }
            }
            
        }
        case 2: // el segundo caso va a evaluar si es "4 of a kind", "full" "3 of a kind"
        {
            
            int final = 0;
            int a;
            int si_flush = 0;
            
         
            
            for(a = 0; a < 7; a++){
                if (si_flush>= 5){
                    final = 1;}
                int x;
                si_flush = 0;
                for (x =0; x<7; x++)
                {
                    if(matriz_j[a][2] == matriz_j[x][2])
                    {
                        si_flush++;
                    }
                    
                    
                }
            }

            if (
                //en este if hay 4 posibles opciones de tener 4 iguales en 7 cartas, los separo con OR
                (matriz_j[0][1] == matriz_j[1][1]&&matriz_j[1][1] == matriz_j[2][1]&&matriz_j[2][1] == matriz_j[3][1])
                ||
                (matriz_j[1][1] == matriz_j[2][1]&&matriz_j[2][1] == matriz_j[3][1]&&matriz_j[3][1] == matriz_j[4][1])
                ||
                (matriz_j[2][1] == matriz_j[3][1]&&matriz_j[3][1] == matriz_j[4][1]&&matriz_j[4][1] == matriz_j[5][1])
                ||
                (matriz_j[3][1] == matriz_j[4][1]&&matriz_j[4][1] == matriz_j[5][1]&&matriz_j[5][1] == matriz_j[6][1])
                )
            {
                return 8;
            }
            else if(
                    //en este if hay 6 diferentes posibilidades de full en 7 cartas, lo separo con OR
                    (matriz_j[0][1] == matriz_j[1][1]&&matriz_j[1][1] == matriz_j[2][1]&&matriz_j[3][1] == matriz_j[4][1])
                    ||
                    (matriz_j[0][1] == matriz_j[1][1]&&matriz_j[2][1] == matriz_j[3][1]&&matriz_j[3][1] == matriz_j[4][1])
                    ||
                    (matriz_j[1][1] == matriz_j[2][1]&&matriz_j[2][1] == matriz_j[3][1]&&matriz_j[4][1] == matriz_j[5][1])
                    ||
                    (matriz_j[1][1] == matriz_j[2][1]&&matriz_j[3][1] == matriz_j[4][1]&&matriz_j[4][1] == matriz_j[5][1])
                    ||
                    (matriz_j[2][1] == matriz_j[3][1]&&matriz_j[3][1] == matriz_j[4][1]&&matriz_j[5][1] == matriz_j[6][1])
                    ||
                    (matriz_j[2][1] == matriz_j[3][1]&&matriz_j[4][1] == matriz_j[5][1]&&matriz_j[5][1] == matriz_j[6][1])
                    
                    )
            {
                return 7;
            }
            else if (final>=5)
            {
                return 6;   //aqui verifico lo del for de flush arriba y nada m·s veo que sea mayor que 5
            }
            else if (
                     //en este if hay 5 posibles opciones de tener 3 iguales en 7 cartas, los separo con OR
                     (matriz_j[0][1] == matriz_j[1][1]&&matriz_j[1][1] == matriz_j[2][1])
                     ||
                     (matriz_j[1][1] == matriz_j[2][1]&&matriz_j[2][1] == matriz_j[3][1])
                     ||
                     (matriz_j[2][1] == matriz_j[3][1]&&matriz_j[3][1] == matriz_j[4][1])
                     ||
                     (matriz_j[3][1] == matriz_j[4][1]&&matriz_j[4][1] == matriz_j[5][1])
                     ||
                     (matriz_j[4][1] == matriz_j[5][1]&&matriz_j[5][1] == matriz_j[6][1])
                     
                     )
            {
                return 4;
            }
            
        }
            
        case 3: //aqui verifico la cantidad de pares que tiene la matriz
        {
            int par = 0;
            
            if (matriz_j[0][1] == matriz_j[1][1])
            {
                par++;
            }
            if (matriz_j[1][1] == matriz_j[2][1])
            {
                par++;
            }
            if (matriz_j[2][1] == matriz_j[3][1])
            {
                par++;
            }
            if (matriz_j[3][1] == matriz_j[4][1])
            {
                par++;
            }
            if (matriz_j[4][1] == matriz_j[5][1])
            {
                par++;
            }
            if (matriz_j[5][1] == matriz_j[6][1])
            {
                par++;
            }
            
            if (par == 3)
            {
                return 3;
            }
            else if (par == 2)
            {
                return 3;
            }
            else if (par == 1)
            {
                return 2;
            }
        }
            break;
    }
    //si no tiene nada aplica la high card
    return 1;
}

void ordenar_menor_a_mayor (int matriz_orden[7][3])
{
    //esta funciÛn usa el metodo bubble sort
    int i;
    int temp = 0;
    
    
    for (i=1; i<7; i++)
    {
        int j;
        
        for (j=0 ; j<(7 - 1); j++)
        {
            if (matriz_orden[j][0] > matriz_orden[j+1][0])
            {
                temp = matriz_orden[j][0];
                matriz_orden[j][0] = matriz_orden[j+1][0];
                matriz_orden[j+1][0] = temp;
                
                temp = matriz_orden[j][1];
                matriz_orden[j][1] = matriz_orden[j+1][1];
                matriz_orden[j+1][1] = temp;
                
                temp = matriz_orden[j][2];
                matriz_orden[j][2] = matriz_orden[j+1][2];
                matriz_orden[j+1][2] = temp;
            }
        }
    }
}
void ordenar_cada_matriz(int matriz_orden[7][3])
{
    
    int i;
    
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            matriz_orden[i][c] = jugador[i][c];
        }
        
    }
    ordenar_menor_a_mayor(matriz_orden);
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            jugador[i][c] = matriz_orden[i][c];
        }
    }
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            matriz_orden[i][c] = compu1[i][c];
        }
    }
    ordenar_menor_a_mayor(matriz_orden);
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            compu1[i][c] = matriz_orden[i][c];
        }
        
    }
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            matriz_orden[i][c] = compu2[i][c];
        }
    }
    ordenar_menor_a_mayor(matriz_orden);
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            compu2[i][c] = matriz_orden[i][c];
        }
    }
}
void llena_manos(int matrizleatorea[11][3])
{
    
    int i;
    for (i =0; i < 2; i++)
    {
        int c;
        for (c =0; c < 3; c++)
        {
            jugador[i][c] = matrizleatorea[i][c];
            compu1[i][c] = matrizleatorea[i+2][c];
            compu2[i][c] = matrizleatorea[i+4][c];
        }
    }
    
    for (i =0; i < 5; i++)
    {
        int c;
        for (c =0; c < 3; c++)
        {
            jugador[i+2][c] = matrizleatorea[i+6][c];
            compu1[i+2][c] = matrizleatorea[i+6][c];
            compu2[i+2][c] = matrizleatorea[i+6][c];
        }
    }
}
int buscarNumero(int numero, int matrizaleatorea[TAM][3],int tam)
{
    int i,stop=0;
    
    for(i=0; (i<tam&& stop==0); i++)
    {
        if (matrizaleatorea[i][0]==numero)
            stop=1;
    }
    return stop;
    
}
void llenado11_aleatorio(int matrizaleatorea[TAM][3])
{
    int min=1;
    int max=52;
    int num_aleatorio;
    
    int fstop;
    int i;
    
    srand(time(NULL));
    for(i=0; i<TAM; i++)
    {
        do
        {
            num_aleatorio=min+rand()%(max-min+1);
            fstop=buscarNumero(num_aleatorio,matrizaleatorea,TAM);
        }
        while(fstop);
        matrizaleatorea[i][0]=num_aleatorio;
        //printf("%d \n",matrizaleatorea[i][0]);
    }
}
void imprime_matriz(int matrizaleatorea[11][3])
{
    
    int r;
    for (r =0; r < 11; r++)
    {
        
        
        int c;
        for (c = 0; c < 3; c++)
        {
            
            printf("%i ", matrizaleatorea[r][c]);
            
        }
        printf("\n");
    }
    
}


void llenar_matriz(int matrizaleatorea[11][3])
{
    //Este procedimiento lo que hace es llenar nuestra matriz 11x3 con diferentes valores
    //La primera columna es un n˙mero del 1 al 52 (cantidad de cartas en un  deck) (Ya fue escogido por otra funciÛn)
    //La segunda es un n˙mero del 1 al 13 que es el valor de la carta de 2 a az
    //La tercera es un n˙mero del 1 al 4 para saber el palo de la carta
    
    int i;
    for(i=0; i<11; i++)
    {
        
        //matrizaleatorea[i][0]=i;
        
        
        //aqui se da el valo del 1 al 13
        if (matrizaleatorea[i][0] >= 1 && matrizaleatorea[i][0] <= 4 )
        {
            
            matrizaleatorea[i][1] = 2;
        }
        else if (matrizaleatorea[i][0] >= 5 && matrizaleatorea[i][0] <= 8 )
        {
            
            matrizaleatorea[i][1] = 3;
        }
        else if (matrizaleatorea[i][0] >= 9 && matrizaleatorea[i][0] <= 12 )
        {
            
            matrizaleatorea[i][1] = 4;
        }
        else if (matrizaleatorea[i][0] >= 13 && matrizaleatorea[i][0] <= 16 )
        {
            
            matrizaleatorea[i][1] = 5;
        }
        else if (matrizaleatorea[i][0] >= 17 && matrizaleatorea[i][0] <= 20 )
        {
            
            matrizaleatorea[i][1] = 6;
        }
        else if (matrizaleatorea[i][0] >= 21 && matrizaleatorea[i][0] <= 24 )
        {
            
            matrizaleatorea[i][1] = 7;
        }
        else if (matrizaleatorea[i][0] >= 25 && matrizaleatorea[i][0] <= 28 )
        {
            
            matrizaleatorea[i][1] = 8;
        }
        else if (matrizaleatorea[i][0] >= 29 && matrizaleatorea[i][0] <= 32 )
        {
            
            matrizaleatorea[i][1] = 9;
        }
        else if (matrizaleatorea[i][0] >= 33 && matrizaleatorea[i][0] <= 36 )
        {
            
            matrizaleatorea[i][1] = 10;
        }
        else if (matrizaleatorea[i][0] >= 37 && matrizaleatorea[i][0] <= 40 )
        {
            
            matrizaleatorea[i][1] = 11;
        }
        else if (matrizaleatorea[i][0] >= 41 && matrizaleatorea[i][0] <= 44 )
        {
            
            matrizaleatorea[i][1] = 12;
        }
        else if (matrizaleatorea[i][0] >= 45 && matrizaleatorea[i][0] <= 48 )
        {
            
            matrizaleatorea[i][1] = 13;
        }
        else if (matrizaleatorea[i][0] >= 49 && matrizaleatorea[i][0] <= 52 )
        {
            
            matrizaleatorea[i][1] = 14;
        }
        
        //aqui se da l valor del 1 al 4
        switch (matrizaleatorea[i][0] - ( (matrizaleatorea[i][1] - 2) *4 ))
        {
                
            case 1:
                matrizaleatorea[i][2] = 1;
                break;
            case 2:
                matrizaleatorea[i][2] = 2;
                break;
            case 3:
                matrizaleatorea[i][2] = 3;
                break;
            case 4:
                matrizaleatorea[i][2] = 4;
                break;
        }
        
        
    }
    
    
}




typedef struct clientes
{
    char nombre[50];
    char dir[50];
    char cd[20];
    char fechaNac[11];
    char fechaAdd[11];
    float cantidad;
    int id;
} CLIENTES;
void base_datos()
{
    CLIENTES cli[ELEMS];//con esto trabajaremos arrays de estructuras
    int menu=0, pos=0, key, count;
    do
    {
        printf("Welcome to F&M Casino\n");
        printf("Que deseas hacer?\n");
        printf("1-Add\n2-Recargar \n3-Search\n4-Edit\n5-Delete\n6-Display\n7-Exit\n");
        scanf("%i",&menu);
        printf("Escogiste: %i \n",menu);
        if(menu==1)
        {
            printf("\nIngresa nombre: ");
            scanf("%49s",cli[pos].nombre);
            printf("\nIngresa la Direccion: ");
            scanf("%49s",cli[pos].dir);
            printf("\nIngresa la Ciudad donde vive: ");
            scanf("%19s",cli[pos].cd);
            printf("\nIngresa su fecha de nac. (dd/mm/aaaa): ");
            scanf("%10s",cli[pos].fechaNac);
            printf("\nIngresa la fecha de registro: ");
            scanf("%10s",cli[pos].fechaAdd);
            printf("\nIngresa la cantidad: ");
            scanf("%f",&cli[pos].cantidad);
            cli[pos].id=pos;
            printf("\nSu id es: %d\n",pos);
            pos=pos+1;
        }//end if Add
        else if(menu==2)
        {
            printf("\nIngresa Id(clave) a buscar: ");
            scanf("%d",&key);
            int ban;
            for(count=0; count<pos; count++)
            {
                if(key==cli[count].id)
                {
                    printf("\tCantidad de dinero: $ %.2f\n",cli[key].cantidad);
                    printf("\nCantidad a recargar: ");
                    scanf("%f",&cli[key].cantidad);
                    cli[key].id=key;
                    printf("\nSu id es: %d\n",key);
                    ban=true;
                    break;
                }
            }
            if(ban==false)printf("\nError: El cliente que busca no existe.\n");
        }
        else if(menu==3)
        {
            printf("\nIngresa Id(clave) a buscar: ");
            scanf("%d",&key);
            int ban;
            for(count=0; count<pos; count++)
            {
                if(key==cli[count].id)
                {
                    printf("\nNombre: %s",cli[key].nombre);
                    printf("\nDireccion: %s",cli[key].dir);
                    printf("\nCiudad: %s",cli[key].cd);
                    printf("\nFecha Nacimiento: %s",cli[key].fechaNac);
                    printf("\nFecha de Ingreso: %s",cli[key].fechaAdd);
                    printf("\nCantidad de dinero: $ %.2f\n",cli[key].cantidad);
                    printf("\nId: %d\n",cli[key].id);
                    ban=true;
                    break;
                }
            }
            if(ban==false)printf("\nError: El cliente que busca no existe.\n");
        }//end if search
        else if(menu==4)
        {
            printf("\nIngresa Id(clave) a buscar: ");
            scanf("%d",&key);
            int ban;
            for(count=0; count<pos; count++)
            {
                if(key==cli[count].id)
                {
                    printf("Modificaras al siguiente usuario: ");
                    printf("\nNombre: %s",cli[key].nombre);
                    printf("\nIngresa nombre nuevo: ");
                    scanf("%49s",cli[key].nombre);
                    printf("\nDireccion: %s",cli[key].dir);
                    printf("\nIngresa la Direccion nueva: ");
                    scanf("%49s",cli[key].dir);
                    printf("\nCiudad: %s",cli[key].cd);
                    printf("\nIngresa la Ciudad nueva: ");
                    scanf("%19s",cli[key].cd);
                    printf("\nFecha Nacimiento: %s",cli[key].fechaNac);
                    printf("\nIngresa su fecha de nac. (dd/mm/aaaa) Nueva: ");
                    scanf("%10s",cli[key].fechaNac);
                    printf("\nFecha de Ingreso: %s",cli[key].fechaAdd);
                    printf("\nIngresa la fecha de registro nueva: ");
                    scanf("%10s",cli[key].fechaAdd);
                    cli[key].id=key;
                    printf("\nSu id es: %d\n",key);
                    ban=true;
                    break;
                }
            }
            if(ban==false)printf("\nError: El cliente que busca no existe.\n");
        }//end if edit
        else if(menu==5)
        {
            printf("\nIngresa Id(clave) a buscar para eliminar");
            scanf("%d",&key);
            int ban;
            for(count=0; count<pos; count++)
            {
                if(key==cli[count].id)
                {
                    int count2;
                    for(count2=count+1; count2<pos; count2++)
                    {
                        //sobreescribimos el registro siguiente para eliminar los registros
                        cli[count2-1]=cli[count2];
                        //asÌ mismo sobreescribimos el id que disminuye en 1
                        cli[count2-1].id=cli[count2-1].id-1;
                    }//end for
                    //eliminamos una posicion
                    pos=pos-1;
                    ban=true;
                    printf("\nSe elimino al registro con exito\n");
                    break;
                }//end if
            }//end for
            if(ban==false)printf("\nError: El cliente que busca no existe.\n");
        }//end if delete
        else if(menu==6)
        {
            printf("\nId\tNombre\tDireccion\tCiudad\tFechaNac\tFechaAdd");
            for(count=0; count<pos; count++)
            {
                printf("\n %d",cli[count].id);
                printf("\t%s",cli[count].nombre);
                printf("\t%s",cli[count].dir);
                printf("\t%s",cli[count].cd);
                printf("\t%s",cli[count].fechaNac);
                printf("\t%s\t",cli[count].fechaAdd);
                printf("\tCantidad de dinero: $ %.2f\n",cli[count].cantidad);
            }//end for
        }
        else if (menu==7)
        {
            
        }//end if display
    }
    while(menu<7);
    
    
    
}

char *convertIC(int val, int base)
{
    
    static char buf[32] = {0};
    int i = 30;
    
    for(; val && i ; --i, val /= base)
        
        buf[i] = "0123456789abcdef"[val % base];
    
    return &buf[i+1];
}
void dame_carta(int matrizaleatorea[11][3],int j)
{
    int n;
    int i;
    
    for(i=0; i<j; i++)
    {
        char *cad;
        cad=(char *)malloc(sizeof(char)*30);
        n=matrizaleatorea[i][0];
        cad=convertIC(n,10);
        
        char src[50], dest[50];
        strcpy(src,".txt");
        strcpy(dest, cad);
        strcat(dest, src);
        //printf("%s\n\n",dest);
        int c;
        FILE *carta;
        carta = fopen(dest, "r");
        if (carta)
        {
            while ((c = getc(carta)) != EOF)
                putchar(c);
            fclose(carta);
        }
    }
}
void dame_cartadel(int matrizaleatorea[11][3],int j)
{
    int n;
    int i;
    for(i=6; i<=j; i++)
    {
      
        char *cad;
        cad=(char *)malloc(sizeof(char)*30);
        n=matrizaleatorea[i][0];
        cad=convertIC(n,10);
       
        char src[50], dest[50];
        strcpy(src,".txt");
        strcpy(dest, cad);
        strcat(dest, src);
        
        int c;
        FILE *carta;
        carta = fopen(dest, "r");
        if (carta)
        {
            while ((c = getc(carta)) != EOF)
                putchar(c);
            fclose(carta);
        }
    }
}




int procedimiento_ganador (int jugador_valor, int compu1_valor,int compu2_valor,int matrizaleatorea[TAM][3], int matriz_orden[7][3], int matriz_j[7][3], int ganador, int dinero)
{
    
    
    printf("\n\n");
    ordenar_cada_matriz(matriz_orden);
    int i;
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            matriz_j[i][c] = jugador[i][c];
        }
    }
    jugador_valor = jerarquia(matriz_j);
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            matriz_j[i][c] = compu1[i][c];
        }
    }
    compu1_valor = jerarquia(matriz_j);
    for(i =0; i<7; i++)
    {
        int c;
        for (c=0; c<3; c++)
        {
            matriz_j[i][c] = compu2[i][c];
        }
    }
    compu2_valor = jerarquia(matriz_j);
    
    imprime_manos_jugadores(matrizaleatorea);
    
    if (jugador_valor > compu1_valor && jugador_valor > compu2_valor)
    {
        ganador = 1;
    }
    else if (compu1_valor > compu2_valor && compu1_valor> jugador_valor)
    {
        ganador = 2;
    }
    else if (compu2_valor > compu1_valor && compu2_valor> jugador_valor)
    {
        ganador = 3;
        
    }
    //despues de aqui evaluaremos los casos de empates
    else
    {
        int jcount = 0;
        int c1count = 0;
        int c2count = 0;
        for (i =0; i<7; i++)
        {
            jcount = jcount + jugador[i][1];
        }
        for (i =0; i<7; i++)
        {
            c1count = c1count + compu1[i][1];
        }
        for (i =0; i<7; i++)
        {
            c2count = c2count + compu2[i][1];
        }
        //empate de los 3
        if(jugador_valor == compu1_valor && jugador_valor == compu2_valor)
        {
            if(jcount > c1count && jcount > c2count)
            {
                ganador = 1;
            }
            else if (c1count > jcount && c1count > c2count)
            {
                ganador = 2;
            }
            else if (c2count > jcount && c2count > c1count)
            {
                ganador = 2;
            }
        }
        //empate de j1 y c1
        else if(jugador_valor == compu1_valor)
        {
            if(jcount > c1count)
            {
                ganador = 1;
            }
            else if (c1count > jcount)
            {
                ganador = 2;
            }
        }
        //empate de j1 y c2
        else if(jugador_valor == compu2_valor)
        {
            
            if(jcount > c2count)
            {
                ganador = 1;
            }
            else if (c2count > jcount)
            {
                ganador = 3;
            }
        }
        //emapate de campus
        else if(compu2_valor == compu1_valor)
        {
            if(c2count > c1count)
            {
                
                ganador = 3;
            }
            else if (c1count > c2count)
            {
                ganador = 2;
            }
        }
        //empate total
        else
        {
            ganador = 4;
        }
        
    }
     dinero = determine_ganador(ganador, dinero);
    return dinero;
}



//En este procedimiento es donde se conectan todas las funciones y logramos correr el programa
void menu_juego(int jugador_valor, int compu1_valor,int compu2_valor,int matrizaleatorea[TAM][3], int matriz_orden[7][3], int matriz_j[7][3], int ganador, int dinero)
{
    
    dinero = 50;
    int movimiento;
    do{
        
        
       
    llenado11_aleatorio(matrizaleatorea);
    llenar_matriz(matrizaleatorea);
    llena_manos(matrizaleatorea);
    dame_carta(matrizaleatorea,2);
        
        
    
    printf("\n1.-Jugar\n");
    printf("2.-Fold\n");
    printf("3.-Salir\n");
    printf("Dinero: $%i.00\n", dinero);
        
    printf("Escoge un movimiento\n");
    scanf("%i%*c",&movimiento);
    switch(movimiento)
    {
        case 1:
        {
            
            printf("\nEn Juego: $%i.00\n", 15);
            dinero = dinero - 5;
            dame_cartadel(matrizaleatorea,11);
            dinero = procedimiento_ganador(jugador_valor, compu1_valor, compu2_valor, matrizaleatorea, matriz_orden, matriz_j, ganador, dinero);
            
            printf("Presione cualquier tecla para que el dealer reparta las cartas\n");
            
            getchar();
            
            break;
        }
        case 2:
        {
            
            break;
        }
    
        }
    }while(movimiento !=3 || dinero == 0);
}
void menu ()//se declara el procedimiento del menu
{
    printf("\n  Bienvenido \n");
    printf("\n  Seleccione una opcion \n");
    printf("\n  1.- Jugar\n");
    printf("\n  2.- Cuentas \n");
    printf("\n  3.- Salir \n");
    printf("\n Opción?: ");
    
}

#endif
