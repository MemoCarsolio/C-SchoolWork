import java.util.Scanner;

public class Potencia_A01700041 {

	public static void main(String[] args) {
		double base, exponente, resultado = 1;

			Scanner  input = new Scanner(System.in);
			
			System.out.println("Escriba el valor de la base");
			base = input.nextDouble();
			input.nextLine();
			
			System.out.println("Escriba el valor del exponente");
			exponente = input.nextDouble();
			input.nextLine();
			
			int c1 = 1; 
			
			while (c1 <= exponente){
				resultado = resultado * base;
				c1++;
			}
			
			System.out.println( base + " a la potencia de " + exponente + " es igual a = " + resultado );	
				
				
			input.close();
	}

}