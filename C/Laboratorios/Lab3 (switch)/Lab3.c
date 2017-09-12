/**
 *Laboratorio 3: Estatutos Condicionales switch
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/


#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O
#include <math.h>    // Está librería es para poder hacer la función de raíz cuadrada



//En este File van a estar los 3 porblemas
int main () {

    //primero defino mi variable pg1 que es la que escoge el programa
            int pg1 = 0;
    
    //Aqui voy a hacer una introducción a los programas y le voy a pedir al usuario cual quiere probar
    printf("Escoja un programa \n1 Terremoto\n2 Aceleración Centrípeta\n3 Sopresa (Abierto)\n¿Qué número quiere?: ");
    scanf("%i%*c", &pg1);
    
    //estos son los ifs que individualmente son cada programa
    
    //Programa terremoto y la escala de ritcher
    if (pg1 == 1) {
        
        printf("\n\nTerremoto y Escala de Ritcher\n\n");
        
        //Aqui defino la variable de la magnitud y voy a pedirle al usuario su valor
        
        int m1 = 0;
        printf("Escriba la magnitud del terremoto en la escala de Ritcher: ");
        scanf("%i%*c", &m1);
        
        //aqui empiezo el switch y con cada caso le doy una retroalimentación al usuario
        
        switch (m1) {
        //Cada caso me va a dar una respuesta
        //pero los que tienen la misma nada mas al más alto le pongo el print y el break
            case 3:
            case 4:
                printf("Generalmente no se siente, pero es registrado\n");
                break;
            case 5:
                printf("A menudo se siente, pero sólo causa daños menores\n");
                break;
            case 6:
                printf("Ocasiona daños ligeros a edificios\n");
                break;
            case 7:
                printf("Puedo ocasionar daños severos en área muy poblada\n");
                break;
            case 8:
            case 9:
                printf("Terremoto mayor. Causa grandes daños\n");
                break;
            case 10:
                printf("Gran terremoto. Destrucción total en comunidades cercanas\n");
                break;
            default:
                printf("Escala no existe");
        }
        
    }
    
    //Programa de la Aceleración centripeta
    else if (pg1 == 2){
        
        printf("\n\nAceleración Centripeta\n\n");
        
        //Aqui defino la variables de seccion para que el usuario escoja que quiere hacer
        
        int s1 = 0;
        printf("\n1 Aceleración centrípeta de una partícula\n2 Velocidad de una partícula\n3 Radio de la circunferencia en que se mueve una partícula\n¿Qué valor quiere obtener?: ");
        scanf("%i%*c", &s1);
        
        //aqui empieza el switch y depende el caso (lo que se quiere obtener) hago la operación
        
        switch (s1){
            case 1:
                //aqui defino la variables de velocidad y le pido su valo al usuario
                printf("\n\nCual es la velocidad: ");
                float v1 = 0;
                scanf("%f%*c", &v1);
                
                //aqui defino la variables del radio y le pido su valo al usuario
                printf("Cual el radio: ");
                float r1 = 0;
                scanf("%f%*c", &r1);
                
                //aqui defino la variable de Aceleración Centripeta y le imprimo el resultado de
                //la operación al usuario
            
                float ac1 = 0;
                printf("Aceleración Centripeta = %f\n", ac1 = (v1*v1)/r1);
                break;
                
            case 2:
                //aqui defino la variables de la Aceleración Centripeta y le pido su valo al usuario
                printf("\n\ncual es la Aceleración Centripeta: ");
                int ac2 = 0;
                scanf("%i%*c", &ac2);
                
                //aqui defino la variables del radio y le pido su valo al usuario
                printf("Cual el radio: ");
                int r2 = 0;
                scanf("%i%*c", &r2);
                
                //aqui defino la variable de Velocidad como float y le imprimo el resultado de
                //la operación al usuario
                float v2 = 0;
                printf("Velocidad de una partícula = %f\n", v2 = sqrt(ac2*r2));
                break;
                
            case 3:
                //aqui defino la variables de velocidad y le pido su valo al usuario
                printf("\n\nCual es la velocidad: ");
                float v3 = 0;
                scanf("%f%*c", &v3);
                
                //aqui defino la variables de la Aceleración Centripeta y le pido su valo al usuario
                printf("\n\ncual es la Aceleración Centripeta: ");
                float ac3 = 0;
                scanf("%f%*c", &ac3);
                
                //aqui defino la variable de Aceleración Centripeta como float y le imprimo el resultado de
                //la operación al usuario
                
                float r3;
                printf("Aceleración Centripeta = %.02f\n", r3 = (v3*v3)/ac3);
                break;
            default:
            printf("no escojiste ningún valor ábil");
        }
    
    }
    
    
    // este es la última opción de programa, Este programa te hace diferentes operaciones usando switch
    else if (pg1 == 3) {
        
        //esta es la introducción y le pregunto al usuario que operación quiere hacer
        printf("\n\nPrograma de operaciones\n");
    
    
        printf("\n1 Suma o Resta\n2 Multiplicación o Divición\n3 Raíz o Potencia\n¿Qué operación quieres hacer?: ");
        
        //esta es la variable para la decición de que grupo de operaciónes quiere
        int ds4;
        scanf("%i%*c", &ds4);
        
        //aqui empieza el switch
        switch (ds4){
        
            //el primer caso es el de suma y resta
            case 1:
                
               //primero le pregunto que quiere si sumar o restar
                printf("\n1 Sumar (a + b) \n2 Restar (a - b)\n¿Qué quiere?: ");
                int swd1;
                scanf("%i%*c", &swd1);
                
                //aqui le pido los numeros que va a sumar o restar
                printf("Digame el número a:");
                int sm1;
                scanf("%i%*c", &sm1);
                
                printf("Digame el número b:");
                int sm2;
                scanf("%i%*c", &sm2);
                
                
                //aqui es donde ya dependiendo lo que decidio el usuario hago la operación
                int resultado_sr;
                
                switch (swd1){
                    case 1:
                        
                    resultado_sr = sm1 + sm2;
                        
                        printf("El resultado es: %i\n", resultado_sr);
                        
                        break;
                        
                    case 2:
                        resultado_sr = sm1 - sm2;
                        
                        printf("El resultado es: %i\n", resultado_sr);
                        
                        break;
                
                    default: printf("no escojiste ningún valor ábil\n");
                
                }
                
                break;
                
            case 2:
                
                //primero le pregunto que quiere si multiplicar o dividir
                printf("\n1 Multiplicar (a * b) \n2 Dividir (a / b)\n¿Qué quiere?: ");
                int swd2;
                scanf("%i%*c", &swd2);
                
                //aqui le pido los numeros que va a multiplicar o dividir
                printf("Digame el número a:");
                float dm1;
                scanf("%f%*c", &dm1);
                
                printf("Digame el número b:");
                float dm2;
                scanf("%f%*c", &dm2);
                
                
                //aqui es donde ya dependiendo lo que decidio el usuario hago la operación
                float resultado_dm;
                
                switch (swd2){
                    case 1:
                        
                        resultado_dm = dm1 * dm2;
                        
                        printf("El resultado es: %.02f\n", resultado_dm);
                        
                        break;
                        
                    case 2:
                        resultado_dm = dm1 / dm2;
                        
                        printf("El resultado es: %.02f\n", resultado_dm);
                        
                        break;
                        
                    default: printf("no escojiste ningún valor ábil\n");
                    }

        
        }
        
    
    
    }
    
    
    
    else {
        printf("No existe programa\n");}
    
}


