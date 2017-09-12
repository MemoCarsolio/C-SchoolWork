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


void alatoreo (){

    int contador;
    for(contador = 1; contador < 51; contador++){
        
        printf("%i.-%i\n", contador,  rand()%21);
        }
}




int main () {
    
    alatoreo();
    

}