import java.util.Scanner;
public class Main {

	
	
	
	public static void main(String[] args) throws FullStackException{
		int option;
		Scanner input = new Scanner(System.in);
		Stack  ohstack = new Stack();
		System.out.println("Choose\n1. Stack Overflow Simulation\n2. Stack underflow Simulation");
		option = input.nextInt();
		input.nextLine();
		
		if(option == 1){
		
			for(int i = 0; i <= ohstack.getMax(); i++){
				
				System.out.println(ohstack.toString());
				ohstack.Push(9);
					
				
			}		
			
		}
		else if (option == 2){
			
				//First we will simulate 30 pushes on the stack
				System.out.println("First we will simulate 30 pushes -- press enter to continue");
				input.nextLine();
				for(int i = 0; i <= 30; i++){
				
				System.out.println(ohstack.toString());
				ohstack.Push(9);
					
				
			}
				System.out.println("Now we will pop till we underflow -- press enter to continue");
				input.nextLine();
				for(int i = 31; i>0 ; i++){
				
				System.out.println(ohstack.toString());
				ohstack.Pop();
					
				
			}
		}
		
		
	

	}

}
