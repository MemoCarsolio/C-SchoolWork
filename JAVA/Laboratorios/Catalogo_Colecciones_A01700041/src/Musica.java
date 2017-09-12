
public class Musica extends Articulo {
	
	private String interprete;
	private String formato;
	
	public Musica(){
		super();
		interprete = "MC";
		formato = "mp3";	
		
	}
	public Musica(String i, String f,  String c, String t, int a, boolean dis){
		super(c, t, a, dis);
		interprete = i;
		formato = f;	
		
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
