import java.util.Random;

public class Main {

	public static void main(String[] args) {
		
		Random randy = new Random();
		int y = 1;
		
		
		
		for(int x=0; x<100;x++){
			
			y=(randy.nextInt(5));
			
			
			System.out.println(y);
		}
	}

}
