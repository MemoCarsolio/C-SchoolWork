
/**
 *Laboratorio 5: Funciones
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define RW 5
#define CM 5







//Esta función llena la matriz con las coordenadas
void llena_matriz(int matriz[RW][CM]) {
    
    int i;
    int counter = 0;
    for (i =0; i< RW; i++){
        int p;
        for (p = 0; p < CM; p++){
            
            matriz[i][p] = counter + 1;
            counter++;
        }
    }
    
}

//esta función la uso para poner 0 si hay mina y 1 si no hay mina
void llena_matriz_valor(int matriz_valor[RW][CM]) {
    
    int i;

    for (i =0; i< RW; i++){
        int p;
        for (p = 0; p < CM; p++){
            
            matriz_valor[i][p] = rand() % 2;
            
        
            
        }
    }
    
}





//Esta función la uso para el juego
void imprime_matriz(int matriz[RW][CM], int matriz_valor[RW][CM]){
    
    //variables iniciales
    int r;
    int score = 0;
    int end = 1;
    int point = -100;

    do{
        
        
        //este pedaso de codigo verifíca tu coordenada con el programa
        //entonces cambia los valores de matriz_valor para que sean
        //impresos con un "SI" o "NO" en el programa para que veas
        //tambien cambia el score
        for (r =0; r< RW; r++){
            int c;
            for (c = 0; c < CM; c++){
                if (matriz[r][c] == point){
                    if(matriz_valor[r][c] == 1){
                        score++;
                        matriz_valor[r][c] = -2;}
                    else if(matriz_valor[r][c] == 0){
                        if (score !=  0){
                            
                            score--;}
                        matriz_valor[r][c] = -1;
                    }
                }
            }}
        
        
        
        
        
        
        //esto imprime el mapa de minas
        printf("\nEsto es el campo de minas\n");
        printf("Puntaje: %i\n\n", score);
        for (r =0; r< RW; r++){
            int c;
            for (c = 0; c < CM; c++){
                if (matriz_valor[r][c] == -1){
            
                    printf("NO ");
            
                }
                else if (matriz_valor[r][c] == -2){
                    printf("SI ");
                
                }
                else if (matriz[r][c] < 10){
                    printf("0%i ", matriz[r][c]);
            
                }
                else{
                    printf("%i ", matriz[r][c]);}
            
            }
            printf("\n");
        }
        
        //esto verifica que no halla un lugar sin mina en el campo
        //esto es para acabar con el juego while
        int track = 0;
        for (r =0; r< RW; r++){
            int c;
            for (c = 0; c < CM; c++){
                if (matriz_valor[r][c] == 1){
                    track = 1;
                }
            }
        }
        if (track == 0){
            end = 0;
        }
    
        
        
        //esto es para que no pregunte una vez que acabaste con el juego
        if (end != 0){
            printf("\n¿Donde no hay mina?: ");
            scanf("%i%*c", &point);}
        
        
        
    
    
    }while(end == 1);
    
    
    //Aqui vuelvo a imprimir el mapa pero ya descubierto por completo
    //y te doy tu score
    printf("\nACABASTE EL JUEGO\n");
    printf("Puntaje final: %i\n\n", score + 1);
    for (r =0; r< RW; r++){
        int c;
        for (c = 0; c < CM; c++){
            if (matriz_valor[r][c] == -1 || matriz_valor[r][c] == 0){
                
                printf("NO ");
                
            }
            else if (matriz_valor[r][c] == -2){
                printf("SI ");
                
            
        }
        
    }
        printf("\n");

    
    }}



int main () {
    
    int matriz [RW][CM];
    int matriz_valor [RW][CM];
    
    

    
    int opcion = 0;
    
    do{
        
        
        printf("\n\nMINES BETA\n\n1.- Inicio\n2.- instrucciones\n3.- Salir\n ¿Opción?: ");
        scanf("%i%*c", &opcion);
        
        switch (opcion){
                
                
            case 1:
                
                llena_matriz(matriz);
                llena_matriz_valor(matriz_valor);
                imprime_matriz(matriz,matriz_valor);
                break;
            case 2:
                
                printf("\nEsto es un juego que te va a demostrar gráficamente un mapa con números,la consola te pedira un número o coordenada que tu creas que NO halla minacada vez que encuentres un lugar sin mina te da un punto a tu puntaje, pero cada vez que encuentres una mina te quita 2 puntos a tu puntaje. Una vez en 0 tu puntaje no se le resta más\n");
                
                break;
        }
        
    } while (opcion != 6);
    
    
    
}