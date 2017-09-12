/**
 *Laboratorio 2: Estatutos Condicionales
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/

#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O


int main (){
    
    //aqui le introdusco al usuario el programa
    printf("Este programa te dice la velocidad\n");
    
    //aqui defino la variable de distancia (d1) y le pido su valor al usuario
    int d1 = 0;
    printf("Cual fue la distancia: ");
    scanf("%i%*c", &d1);
    
    //aqui defino la variable del tiempo (t1) y le pido su valor al usuario
    int t1 = 0;
    printf("Cual fue el tiempo: ");
    scanf("%i%*c", &t1);
    
   
   /**
    aqui hago un sistema de deciciones, primero veo si la operación es invalida (cuando tiempo = 0),
    despues veo si la velocidad es 0 (Cuando distanciao es = 0),
    Finalmete ya cuando veo que la operación es posible la hace el programa y la imprime 
    **/
    
    if (t1 == 0){
        printf("operación invalida\n");}
    else if (d1 == 0){
        printf("La velocidad fue: 0\n");}
    else{
        float v1 = 0;
        printf("la velocidad fue: %f\n", v1 = d1/t1);}
    
    

}