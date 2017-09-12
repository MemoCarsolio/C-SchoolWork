
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
    
    //Son 3 Lineas |1.Defino mi variable v1|2.Le pido al usuario el valor de la variable|3.Registro el valor dado por el usuario|
    int v1 = 0;
    printf("dame el valor de A: ");
    scanf("%i%*c", &v1);
    
    //Son 3 Lineas |1.Defino mi variable v1|2.Le pido al usuario el valor de la variable|3.Registro el valor dado por el usuario|
    int v2 = 0;
    printf("dame el valor de B: ");
    scanf("%i%*c", &v2);
    
    //Son 3 Lineas |1.Defino mi variable v1|2.Le pido al usuario el valor de la variable|3.Registro el valor dado por el usuario|
    int v3 = 0;
    printf("dame el valor de C: ");
    scanf("%i%*c", &v3);
    
    //Son 5 Lineas |1.Defino mi variable aux|2,3,4,5. Imprimo los resultados de las operaciones definidas|
    int aux = 0;
    printf("A/B = %i\n", aux = v1/v2);
    printf("A%cB = %i\n",'%',aux = v1%v2);
    printf("A/B-C = %i\n", aux = v1/v2-v3);
    printf("A/(B-C) = %i\n", aux = v1/(v2-v3));
    
    //Fin del programa

}