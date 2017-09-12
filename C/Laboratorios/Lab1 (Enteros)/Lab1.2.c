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
    
    //Aqui estoy definiendo las constantes, en este caso es PI y un tercio
    float const p1 = 3.141592;
    float const t1 = .333333;
    
    //Esta es mi introducción al programa
    printf("Volumen de Cono Recto\n");
    
    //Aqui defino la variable del radio y pido su valor al usuario
    int r1 = 0;
    printf("radio:");
    scanf("%i%*c", &r1);
    
    //Aqui defino la variable de la altura y pido su valor al usuario
    int h1 = 0;
    printf("altura:");
    scanf("%i%*c", &h1);
    
    //Aqui se procesa la operación y se imprime el resultado 
    float v1 = 0;
    printf("Volumen: %f\n", v1 = t1*p1*r1*r1*h1);

    
}