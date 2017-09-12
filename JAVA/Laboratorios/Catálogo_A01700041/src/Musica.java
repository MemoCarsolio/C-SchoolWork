
public class Musica extends Articulo {
	
	protected String interprete;
	protected String formato;
	
	public Musica(){
		
		interprete = "MC";
		formato = "mp3";	
		
	}
	
	
	public String getInterprete(){
		return interprete;
	}
	public String getFormato(){
		return formato;
	}
	public String toString(){
		String mustostr, disto;
	
		if (disponible){
			disto = "si";
		}
		else{
			disto = "no";
		}
		
		mustostr = "libro: " + titulo + "\ninterprete: " + interprete + "\nformato: " 
				+ formato +"\naño: "+ anio + "\ncodigo: " + codigo + "\ndisponible: " + disto;
		
		
		return mustostr;
	}
	
	
	
	
	
}
