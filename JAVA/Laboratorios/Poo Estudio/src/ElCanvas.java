import java.awt.Canvas;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.ListIterator;
import java.util.Random;

import javax.swing.Timer;

public class ElCanvas extends Canvas implements ActionListener, MouseListener, KeyListener{

	private static final long serialVersionUID = 1L;
	private Timer tiempo;
	private Timer spawn;
	private Figuras list;
	private Pelota pelota;
	private Random randy;
	
	public ElCanvas(){
		
		tiempo = new Timer(10,this);
		tiempo.start();
		spawn = new Timer(2000,this);		
		spawn.start();
		pelota = new Pelota();
		list = new Figuras();
		list.addPelota(pelota);
		this.repaint();
		
	}
	
	public void paint(Graphics g){
		
		list.paint(g);
	}
	
	
	
	
	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()== spawn){
			
			list.addPelota(new Pelota ());
		}
		
		Pelota aux;
		ListIterator film = list.getPelotas().listIterator();
		
		if(e.getSource() == tiempo){
			while(film.hasNext()){
				aux = (Pelota) film.next();
				aux.setY(aux.getY() + 10);
				if(aux.getY() >= 400){
					aux.setY(0);
				}
			}
		}
		repaint();
		
	}

	@Override
	public void keyTyped(KeyEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void keyPressed(KeyEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void keyReleased(KeyEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseClicked(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mousePressed(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseReleased(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseEntered(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseExited(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}
	
	
	

}
