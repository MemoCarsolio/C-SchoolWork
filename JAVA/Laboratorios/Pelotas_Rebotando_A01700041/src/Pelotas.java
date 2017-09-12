import java.util.ArrayList;
import java.util.ListIterator;
import java.awt.Graphics;

public class Pelotas {

	private ArrayList<Pelota> pelotitas;
	
	public Pelotas(){
		pelotitas = new ArrayList<Pelota>();
		
	
		
		
	}
	
	public void addPelotas(Pelota pel){
		
		pelotitas.add(pel);
	
		
	}
	public void removePelotas(Pelota pel){
		
		pelotitas.remove(pel);
		
		
	}
	
	public void paint(Graphics g){
		ListIterator finder=pelotitas.listIterator();
		while(finder.hasNext()){
			Pelota aux=(Pelota)finder.next();
			
			aux.paint(g);
		}
	}

	public ArrayList<Pelota> getPelotitas() {
		return pelotitas;
	}

	public void setPelotitas(ArrayList<Pelota> pelotitas) {
		this.pelotitas = pelotitas;
	}
	
	
	
}
