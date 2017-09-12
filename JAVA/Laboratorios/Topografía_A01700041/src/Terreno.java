
import java.util.Scanner;

public class Terreno {
	
	/*No encontre la manera de lograr escojer un tan (Tamaño)
	que sea declarado ya como el tamaño del arrego
	entonces el arreglo es más grande pero el tam define cuanto
	se va a usar de ese arreglo - el limite es 100*/
	
	
	private int tam;
	private float x[] = new float[100];
	private float y[] = new float[100];
	private float area;
	private float sum_inf;
	private float sum_sup;
	private float costo;
	
	Scanner input = new Scanner(System.in);
	
	//Puse esta porque es básica pero no la voy a usar
	public Terreno(){
		tam = 6;	
		//float x[] = {0,0,0,0,0,0};
		//float y[] = {0,0,0,0,0,0};
		area = 0;
		costo = 0;
		sum_sup = 0;
		sum_inf = 0;
	}
	
	//Solo quiero que el tamaño sea cambiable
	public Terreno(int tam1){

		if(tam1 <= 100 && tam1 >=3 ){
		tam = tam1;
		sum_inf = 0;
		sum_sup = 0;
		}
		else{
			System.out.println("La cantidad de vertices no es correcta");
		}
			
	}
	
	public String toString(){
		String estado = "";
		
		estado = "El terreno tiene "+ tam + " vertices, mide "+ area + " m2 y la liempieza "
				+ "cuesta $" + costo;
	
		return estado;
		
	}
	
	public void setTam(int tam){
		this.tam = tam;
	}
	public int getTam(){
		return tam;
	}
	
	
	public void setPoints(){				
	
		sum_inf = 0;
		sum_sup = 0;
		
		int count;
		for (count = 0; count < tam; count++){
			
			System.out.println("Vertice num: " + (count+1) + "\n");
			System.out.println("valor x = ");
			x[count] = input.nextFloat();
			input.nextLine();
			System.out.println("valor y = ");
			y[count] = input.nextFloat();
			input.nextLine();
		
		}
	}
	
	public void calcSum(){
		
		int count;
		
		for(count=0; count < tam; count++){
			
			if((count + 1) != tam){
							
			sum_sup += y[count]* x[count + 1];
			sum_inf += x[count]* y[count + 1];
		}
			else{
			sum_sup += y[count]* x[0];
			sum_inf += x[count]* y[0];
			}
			
		}	
		//Es como lo de abajo pero aplica para cualquier cantidad de x o y menor a 100
		//sum_sup = y[0]*x[1] + y[1]*x[2] + y[2]*x[3] + y[3]*x[4] + y[4]*x[5] + y[5]*x[0] 
		//sum_inf = x[0]*y[1] + x[1]*y[2] + x[2]*y[3] + x[3]*y[4] + x[4]*y[5] + x[5]*y[0] 
		
	}
	
	
	public float getSumsup(){
		return sum_sup;
	}
	public float getSuminf(){
		return sum_inf;
	}
	
	public void calcArea(){
		
		float diferencia;
		
		diferencia = sum_inf - sum_sup;
		
		if(diferencia < 0){
			diferencia *= -1;
		}
			
		area = (diferencia) / 2;	
		
	}
	
	public float getArea(){
		return area;
	}
	
	public void calcCosto(){	
		costo = area*20;		
	}
	public float getCosto(){
		return costo;
	}
	
	
		
	
	
}
