import java.util.ArrayList;
public class Catalogo {
	private int indice;
	private ArrayList <Articulo> articulos;
	
	
	
	public Catalogo(){
		indice = 50;
		articulos = new ArrayList<Articulo>(indice);
		
	}
	
	public Catalogo(int in, ArrayList <Articulo> arts){ 
		indice = in;
		articulos = arts;	
	}
	
	public int getIndice(){
		return indice;
	}
	public ArrayList <Articulo> getArticulos(){
		return articulos;
	}
	public void setArticulos(ArrayList <Articulo> arts){
		articulos = arts;
	}
	public Articulo getArticulo(int x){
		return articulos.get(x);
	}
	
	public void agregarArticulos(Articulo art){
		
		if(indice < 50){
			//articulos[indice] = art;
			indice++;
		}
		else{
			System.out.println("El catálogo está lleno");
		
		} 
		
	}
	
	public void quitarArticulo(int x){
				
					while(x <= indice){
						//articulos[x - 1] = articulos[x];
						//articulos[x - 1].setCodigo(x-1);;
						x++;
					
					}
					indice--;		
				
				}
		
	
	
	public boolean getTieneEspacio(){
		if (indice < 50){
			return true;
		}
		else{
			return false;
		}
	}
	
}
