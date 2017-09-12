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
#define RMAX 10
#define CMAX 10 


void llena_matriz(int matriz[RMAX][CMAX]) {

    int i;
    for (i =0; i< RMAX; i++){
        int p;
        for (p = 0; p < CMAX; p++){
            
            matriz[i][p] = rand() % 21 - 10;
    
        }
    }

}

void imprime_matriz(int matriz[RMAX][CMAX]){
    
    int r;
    for (r =0; r< RMAX; r++){
        int c;
        for (c = 0; c < CMAX; c++){
            
            printf("%i ", matriz[r][c]);
            
        }
        printf("\n");
    }
    
}

int cuenta_positivos(int matriz[RMAX][CMAX]){
    
    int r;
    int counter = 0;
    for (r =0; r< RMAX; r++){
        int c;
        
        for (c = 0; c < CMAX; c++){
            
            if (matriz[r][c] > 0){
            
                counter++;
                
            }
        }
     
    }
    
    return counter;
}

int suma_diagonal(int matriz[RMAX][CMAX]){

    int r;
    int c = 0;
    int sum = 0;
    
    
    for (r =0; r< RMAX; r++){
        
        sum = sum + matriz [r][c];
        c++;
        
        
    }

    
    return sum;

}


int da_valor_mayor (int matriz[RMAX][CMAX]){
    
    int r;
    int vmayor = 0;
    for (r =0; r< RMAX; r++){
        int c;
        
        for (c = 0; c < CMAX; c++){
            
            if (matriz[r][c] > vmayor){
                
                vmayor = matriz[r][c];
                
            }
        }
        
    }
    
    return vmayor;




}




int main () {


    int matriz[RMAX][CMAX];
    
    int opcion = 0;
    
    
    do{
        
        
        printf("\n\nMENÚ DE OPCIONES\n\n1.- llena matriz\n2.- Imprime matriz\n3.- Cuenta positivos en la matriz\n4.- Suma Diagonal\n5.- Mayor\n6.- salir\n ¿Opción?: ");
        scanf("%i%*c", &opcion);
        
        switch (opcion){
                
                
            case 1:
                
                llena_matriz(matriz);
                break;
            case 2:
                
                imprime_matriz(matriz);
                break;
            case 3:
                
                printf("Son %i números pósitivos", cuenta_positivos(matriz));
                break;
            case 4:
                
                printf("la suma diagonal es de %i", suma_diagonal(matriz));
                break;
            case 5:
                
                printf("El entero mayor es %i", da_valor_mayor(matriz));
                break;
        }
        
    } while (opcion != 6);



}