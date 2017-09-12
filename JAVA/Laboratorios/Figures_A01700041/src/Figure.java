import java.awt.Color;
import java.awt.Graphics;
import java.util.Random;
public abstract class Figure {
	
	protected int x,y,size;
	protected Color colo;
	Random randy = new Random(System.currentTimeMillis());
	public Figure(){
		x= 0;
		y= 0;
		size = 0;
		colo = Color.BLACK;
		
		
		
	}
	public Figure(int x, int y, int size, Color colo){
		this.x = x;
		this.y = y;
		this.size = size;
		this.colo = colo;
		
	}
	
	public abstract void paint(Graphics g);
	
	public void changeColor()
    {
        switch(randy.nextInt(4))
        {
            case 0:
                this.setColo(Color.BLACK);
                break;
            case 1:
                this.setColo(Color.RED);
                break;
            case 2:
                this.setColo(Color.BLUE);
                break;
            case 3:
                this.setColo(Color.GREEN);
                break;
        }
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
