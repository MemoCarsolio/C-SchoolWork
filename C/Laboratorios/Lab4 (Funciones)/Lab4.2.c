/**
 *Laboratorio 4: Funciones
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/


#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O
#include <math.h>    // Librería de Mates extras


//aqui empiezo miss funciones

//está vez son 3 y muy sencillas

float grados_radianes(int grados){
    
    return grados * (M_PI/180);
}


//estas dos usan la primera función para poder operar
float secante (float grados_radianes){

    return 1 / cos(grados_radianes);

}

float cosecante (float grados_radianes){

    return 1 / sin(grados_radianes);

}



//aqui ya comienzo el main que es lo que ejecuta el programa
int main (){
    
    
    //primero defino mi variable pg1 que es la que escoge el programa
    int pg1 = 0;
    
    //Aqui voy a hacer una introducción a los programas y le voy a pedir al usuario cual quiere probar
    printf("Identidades Trigonométrica\n\n1 Secante\n2 Cosecante\n3 Salir\n¿Opción?: ");
    scanf("%i%*c", &pg1);
    
    
    //aqui comienzo un switch para el menu
    switch (pg1) {
        case 1:{
            
            //Aqui defino mi valor de grados y le pido su valor al usuario
            int grados= 0;
            printf("\n\nEscriba los grados : ");
            scanf("%i%*c", &grados);
            
            //aqui mando los grados a una función para que lo hagan a radianes y los imprimo
            printf("Radianes %f\n", grados_radianes(grados));
            
            //aqui mando esos radianes a otra función para sacar el resultado de secante y lo imrpimo
            printf("sec(%i) = %f\n",grados, secante(grados_radianes(grados)));
            
            
            break;
            
    
        }
        case 2: {
            
            //Aqui defino mi valor de grados y le pido su valor al usuario
            int grados= 0;
            printf("\n\nEscriba los grados : ");
            scanf("%i%*c", &grados);
            
            //aqui mando los grados a una función para que lo hagan a radianes y los imprimo
            printf("Radianes %f\n", grados_radianes(grados));
            
            //aqui mando esos radianes a otra función para sacar el resultado de cosecante y lo imrpimo
            printf("csc(%i) = %f\n",grados, cosecante(grados_radianes(grados)));
            
            
            break;
            
        }
        default:
            break;
            
            return 0;

    }


}