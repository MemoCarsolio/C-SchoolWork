import java.util.Scanner;
public class strComparacion_A01700041 {

	public static void main(String[] args) {
	
		String s1,s2;
		Scanner input = new Scanner(System.in);

		System.out.println("Escribe el primer String");
		s1 = input.nextLine();
		
		System.out.println("Escribe el segundo String");
		s2 = input.nextLine();
		int x;
		
		x = s1.compareTo(s2);
				
		if(x == 0){			
			System.out.println("El String "+ s1 +" es igual al String " + s2);						
		}
		else if(x > 0){
			System.out.println("El String "+ s1 +" es mayor al String " + s2);							
		}
		else{
			System.out.println("El String "+ s1 +" es menor al String " + s2);
		}
		
		
		
		
		input.close();
	}

}
