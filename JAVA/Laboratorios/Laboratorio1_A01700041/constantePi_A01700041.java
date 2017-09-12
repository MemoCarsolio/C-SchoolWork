import java.util.Scanner;
public class constantePi_A01700041 {

	public static void main(String[] args) {
			
		double pi = 0, denominador = 1;
		int n = 1, c1 = 0;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Escriba el valor de N = ");
		n = input.nextInt();
		input.nextLine();
		
		while(c1 < n){
			
			if (c1 % 2 == 0) {
	            pi = pi + (1 / denominador);
	         } else {
	            pi = pi - (1 / denominador);
	         }
	         denominador = denominador + 2;
	        c1++;
	      }
			
			pi = pi * 4;
			System.out.println(pi);
			input.close();
		}
	}


