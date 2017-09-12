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
#define LONGITUD 255
#define FRASE 200


//esta función crea un archivo con el nombre que te pide
void escribir_en_archivo (char nombre_archivo[LONGITUD]){
    
    
    printf("Escribe el nombre de el archivo con terminación txt\n");
    gets(nombre_archivo);
    char frase[FRASE];
    
    
    //Abre el archivo que escribes
    FILE *archivo;
   

    archivo=fopen(nombre_archivo,"w");
    
    int i;
    for(i=1; i<=5; i++)
    {
        //Escribes tu frase 5 veces
        printf("\%i.-nFrase:  ",i);
        gets(frase);
        fprintf(archivo,"%s",frase);
        fprintf(archivo,"\n");
    }
    fclose(archivo);
    
    
}


void escribir_con_formato (){
    
    //abre el file y declara las variables
    FILE *archivo;
    archivo = fopen("calificaciones.txt", "w");
    char nombre_a[FRASE], carrera[4];
    int calificacion;
    
    
    int i;
    int students;
    printf("Cuantos estudiantes quiere guardar en el archivo?");
    scanf("%i%*c", &students);
    for(i =0; i < students; i++){
        
        
        //escanea la información
        printf("Nombre:");
        gets(nombre_a);
        printf("Carrera:");
        gets(carrera);
        printf("Calificación: ");
        scanf("%i%*c", &calificacion);
        
        //Imprime en el archivo
        fprintf(archivo,"%s,", nombre_a);
        fprintf(archivo," %s,", carrera);
        fprintf(archivo," %i.", calificacion);
        fprintf(archivo,"\n");
        
    
    }
    
    //Cierra el archivo
    fclose(archivo);


}

void escribe_en_bitacora(char nombre_archivo[LONGITUD]){

    printf("Escribe el nombre de el archivo con terminación txt: ");
    gets(nombre_archivo);
    
    
    char bitacora[LONGITUD];
    //Abre el archivo que escribes
    FILE *archivo;
    archivo=fopen(nombre_archivo,"w");
    
    int i;
    char exit;
    
    // pequeña instrucción
    printf("\n ponga asterisco al final de la ultima frase que quiera poner para frenar programa\n");

    
    do{
    
        
        
    //Esto lo encontre en internet, es para poder poner el tiempo al inicio de la bitacora
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char tiempo_final[128];
    strftime(tiempo_final,128,"%d/%m/%y %H:%M:%S",tlocal);
    
    
    printf("Escribe lo que quieres que esta en la bitacora: ");
    gets(bitacora);
        
        //Esto es para poder verificar el asterisco para acabar el programa
        //y tambien quitarlo de la bitacora
        i = strlen(bitacora);
        exit = bitacora[i-1];
        bitacora[i-1] = ' ';
        //aqui imprimo bitacora
       fprintf(archivo,"%s\n\n",tiempo_final);
       fprintf(archivo,"%s\n\n", bitacora);
       
        
        
    }while(exit != '*');
    
    fclose(archivo);

}

//Este procedimiento es para codificar un mensaje cambiando el orden de letra
void esconde_en_archivo(){

    char frase[FRASE];
    
    
    //Abre el archivo que escribes
    FILE *archivo;
    archivo=fopen("mensaje_secreto.txt","w");
    
    printf("\nEscribe tu mensaje secreto: ");
    gets(frase);
    
    
    //uso un for para verificar cada caracter y arreglar diferentes casos
    int i;
    for(i=0; i<FRASE; i++)
    {
        
        
        if (frase[i]>=65&&frase[i]<=122){
        if (frase[i] == ' '){
        
        
        
        }
        else if(frase[i] == 90){
            frase[i] = 65;
        
        }
        else if(frase[i] == 122){
                frase[i] = 97;
        
        }
        else {
            frase[i] = frase[i]+1;
        
        
        }
        
        }


}
    
    fprintf(archivo, "%s", frase);
    fclose(archivo);

}

void imprime_archivo(char nombre_archivo[LONGITUD]){

    //pide al usuario el archivo que quiera leer
    printf("Escribe el nombre de el archivo que quiera leer: ");
    gets(nombre_archivo);
    
    
    
    //limite de texto
    char texto[5000];
    
    //abre archivo
    FILE *archivo;
    //lee archivo
    archivo=fopen(nombre_archivo,"r");
    //ciclo de impresión hasta que ya no haya texto
    while(fgets(texto,1000,archivo)!='\0'){
        printf("%s",texto);}
    
    fclose(archivo);
    
    
    
    
    
}

//en está función se cuenta usando un while
int cuenta_consonantes (char nombre_archivo[])
{
    int c, n=0;
    FILE* archivo;
    if((archivo=fopen(nombre_archivo,"rt"))==NULL)
    {
        printf("no hay archivo");
        return 0;
    }
    
    //para contar consonantes
    while((c=getc(archivo))!=EOF)
    {
        if(isalpha(c))
        {
            if(c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U'&&c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!=' '&&c!='\n')
                n++;
        }
    }
    fclose(archivo);
    return n;
}


//EstA FUNCIÓN LEE EL archivo
void leer_con_formato(){
    FILE *leer;
    char string[5000];
    leer=fopen("calificiones.txt","r");
    while(leer!=EOF)
    {
        while(fgets(string,5000,leer)!='\0')
        {
            printf("%s",string);
        }
        
    }
    fclose(leer);
}


//decifrar lo que hicimos secreto antes
void encuentra_en_archivo()
{
    int i,ac,var,x;
    char frase[FRASE];
    
    
    //Abre el archivo
    FILE *read;
    read=fopen("mensaje secreto.txt","r");
    
    
    
    while(fgets(frase,1000,read)!='\0')
    {
        
        x=strlen(frase);
        
    }
    
    
    
    
    for(i=0; i<=x; i++)
    {
        var=(int)frase[i];
        
        //Checa casos especial
        if ((var>=65&&var<=90)||(var>=97&&var<=122))
        {
            if(var==65)
                var=90;
            
            if(var==97)
                var=122;
            
            var=var-1;
        }
        
        
        
        frase[i]=var;    }
    
    //Imprime como cadena
    printf("%s",frase);
    fclose(read);
    
    
    
    
}

int main(){
    
    char nombre_archivo[LONGITUD];
    
    
    int opcion = 0;
    
    
    //Uso un do while para el menu, de manera que puedas volver a elegir una opción
    do{
        
        
        printf("\n\nMENÚ DE OPCIONES\n\n1.- Escribir en Archivo \n2.- Guarda datos de alumnos\n3.- Escribe en bitacora\n4.- Mensaje secreto\n5.- Imprime archivo\n6.- Cuenta consonantes\n7.- Imprime archivo\n8.- Imprime archivo\n9.- salir\n ¿Opción?: ");
        scanf("%i%*c", &opcion);
        
        
        //uso un switch para las opciones
        switch (opcion){
                
                
            case 1:
                
                escribir_en_archivo(nombre_archivo);
             
                break;
            case 2:
                
                escribir_con_formato();
                
                break;
            case 3:
                
                escribe_en_bitacora(nombre_archivo);
                
                break;
            case 4:
                esconde_en_archivo();
                
                break;
            case 5:
                imprime_archivo(nombre_archivo);
                
                break;
            case 6:
                printf("Inserta el archivo que quiera leer:  ");
                gets(nombre_archivo);
                printf("Número de Consonantes es: %i", cuenta_consonantes(nombre_archivo));
                
                break;
            case 7:
                leer_con_formato();
                
                break;
            case 8:
                encuentra_en_archivo();
                
                break;
                
        }
        
    } while (opcion != 9);
    
    
    

}