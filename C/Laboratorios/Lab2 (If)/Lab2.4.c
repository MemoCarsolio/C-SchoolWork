/**
 *Laboratorio 2: Estatutos Condicionales
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/

#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O




int main () {
    
    
    //Esta es mi introcucción al programa
    printf("Este programa es tu motivcación personal");
    //aqui estoy definiendo la variable las calificaciones
    int m1 = 0;
    printf("Inserte su calificación de 1-100: ");
    scanf("%i%*c", &m1);

    
    //Aqui dependiendo tu calificación doy un comentario dependiendo tu calificación
    if (m1 >= 90 && m1 <= 100){
        printf("Muy buen trabajo, continua así!\n");
    }
    else if (m1 >= 80 && m1 < 90){
        printf("Bueno, pero puedes mejorar\n");
    }
    else if (m1 >= 70 && m1 < 80){
        printf("No me parece suficiente, haz tus tareas\n");
    }
    else if (m1 >= 40 && m1 < 70){
        printf("Muy malo, estoy decepcionado\n");
    }
    else if (m1 >= 0 && m1 < 40)
        printf("Sin comentario\n");
    else
        printf("Calificación no valida\n");

    
}



