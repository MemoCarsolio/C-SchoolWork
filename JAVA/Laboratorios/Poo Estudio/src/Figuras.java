import java.awt.Graphics;
import java.util.ArrayList;
import java.util.ListIterator;

public class Figuras {
	
	private ArrayList<Pelota> pelotas;
	
	
	public Figuras(){
		pelotas = new ArrayList<Pelota>();
		
	}
	
	public void addPelota(Pelota p){
		pelotas.add(p);
	}
	public void removePelota(Pelota p){
		pelotas.remove(p);
	}
	
	public void paint(Graphics g){
		ListIterator fin = pelotas.listIterator();
		while(fin.hasNext()){
			Pelota aux = (Pelota) fin.next();
			aux.paint(g);
		}
		
	}

	public ArrayList<Pelota> getPelotas() {
		return pelotas;
	}

	public void setPelotas(ArrayList<Pelota> pelotas) {
		this.pelotas = pelotas;
	}
	
	
	

}
