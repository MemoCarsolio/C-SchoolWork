import java.awt.Color;
import java.awt.Graphics;
import java.util.Random;
public class Pelota {
	private int x,y,radio,vel_x,vel_y;
	private Color kolo;
	
	Random randy = new Random(System.currentTimeMillis());
	
	public Pelota(){
		x  = 0;
		y = 0;
		radio = 10;
		kolo = Color.BLACK;
		
		vel_x = 10;
		vel_y = 10;
	}
	
	public Pelota(int x, int y, int radio,int vx, int vy){
		this.x  = x;
		this.y = y;
		this.radio = radio;
		
		int kol;
		kol = randy.nextInt(4);
		
		switch(kol){
		case 0:
			kolo = Color.red;
			break;
		case 1:
			kolo = Color.BLUE;
			break;
		case 2:
			kolo = Color.YELLOW;
			break;
		case 3:
			kolo = Color.BLACK;
			break;
		case 4:
			kolo = Color.GREEN;
			break;
		}
	
		vel_x = vx;
		vel_y = vy;
		
		
		
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

	public int getRadio() {
		return radio;
	}

	public void setRadio(int radio) {
		this.radio = radio;
	}

	public Color getKolo() {
		return kolo;
	}

	public void setKolo(Color kolo) {
		this.kolo = kolo;
	}

	public Random getRandy() {
		return randy;
	}

	public void setRandy(Random randy) {
		this.randy = randy;
	}
	
	public void paint(Graphics g){
		g.setColor(kolo);
		g.fillOval(x, y, radio, radio);
		
	}

	public int getVel_x() {
		return vel_x;
	}

	public void setVel_x(int vel_x) {
		this.vel_x = vel_x;
	}

	public int getVel_y() {
		return vel_y;
	}

	public void setVel_y(int vel_y) {
		this.vel_y = vel_y;
	}
	
	
	
	

}
