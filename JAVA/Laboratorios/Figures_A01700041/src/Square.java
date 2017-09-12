import java.awt.Color;
import java.awt.Graphics;

public class Square extends Figure {

	
	public Square(){
		super();
		
	}
	public Square(int x, int y, int size, Color colo){
		super(x,y,size, colo);
		
	}
	
	
	public void paint(Graphics g) {
        g.setColor(this.colo);
        g.fillRect(this.x, this.y, this.size, this.size);
    }
	
	
	
	
}
