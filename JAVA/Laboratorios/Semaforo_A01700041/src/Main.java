import java.util.Scanner;

public class Main {
	
	public static void menu(){
		System.out.println("\nStreet Light Options : \n"
				+ "1.-Just see the Street Light\n"
				+ "2.-Press the button\n"
				+ "3.-Exit\n");
				
	}
	
	public static void clearScreen(){
		//Esto es mi intento de clear screen en JAVA
		//No encontre otra manera 
		System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n‌​\n\n\n\n");
	}
	
	
	public static void main(String[] args) throws InterruptedException {
		
		Scanner input = new Scanner(System.in);
		int option;
		
		//Aqui declaro tu Luz con la que el programa trabaja
		Luz tuLuz = new Luz(true, "GREEN");
		
	//Aqui pongo mi luz con los predeterminados que yo quiera
	//	Luz miluz = new Luz();
		
		
		do{
			menu();
			option = input.nextInt();
			input.nextLine();
			
			switch(option){
			
			case 1:	
				
				//Aqui emulo el semaforo 3 veces			
				clearScreen();
				tuLuz.streetLight();
				
				break;
			
			case 2:
				clearScreen();
				tuLuz.buttonPress();
				clearScreen();
				tuLuz.streetLight();
				break;
						
			
			}
					
			
		}while(option !=3);
		
		
		
		input.close();
	
	
	}

}
