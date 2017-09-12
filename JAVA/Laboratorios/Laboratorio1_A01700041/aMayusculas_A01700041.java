import java.util.Scanner;
public class aMayusculas_A01700041 {

	public static void main(String[] args) {
		String x;
		Scanner input = new Scanner(System.in);
		
		System.out.println("Escriba el String que quiera cambiar a mayusculas");
		x = input.nextLine();
		x = x.toUpperCase();
		
		System.out.println("El String en mayusculas es "+ x);
		
		input.close();
	}

}
