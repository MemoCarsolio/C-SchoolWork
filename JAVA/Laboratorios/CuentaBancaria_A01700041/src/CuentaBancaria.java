
public class CuentaBancaria {
	
	private int num_de_cuenta;
	private float saldo;
	private String password;
	private boolean acceso;
	
	public CuentaBancaria(){
		num_de_cuenta = 0;
		saldo = 0;
		password = "nada";
		acceso = false;
	}

	public CuentaBancaria(int num_de_cuenta, float saldo, String password, boolean acceso){
		
		this.num_de_cuenta = num_de_cuenta;
		this.saldo = saldo;
		this.password = password;
		this.acceso = acceso;
		
		
	}
	
	public int getCuenta(){
		return num_de_cuenta;
	}
	public void setCuenta(int num_de_cuenta){
		this.num_de_cuenta = num_de_cuenta;
	}
	public String getPassword(){
		return password;
	}
	public void setPassword(String password){
		
		
		if (password.length() == 4){
			this.password = password;
		}
		else{
		System.out.println("el pin no es del tamaño requerido");
		}
		
	}
	public float getSaldo(){
		return saldo;
	}
	public boolean getAcceso(){
		return acceso;
	}
	public void accesoSwitch(){
		acceso = !acceso;
	}
	public void sacarSaldo(float x){
		if(saldo >= x){
			saldo = saldo - x;
		}
		else{
			System.out.println("Saldo es menor a la cantidad pedida");
		}
	}
	public void depositarSaldo(float x){
		saldo = saldo + x;
	}
	
	
	
	
}
