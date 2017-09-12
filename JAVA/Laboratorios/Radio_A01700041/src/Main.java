import java.util.Scanner;
public class Main {
	
		public static void menu(){
			//este es mi menu principal
			System.out.println("\nRadio Options: \n"
					+ "1.-On/Off Switch\n"
					+ "2.-Radio Status\n"
					+ "3.-Change Station\n"
					+ "4.-Change Volume\n"
					+ "5.-Change Frequency\n"
					+ "6.-Consult Frequency\n"
					+ "7.-Consult station\n"
					+ "8.-Consult Volume\n"
					+ "9.-Exit");
		
		}
			public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int amfm,vol, option=0 ;
		String frq;
		boolean on_off;
		
		//Voy a declarar un nuevo radio con el estado default
		Radio newradio = new Radio();
		
		System.out.println("Welcome to the RADIO program, were you can create and change your radio to your liking\n");
		
		//Aqui tengo el default del radio para que lo vea el usuario
		System.out.println(newradio.toSting());
		
		do{
		menu();
		option = input.nextInt();
		input.nextLine();
		
			switch(option){
			case 1:
				newradio.prenderApagar();
				
				on_off = newradio.getOn();
				if (on_off){
					System.out.println("The Radio is now ON");
				}
				else{
					System.out.println("The Radio is now OFF");
				}
				break;
			case 2:
				System.out.println(newradio.toSting());
				break;
			case 3:
				frq = newradio.getFrq();
				on_off = newradio.getOn();
				
				if(on_off){
					
					if(frq.equals("AM")){
						System.out.println("You are in AM so choose between 540 and 1600");
					}
					else if (frq.equals("FM")){
						System.out.println("You are in FM so choose between 88 and 108");
					}
					amfm = input.nextInt();
					input.nextLine();				
					newradio.setSta(amfm);	
				}	
				else{
					System.out.println("You can't change the station when radio is OFF");
				}
				
				break;
			case 4:
				on_off = newradio.getOn();
				
					if(on_off){
						System.out.println("Choose a volume between 0 and 10");
						vol = input.nextInt();
						newradio.setVol(vol);
				}	
				else{
					System.out.println("You can't change the volume when radio is OFF");
				}
									
				break;
			case 5:
				on_off = newradio.getOn();
				frq = newradio.getFrq();
				if(on_off){
					if(frq.equals("AM")){
						newradio.setFrq("FM");
						System.out.println("now you are in FM frequency");
						//Como cambio de frequencia no se puede quedar la misma estación entonces lo cambio
						newradio.setSta(88);
					}
					else if (frq.equals("FM")){
						newradio.setFrq("AM");
						System.out.println("now you are in AM frequency");
						//Como cambio de frequencia no se puede quedar la misma estación entonces lo cambio
						newradio.setSta(540);
					}
				}
				else{
					System.out.println("You can't change the frequency when radio is OFF");
				}
				
				break;
			case 6:
				System.out.println("The Frequency is " + newradio.getFrq());
				break;
			case 7:
				System.out.println("The Station is " + newradio.getSta());
				break;
			case 8:
				System.out.println("The volume is " + newradio.getVol());
				break;
						
			}		
		
		} while(option != 9);
		
		
		
		
		
		
		
		
		input.close();
		}
}

