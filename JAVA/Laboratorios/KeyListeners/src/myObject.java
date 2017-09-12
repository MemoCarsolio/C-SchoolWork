import java.awt.Color;
import java.awt.Graphics;
public class myObject {
	
		private int x,y,size;
		private Color colo;

		
		public myObject(){
			x = 0;
			y = 0;
			size = 0;
			colo = Color.cyan; 
			
		}
			
		
		public myObject(int x, int y, int size, Color colo){
			
			this.x = x;
			this.y = y;
			this.size = size;
			this.colo = colo;
			
			
		}
			
		public void paint(Graphics g){
			g.setColor(colo);
			g.fillOval(x,y,size,size);
		}
		
			
	
		
	}
	
	
	

