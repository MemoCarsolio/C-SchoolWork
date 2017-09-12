/**
 *Laboratorio 4: Funciones
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/


#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O
#include <math.h>    // Librería de Mates extras



//Aqui están las diferentes funciones

//En este caso son 2 y sus opoeraciones son muy sencillas
float pies_metros (float pies1){
    
    
    return pies1/3.2808;
}

float metros_pies (float metros1){
    
    
    return metros1*3.2808;
}



//aqui ya comienzo el main que es lo que ejecuta el programa
int main () {

    
    
    
    
    //primero defino mi variable pg1 que es la que escoge el programa
    int pg1 = 0;
    
    //Aqui voy a hacer una introducción a los programas y le voy a pedir al usuario cual quiere probar
    printf("Escoja un programa \n1 Pies a Metros\n2 Metros a Pies\n3 Salir\n¿Opción?: ");
    scanf("%i%*c", &pg1);
    
    
    //aqui comienzo un switch para el menu
    switch (pg1) {
        case 1:{
            
            //Aqui defino mi valor de pies y le pido su valor al usuario
            float pies1 = 0;
            printf("Escriba la cantidad en pies: ");
            scanf("%f%*c", &pies1);

            
            //aqui imprimo y mando a llamar el resultado de la función
            printf("Metros: %f\n", pies_metros(pies1));
            break;
            
        }
        case 2: {
            
            //Aqui defino mi valor de metros y le pido su valor al usuario
            float metros1 = 0;
            printf("Escriba la cantidad en metros: ");
            scanf("%f%*c", &metros1);
            
            
            //aqui imprimo y mando a llamar el resultado de la función
            printf("pies: %f\n", metros_pies (metros1));
            break;
        
        
        }
        default:
            break;
            
            return 0;
    }
    

    
    
    







}