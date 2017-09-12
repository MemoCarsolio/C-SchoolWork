import java.awt.Canvas;
import java.awt.Color;
import java.awt.Graphics;

public class myCanvas extends Canvas {
	private static final long serialVersionUID = 1L;
	private String text;
	private int state;
	private Circle myCircle;
	
	public myCanvas(){
		super();
		text="";
		state=0;
		myCircle=new Circle(20,20,200,new Color(255,0,0));
	}

	
	public void paint(Graphics g){
		
		if(state==1){
			myCircle.paint(g);
		}
		
		if(state==2){
			g.drawLine(0, 0, 200, 200);
		}
		
		if(state==3){
			g.drawString(text,200,200);
		}
		
		
	}


	public String getText() {
		return text;
	}


	public void setText(String text) {
		this.text = text;
	}


	public int getState() {
		return state;
	}


	public void setState(int state) {
		this.state = state;
	}


	public Circle getMyCircle() {
		return myCircle;
	}


	public void setMyCircle(Circle myCircle) {
		this.myCircle = myCircle;
	}


	

}