/**
 *Laboratorio 2: Estatutos Condicionales
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/

#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O




int main () {
    
    //aqui estoy definiendo la variable de la temperatura y pidiendole al usuario su valor
    int tg1 = 0;
    printf("Inserte la temperatura en grados: ");
    scanf("%i%*c", &tg1);
    
    //Aqui pongo la introducción a la respuesta
    printf("El resultado es: ");
    
    //Aqui hago unn toma de 5 deciciones dependiendo el valor de tg1 imprime la respuesta requerrida
    if ( tg1 >= 100){
        printf("Vapor\n");
    }
    else if ( tg1 < 100 && tg1 >= 30){
        printf("Caliente\n");
    }
    else if ( tg1 < 30 && tg1 >= 0){
        printf("fría\n");
    }
    else if ( tg1 < 0 && tg1 >= -273){
        printf("Congelada\n");
    }
    else
        printf("Temperatura inexistente\n");
        
}



