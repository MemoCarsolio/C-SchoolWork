
public class Libro extends Articulo {

		private String autor;
		private int num_paginas;
		
		public Libro(){
			super();
			autor = "nadie";
			num_paginas = 0;
		
			
		}
		
		public Libro(String x, int y, String c, String t, int a, boolean dis){
			super(c, t, a, dis);
			
			autor  = x;
			num_paginas = y;
		}
		
		
		public String getAutor(){
			return autor;
		}
		public void setAutor(String x){
			autor = x;
		}
		public int getNumPaginas(){
			return num_paginas;
		}
		
		public String toString(){
			String tostrx, disto;
			
			if (disponible){
				disto = "si";
			}
			else{
				disto = "no";
			}
			
			
			tostrx = "libro: " + titulo + "\nautor:" + autor + "\nnumero de paginas: " 
			+ num_paginas +"\naño: "+ anio + "\ncodigo: " + codigo + "\ndisponible: " + disto;
			
			
			
			return tostrx;	
		
		}
		
}
	