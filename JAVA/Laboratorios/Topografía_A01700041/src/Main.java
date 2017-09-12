import java.util.Scanner;
public class Main {
	
	public static void menu(){
		System.out.println("Opciones\n"
				+ "1.- Definir Coordenadas\n"
				+ "2.- Información del terreno\n"
				+ "3.- Cambiar tamaño y coordenadas del terreno\n"
				+ "4.- Costo de limpieza del terreno\n"
				+ "5.- Area del terreno\n" 
				+ "6.- Salir");
	}

	public static void main(String[] args) {
		int tam, opcion = 0;
		Scanner input = new Scanner(System.in);
		
		
		
		
		//primero van a tener que crear el objeto
		System.out.println("Escriba la cantidad de vertices en su terreno"
				+ " (Que sea menor a 100 y mayor a 3)");
		tam = input.nextInt();
		input.nextLine();	
		Terreno tuterreno = new Terreno(tam);
		tuterreno.setPoints();
		tuterreno.calcSum();
		tuterreno.calcArea();
		tuterreno.calcCosto();
		
		
		
		
		do{
			
			
			
			//despues lo modifican
			menu();
			opcion = input.nextInt();
			input.nextLine();	
			
			switch(opcion){
			case 1:
					tuterreno.setPoints();
					tuterreno.calcSum();
					tuterreno.calcArea();
					tuterreno.calcCosto();
		
				break;
			case 2:
					System.out.println(tuterreno.toString());
				break;
			case 3: 
				System.out.println("Escriba la cantidad de vertices en su terreno"
						+ " (Que sea menor a 100 y mayor a 3)");
				tam = input.nextInt();
				input.nextLine();	
				tuterreno.setTam(tam);
				tuterreno.setPoints();
				tuterreno.calcSum();
				tuterreno.calcArea();
				tuterreno.calcCosto();

				break;
			case 4:
				System.out.println("El costo sera de $" + tuterreno.getCosto());
				break;
			case 5:
				System.out.println("El area es de" + tuterreno.getArea() + " m2");
				break;
					
			}
				
			
		
			
			
			
		}while(opcion != 6);
		
		
		
	
		
		
		input.close();
		
	}

}
