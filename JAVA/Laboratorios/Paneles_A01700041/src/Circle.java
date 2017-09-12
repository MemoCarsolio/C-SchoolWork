import java.awt.Color;
import java.awt.Graphics;
public class Circle {
	private int x,y,size;
	private Color colo;
	
	public Circle(){
		x=0;
		y=0;
		colo=Color.RED;
		size=0;
	}

	public Circle(int x, int y, int size, Color colo){
		this.x = x;
		this.y = y;
		this.size = size;
		this.colo = colo;
		
	}

	public void paint(Graphics g){
		g.setColor(colo);
		g.fillOval(x, y, size, size);
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int getSize() {
		return size;
	}

	public void setSize(int size) {
		this.size = size;
	}

	public Color getColo() {
		return colo;
	}

	public void setColo(Color colo) {
		this.colo = colo;
	}
	
}