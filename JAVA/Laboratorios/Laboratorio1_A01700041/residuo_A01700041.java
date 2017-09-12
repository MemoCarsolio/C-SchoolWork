import java.util.Scanner;

public class residuo_A01700041 {

	public static void main(String[] args) {
		
		int x,y, c1=1;
		Scanner input = new Scanner(System.in);
		
		System.out.println("Escribe el primer entero");
		x = input.nextInt();
		input.nextLine();
		
		System.out.println("Escribe el segundo entero");
		y = input.nextInt();
		input.nextLine();
		
		
					
		if ( y > x ){			
			System.out.println("el residuo es " + x);
			}
		
		else{	
			
			if(y == 0){
				System.out.println("no se puede dividir entre 0");	
			}
			else{
				while(c1 != 0){
				
					x = x - y;
					if ( y > x ){
					System.out.println("el residuo es " + x);	
						c1 = 0;
					}
								
				
				}
			}	
		}
				
		
		input.close();
	}

}
