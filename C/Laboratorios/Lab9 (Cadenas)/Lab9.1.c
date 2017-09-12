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
#define SIZE 100



//Esta función lo que hace es darte el # total de X, usa un for para contar

int cromosomas_x(char cromosomas[]){
    
    int count;
    int countx = 0;
    for (count = 0; count < SIZE; count++){
        if (cromosomas[count] == 'x'){
            countx++;
        }
    
    }
    return countx;
}

//Esta función lo que hace es darte el # total de X, usa un for para contar
int cromosomas_y(char cromosomas[]){
    
    int count;
    int countx = 0;
    for (count = 0; count < SIZE; count++){
        if (cromosomas[count] == 'y'){
            countx++;
        }
        
    }
    return countx;
}


/*Este procedimiento lo que hace es comparar los resultados de la funciones para
dar un resutado de cual es mayor o menor y imprimir que sexo es*/
void determina_sexo(char cromosomas[]){
    
    
    printf("numero de x: %i\n", cromosomas_x(cromosomas));
    printf("numero de y: %i\n", cromosomas_y(cromosomas));
    
    

    if (cromosomas_y(cromosomas) < cromosomas_x(cromosomas)){
        printf("\nsexo femenino");
        }
    else if (cromosomas_y(cromosomas) > cromosomas_x(cromosomas)){
        printf("\nsexo masculino");
    }
    else{
        printf("\nsexo indefinido");
    }
    
    

}

//aqui es mi quita espacios del string

//IMPORTANTE Decidi hacerme un reto y esta función no "imprime" sin espacios
//pero re-escribe el string para que no tenga espacios
void quita_espacios (char cromosomas[]){

    int i;
    int on = 1;
    for (i = 0; i < SIZE; i++){

        
            if (cromosomas[i] == ' '){
            
                if (cromosomas[i+on] == ' '){
                    while (cromosomas[i+on]  == ' '){
                        on++;
                    
                    }
                    cromosomas[i] = cromosomas[i+on];
                    cromosomas[i+on] = ' ';
                    on = 1;}
                    
                    else{
                    cromosomas[i] = cromosomas[i+on];
                    cromosomas[i+on] = ' ';
                        on = 1;
                
                    }
            
                }
        
    }
    puts(cromosomas);
}





//aqui esta mi main, uso un do while para el menu
int main (){
    
    
    int opcion = 0;
    char cromosomas[SIZE];

    do{
        
        
        printf("\n\nMENÚ DE OPCIONES\n\n1.- Define sexo\n2.- Imprimir sin espacios\n3.- salir\n ¿Opción?: ");
        scanf("%i%*c", &opcion);
        
        switch (opcion){
            
        
            case 1:
                printf("\nPonga las X y Y: ");
                gets(cromosomas);
                determina_sexo(cromosomas);
                

                break;
            case 2:
                printf("\nPonga las X y Y: ");
                gets(cromosomas);
                quita_espacios(cromosomas);

        }
    
    } while (opcion != 3);

    return 0;

}