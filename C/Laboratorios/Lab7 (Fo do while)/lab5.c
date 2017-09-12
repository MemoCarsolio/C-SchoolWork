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


//decidí poner todo en funciones por que es mucho más fácil cambiar algo

//el primero es el #3 del menu que es el programa abierto y decidí hacer un programa sencillo


void factores_de_enteros(){
    
    
    //intro al programa
    printf("\nEste progarma te dice los números primos de cualquier entero positivo\n\nPon un número entero: ");
    
    //defino las variables y las escaneamos
    int num;
    scanf("%i%*c", &num);
    
    
    //aqui hago un for "loop" que repite los pasos para verificar que sea primo
    //si lo es lo imprime
    printf("Los numeros primos de %i son\n", num);
    int i;
    for (i=1;i<num;i++){
        
        if (num%i==00){
            printf("%i\n", i);
    
        }
    }
}



// este es el que pide 50 números aleatoreos
void alatoreo (){
    
    
// uso un do while por que estaba muy sencillo y necesitaba usarlo
    int contador=1;
    do{
     printf("%i.-%i\n", contador,  rand()%21);
        contador++;} while (contador < 51);
}


//aqui tengo que hacer un for que imprime la sumatoria de una formula

void formula_g (){
    
    
    // se que no es de buenas practicas pero estaba chico el programa por lo tanto
    //puse las variables aqui
    float i;
    int n;
    float fg;
    float resultado = 0;
   

    printf("\n Programa de g(n)\n n = ");
    scanf("%i%*c", &n);
    
    for (i=3; i <= n; i++){
        
        fg = sqrt(i-2)/(i*i);
        
        resultado = resultado + fg;
    
    }
    
    
    printf("resultado = %.04f\n", resultado);

}


// esta fue mi función favorita que es la del menu en la que uso un switch para elegir la opción
void menu (){
    
    int opcion;
    
    printf("\n1. Números Aleatoreos\n2. Fórmula G\n3. Abierto\n4. Salir\n Opción? ");
    scanf("%i%*c", &opcion);
    
    switch (opcion) {
        case 1:
            alatoreo();
            break;
            
        case 2:
            formula_g();
            break;
        case 3:
            factores_de_enteros();
            break;
      }
}



//el main es lo más limpio posible
int main () {
    
    //esto ejecuta todo
    menu();
    

}