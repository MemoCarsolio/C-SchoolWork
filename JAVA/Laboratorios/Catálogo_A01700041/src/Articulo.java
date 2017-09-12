
public class Articulo {
	protected String codigo;
	protected String titulo;
	protected int anio;
	protected boolean disponible;
	
	public Articulo(){
		
		codigo = "";
		titulo = "";
		anio = 0;
		disponible = true;
		
	}
	
	public Articulo(String x, String y, int a, boolean dis){
		
		codigo = x;
		titulo = y;
		anio = a;
		disponible = dis;

	}
	
	// En el UML solo hay getters pero tambien pondre setters
	
	public String getCodigo(){
		
		return codigo;
		
	}
	
	public void setCodigo(int in){
		
		if(in < 10){
			codigo = "0H7FX0" + in;	
		}
		else{
			codigo = "0H7FX" + in;
		}
		
	}
	
	public String getTitulo(){
		return titulo;
	}
	public void setTitulo(String titu){
		titulo = titu;
	}
	
	public int getAnio(){
		return anio;
	}
	
	public void setAnio(int an){
		anio = an;
	}
	public boolean isDisponible(){
		return disponible;
	}
	public void setDisponible(boolean disp){
		disponible = disp;
	}
	
	public boolean equals(Object object){
		if(this == object){
			return true;
		}
		if(object == null){
			return false;
		}
		if(this.getClass() != object.getClass()){
			return false;
		}
		Articulo art= (Articulo)object;
		return this.titulo.equals(art.titulo);
	}
	
	public String toString(){
		String toartx, disto;
		
		if (disponible){
			disto = "si";
		}
		else{
			disto = "no";
		}
		
		toartx = "Articulo: " + titulo +"\naño: "
		+ anio + "\ncodigo: " + codigo + "\ndisponible: " + disto;
		
		
		
		return toartx;	
	
	}
	
	

}
