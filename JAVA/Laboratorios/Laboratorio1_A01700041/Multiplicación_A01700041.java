import java.util.Scanner;

public class Multiplicación_A01700041 {
	
	public static void main(String[] args) {
		
			int x,y,r1 = 0;
			Scanner input = new Scanner(System.in);

			System.out.println("Escriba el valor del primer entero = ");
			x = input.nextInt();
			input.nextLine();
			
			System.out.println("Escriba el valor del segundo entero = ");
			y = input.nextInt();
			input.nextLine();
		
			int c1 = 1;			
			int negative = 0;
			int x1 = x,y1 = y;
			
			
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
		
			while (c1<= y1){
			
				r1 = r1 + x1;
				c1++;
			}
			if(negative == 1){
				r1 = r1 * -1;
			}
		
			System.out.println("El resultado de la multiplicación entre " + x + " y " + y + " es igual a " + r1);
			input.close();
	}
}
