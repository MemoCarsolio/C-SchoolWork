/**
 *Laboratorio 1: Variables y Operadores
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:19/08/16
 **/

#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O

//Inicio del programa

int main () {
    
    //El programa va a clacular los minutos entre goles de un jugador que juega 90 minutos de un partido con penales y sin penales
    printf("Este programa calcula los minutos entre goles con penales o sin penales\n");
    
    
    //Aqui declaro la variable de goles y pido su valor al usuario
    int g1 = 0;
    printf("Cuantos goles metio:");
    scanf("%i%*c", &g1);
    
    //Aqui declaro la variable de los partidos y pido su valor al usuario
    int p1 = 0;
    printf("Cuantos partidos jugo:");
    scanf("%i%*c", &p1);
    
    //Aqui declaro la variable de los penales y pido su valor al usuario
    int gp1 = 0;
    printf("de esos goles cuantos fueron penales:");
    scanf("%i%*c", &gp1);
    
    //Aqui declaro una última variable y hago las operaciones y imrpimo los resultados
    int gpm1 = 0;
    printf("Goles por minuto: %i\n", gpm1 = (p1*90)/g1);
    printf("Goles por minuto sin penales: %i\n", gpm1 = (p1*90)/(g1-gp1) );
    
    //fin del programa
    

}