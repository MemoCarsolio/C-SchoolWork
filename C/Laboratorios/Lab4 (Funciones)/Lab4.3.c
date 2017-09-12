/**
 *Laboratorio 4: Funciones
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/


#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O
#include <math.h>    // Librería de Mates extras



//aqui están mis 3 funciones 2 sumas grandes y la que calcula todos los KDs

int suma_deaths (int p1d, int p2d,int p3d){
    
    
    return p1d + p2d + p3d;
    
}


int suma_kills (int p1k, int p2k,int p3k){
    
    
    return p1k + p2k + p3k;

}


float kd (float kills, float deaths) {



    return kills/deaths;


}





//aqui empieza lo que ejecuta el programa

int main () {
    \
    printf("This program calculates your K/D and grupal K/D\n\n\n");
    
    float kills;
    float deaths;
    
    //Aqui defino mi valor de "kills" y le pido su valor al usuario
    int p1k= 0;
    printf("Player 1\nkills:");
    scanf("%i%*c", &p1k);
    kills = p1k;
    //Aqui defino mi valor de "deaths" y le pido su valor al usuario
    int p1d= 0;
    printf("deaths: ");
    scanf("%i%*c", &p1d);
    deaths = p1d;
    
    
    //a deaths y a kills les vuelvo a definir valor para que en cada jugador se calcule en la misma función
    printf("player 1 K/D = %.03f\n\n", kd(kills, deaths));
    
    
    
    //Aqui defino mi valor de "kills" y le pido su valor al usuario
    int p2k= 0;
    printf("Player 2\nkills:");
    scanf("%i%*c", &p2k);
    kills = p2k;
    
    //Aqui defino mi valor de "deaths" y le pido su valor al usuario
    int p2d= 0;
    printf("deaths: ");
    scanf("%i%*c", &p2d);
    deaths = p2d;
    printf("player 2 K/D = %.03f\n\n", kd(kills, deaths));
    
    //Aqui defino mi valor de "kills" y le pido su valor al usuario
    int p3k= 0;
    printf("\nPlayer 3\nkills:");
    scanf("%i%*c", &p3k);
    kills = p3k;
    
    //Aqui defino mi valor de "deaths" y le pido su valor al usuario
    int p3d= 0;
    printf("deaths: ");
    scanf("%i%*c", &p3d);
    deaths = p3d;
    printf("\nplayer 3 K/D = %.03f\n\n", kd(kills, deaths));
    
    
    
    
    
    printf("Group Kills = %i\n", suma_kills(p1k, p2k, p3k));
    printf("Group Deaths = %i\n", suma_deaths(p1d, p2d, p3d));
    kills = suma_kills(p1k, p2k, p3k);
    deaths = suma_deaths(p1d, p2d, p3d);
    
    printf("Group KD = %.03f\n", kd(kills, deaths));
    

    
    
    }