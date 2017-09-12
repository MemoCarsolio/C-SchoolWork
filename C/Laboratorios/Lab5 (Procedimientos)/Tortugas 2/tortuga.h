//
//  tortuga.h
//  Lab5
//
//  Created by Guillermo Carsolio on 9/20/16.
//  Copyright © 2016 Guillermo Carsolio. All rights reserved.
//

#ifndef tortuga_h
#define tortuga_h


//Aqui declaro mis variables globales
int pochitoques;
int jicotecas;
int chiquiguaus;


//Aqui con este procedimiento imprimo las instrucciónes

void inicio () {

    printf("Escribe el numero de pochicotes, jicotecas  y chiquiguaus en orden\nPresione Enter despues de cada cantidad\n");

}



//Aqui en este procedimiento le doy valor a las variables globales
void pjc_p(int set_pochitoques, int set_jicoteas, int set_chiquiguaus) {
    
    
    
    pochitoques = set_pochitoques;
    jicotecas = set_jicoteas;
    chiquiguaus = set_chiquiguaus;
    
}


//se que asi no te lo pide las instrucciones, pero esto es mucho más sencillo
//nada más hacer un procedimiento que imprima todo
void imprimir_tortugas () {


    printf("%i pochitoques\n", pochitoques);
    printf("%i jicotecas\n", jicotecas);
    printf("%i chiquiguaus\n", chiquiguaus);


}




#endif /* tortuga_h */

