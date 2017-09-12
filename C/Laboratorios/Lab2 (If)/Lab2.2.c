/**
 *Laboratorio 2: Estatutos Condicionales
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/

#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O


int main (){
    
    //aqui mi introducción al programa
    printf("Este programa realiza diferentes funciones dependiendo el valor de x\n");
    
    //aqui definire la variable x y pedire su valor al usuario
    int x = 0;
    printf("Introduce el valor de x: ");
    scanf("%i%*c", &x);
    
    //aqui defino una nueva variable que me imprimira el resultado
    int r1 = 0;
    //aqui empiezo mi if statement con 3 deciciones depende el valor de x el resultado
    
    if (x <= -2){
        printf("Resultado de Operación: %i\n", r1 = x*x*2+4*x+2 );
    }
    else if (x >= -2 && x < 0){
        printf("Resultado de Operación: %i\n", r1 = 2);
    }
    else {
        printf("Resultado de Operación: %i\n", r1 = 3*x+1);
    }
        
    

}