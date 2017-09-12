import java.util.Scanner;

public class Main {
	
	public static void menu(){
		
		System.out.println("Opciones\n"
				+ "1.- Agregar un ejemplar al catálogo\n"
				+ "2.- Quitar un ejemplar del catalogo\n"
				+ "3.- Checar ejemplares por autor\n"
				+ "4.- Checar canción en el catálogo\n"
				+ "5.- Mostrar los libros del catálogo\n"
				+ "6.- Mostrar canciones del catálogo\n"
				+ "7.- salir\n");
		
		
	}

	
	//No pude resolverlo, becario ---- no lo intentes jajajajajajja no funciona bien
	//tengo los metodos necesarios pero al declarar el objeto en el arreglo tengo un problema
	//y me di por vencido ---- suerte becario
	
	
	
	
	public static void main(String[] args) {
		int opcion = 0;
		
		Scanner input = new Scanner(System.in);
		
		Catalogo tucatalogo = new Catalogo();
		
		
		
		do{
	
			menu();
			opcion = input.nextInt();
			input.nextLine();
			
			switch(opcion){	
			
			case 1:
						
				if(tucatalogo.getTieneEspacio()){
					
				int i;
				System.out.println("Quieres agregar un\n 1.- libro\n 2.- Musica");
				i = input.nextInt();
				input.nextLine();
				
				if(i == 1){
					Libro tuarticulo = new Libro();
					
					System.out.println("Nombre: ");
					tuarticulo.titulo = input.nextLine();
					System.out.println("Año: ");
					tuarticulo.anio = input.nextInt();
					input.nextLine();
					System.out.println("Autor: ");
					tuarticulo.autor = input.nextLine();
					System.out.println("numero de páginas: ");
					tuarticulo.num_paginas = input.nextInt();
					input.nextLine();
					
					tuarticulo.setDisponible(true);
					tuarticulo.setCodigo(tucatalogo.getIndice());
					
					tucatalogo.agregarArticulos(tuarticulo);
					
					
					
					}
				else if (i == 2){
					Musica tuarticulo = new Musica();
					
					System.out.println("Nombre: ");
					tuarticulo.titulo = input.nextLine();
					System.out.println("Año: ");
					tuarticulo.anio = input.nextInt();
					input.nextLine();
					System.out.println("formato: ");
					tuarticulo.formato = input.nextLine();
					System.out.println("interprete: ");
					tuarticulo.interprete = input.nextLine();
					
					
					tuarticulo.setDisponible(true);
					tuarticulo.setCodigo(tucatalogo.getIndice());
					
					tucatalogo.agregarArticulos(tuarticulo);
					}
				}
				
				else{
					System.out.println("El catálogo no tiene espacio");

				}
				break;
			case 2:
				int opcquit = 0;
				
				if(tucatalogo.getIndice() > 0){
					
						System.out.println("El catálogo tiene " + tucatalogo.getIndice() + " Articulos\n¿cual quiere quitar?");
						opcquit = input.nextInt();
						input.nextLine();
					
						System.out.println("El codigo de " + opcquit + " es ");
							
						tucatalogo.quitarArticulo(opcquit);
				}
						
				else{
					System.out.println("El catalogo está lleno");
				}
					
				break;
			
			
			}
		}while(opcion != 7);		
		
		input.close();
	}

}
