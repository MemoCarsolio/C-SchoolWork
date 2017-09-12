import java.awt.Color;
import java.awt.Graphics;

public class Circle extends Figure{
	

	
	public Circle(){
		super();
		
	}
	public Circle(int x, int y, int size, Color colo){
		super(x,y,size,colo);
		
		
	}
		
	public void paint(Graphics g){
		g.setColor(colo);
		g.fillOval(x, y, size, size);
	}
	
		
	
	
	
}
