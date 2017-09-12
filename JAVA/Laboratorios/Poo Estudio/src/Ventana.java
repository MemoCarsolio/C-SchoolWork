import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Ventana extends JFrame{

	public static final long serialVersionUID = 1L;
	private ElCanvas canv = new ElCanvas();
	
	private JButton b1;
	
	public Ventana(){
		super();
		setLayout(new BorderLayout());
		
		
		
        this.add(canv);
		
		
		

		
		
	}
	
	

	

}
