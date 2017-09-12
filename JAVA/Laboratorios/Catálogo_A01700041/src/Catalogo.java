
public class Catalogo {
	protected int indice;
	protected Articulo articulos[];
	
	
	
	public Catalogo(){
		int i;
		indice = 0;
		articulos = new Articulo[50];
		
		for(i = 0; i< 50 ; i++){
			articulos[i] = null;
		}
		
	}
	
	public Catalogo(int in, Articulo arts[]){ 
		indice = in;
		articulos = arts;	
	}
	
	public int getIndice(){
		return indice;
	}
	public Articulo[] getArticulos(){
		return articulos;
	}
	public void setArticulos(Articulo[] articulos){
		this.articulos = articulos;
	}
	public Articulo getArticulo(int x){
		return articulos[x];
	}
	
	public void agregarArticulos(Articulo art){
		
		if(indice < 50){
			articulos[indice] = art;
			indice++;
		}
		else{
			System.out.println("El catálogo está lleno");
		
		} 
		
	}
	
	public void quitarArticulo(int x){
				
					while(x <= indice){
						articulos[x - 1] = articulos[x];
						articulos[x - 1].setCodigo(x-1);;
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
