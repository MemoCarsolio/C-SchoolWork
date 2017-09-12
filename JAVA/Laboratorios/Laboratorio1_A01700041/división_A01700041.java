import java.util.Scanner;
public class división_A01700041 {

	public static void main(String[] args) {
	
		int x, y;
		Scanner input = new Scanner(System.in);
		
		System.out.println("Excribe el primer entero");
		x = input.nextInt();
		input.nextLine();
		
		System.out.println("Excribe el segundo entero con el cual quieres dividir el primer entero");
		y = input.nextInt();
		input.nextLine();
		
		
	
		
		if (y == 0){
			System.out.println("No se puede dividir entre 0");
		}
		else{
			
		int c1 = 0;	
		int x1 = x, y1 = y;
		int negative = 0;
		
		if(x < 0 && y < 0){
			x1 = x1 * -1;
			y1 = y1 * -1;
		}
		else if (y < 0){
			negative = 1; 
			y1 = y1 * -1;
		}
		else if (x < 0){
			negative = 1; 
			x1 = x1 * -1;
		}
		
		
		while (x1 >= 1){
			
			x1 = x1-y1;
			c1++;
			
		}
		if(negative == 1){
			c1 = c1 * -1;
		}
		System.out.println("el numero "+ x +" entre " + y + " = "+ c1);
		input.close();
		}
		
		
		
	}

}
