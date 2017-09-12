/**
 *Laboratorio 4: Funciones
 *author: Guillermo Carsolio
 *Matricula: A01700041
 *Date:26/08/16
 **/


#include <stdlib.h>  //librería estanda
#include <stdio.h>   // Librería de E/O
#include <math.h>    // Librería de Mates extras
#include "tortuga.h"

int main() {
    
    //este proceso le pide al usuario que poner
    inicio();
    
    
    //aqui escaneo lo que le pedí al usuario
    int set_pochitoques = 0;
    scanf("%i%*c", &set_pochitoques);
    
    int set_jicoteas = 0;
    scanf("%i%*c", &set_jicoteas);
    
    
    int set_chiquiguaus = 0;
    scanf("%i%*c", &set_chiquiguaus);

    
    //Aqui le pongo su valor a las variables globales
    pjc_p(set_pochitoques, set_jicoteas, set_chiquiguaus);
    
    
    //aqui imrpimo lo último
    imprimir_tortugas();
    
    
}
