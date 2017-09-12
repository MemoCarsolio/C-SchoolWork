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
#define SIZE 10



void inicializa_arreglo (int arreglo[]){
    
    
    //Uso un Ciclo para imprimir los 10 numeros enteros
    int i;
    
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        
        printf("%i: %i\n", i + 1, arreglo[i]);
    }

}



void captura_arreglo(int arreglo[]){
    
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("Da un valor: ");
        scanf("%i%*c", & arreglo[i]);
    }

}

void cuenta_impares (int arreglo[]) {

    captura_arreglo(arreglo);
    
    int i;
    int count = 0;
    for (i = 0; i < SIZE; i++) {
        
        if (arreglo[i] % 2 != 0){
            count++;
        }
    }
    printf("Cantidad de números impares: %i\n", count );

}

void sustituye_arreglo(int arreglo[]){
    
    captura_arreglo(arreglo);
    
    
    //puse las variables de x y y aqui porque es más comodo
    int x;
    printf("x = ");
    scanf("%i%*c", &x);
    int y;
    printf("y = ");
    scanf("%i%*c", &y);
    
    //uso un ciclo para cambiar x por y
    int i;
    for (i = 0; i < SIZE; i++){
        if (arreglo[i] == x){
            arreglo[i] = y;

        }
    }
}


void invierte_arreglo(int arreglo[]){
    
    int i;
    for(i = 0; i < SIZE/2; i++){
        int cambio = arreglo[i];
        arreglo[i] = arreglo[9-i];
        arreglo[9-i] = cambio;
        
    }

}





int main (){
    
    int arreglo[SIZE];
    
    int opcion = 0;
    
    
    do {
    printf("\n\nMENÚ DE OPCIONES\n\n1 Imprime arreglo\n2 Captura arreglo\n3 Elementos Impares del arreglo \n4 Sustituye arreglo \n5 Invierte arreglo \n6 salir\n ¿Opción?: ");
    scanf("%i%*c", &opcion);
    
    switch (opcion) {
        case 1:
            inicializa_arreglo(arreglo);
            break;
            
        case 2:
            captura_arreglo(arreglo);
            break;
        case 3:
            cuenta_impares(arreglo);
            
            break;
        case 4:
            sustituye_arreglo(arreglo);
            
            break;
        case 5:
            invierte_arreglo(arreglo);
            
            break;
            
    }} while ( opcion != 7 );
}

