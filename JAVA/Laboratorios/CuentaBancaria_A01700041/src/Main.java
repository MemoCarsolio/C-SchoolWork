import java.util.Scanner;
public class Main {
	
	
	public static void menu1(){
		
		System.out.println("opciones:\n"
				+ "1.- crear cuenta\n"
				+ "2.- acceder cuenta\n"
				+ "3.- salir\n");
		
		
	}
	public static void menu2(){
		System.out.println("opciones:\n"
				+ "1.- depositar\n"
				+ "2.- sacar del cajero\n"
				+ "3.- consulta de saldo\n"
				+ "4.- salir\n");
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int opcion, opcion2 = 0, cuenta, x;
		String password;
		CuentaBancaria tucuenta = new CuentaBancaria();

		CuentaBancaria micuenta = new CuentaBancaria();
		micuenta.setCuenta(10);
		micuenta.setPassword("1000");
		
		do{
			menu1();
			opcion = input.nextInt();
			input.nextLine();
			
			switch(opcion){
			case 1:
				
				
				System.out.println("Su numero de cuenta es el 17");
				tucuenta.setCuenta(17);
				do{
				System.out.println("Escriba su pin, tiene que ser de 4 digitos");
				password= input.nextLine();	
				tucuenta.setPassword(password);
				}while(password.length() != 4);
				
				
				break;
			case 2:				
				do{
					if(tucuenta.getAcceso()){
					menu2();
					opcion2 = input.nextInt();
					input.nextLine();
					
					switch(opcion2){
					case 1:
						System.out.println("ingrese la cantidad que quiera depositar");
						x = input.nextInt();
						input.nextLine();
						tucuenta.depositarSaldo(x);
						
						break;
					case 2:
						System.out.println("ingrese la cantidad que quiera sacar del cajero");
						x = input.nextInt();
						input.nextLine();
						tucuenta.sacarSaldo(x);
						break;
					case 3:
						System.out.println("su saldo es de " + tucuenta.getSaldo());
						break;
					case 4:
						tucuenta.accesoSwitch();
						break;
						
						
						
						
						
						}
					}
					else{
						System.out.println("ingrese su cuenta");
						cuenta = input.nextInt();
						input.nextLine();
						
						if(tucuenta.getCuenta() == cuenta){
							System.out.println("ingrese password");
							password= input.nextLine();
							if(password.equals(tucuenta.getPassword())){
								tucuenta.accesoSwitch();
								opcion2 = 0;
							}
							else{
								System.out.println("password incorrecta");
								opcion2 = 4;
							}
							
						}
						else{
							System.out.println("cuenta no existe");
							opcion2 = 4;
						}
						
					}
					
								
					
				}while(opcion2 != 4);
				
				break;
			}
			
			
		}while(opcion != 3);
		
		
		
		
		
		input.close();
	}

}
