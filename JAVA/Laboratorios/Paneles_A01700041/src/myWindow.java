import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;


public class myWindow extends JFrame implements ActionListener{
	
	private static final long serialVersionUID = 1L;
	private JButton boton1, boton2;
	private myCanvas myCanvas;
	private JPanel panel1;
	private JTextField texto;
	
	
	public myWindow(){
		super();
		setLayout(new BorderLayout());
		boton1=new JButton("Click 1");
		boton2=new JButton("Click 2");
		texto=new JTextField(10);
		panel1=new JPanel();
		myCanvas=new myCanvas();
		
		boton1.addActionListener(this);
		boton2.addActionListener(this);
		texto.addActionListener(this);
		
		panel1.add(boton1);
		panel1.add(boton2);
		
		this.add(texto, BorderLayout.NORTH);
		this.add(myCanvas, BorderLayout.CENTER);
		this.add(panel1, BorderLayout.SOUTH);
	}
	
	public void actionPerformed(ActionEvent evento){
		if(evento.getSource()==boton1){
			myCanvas.setState(1);
			myCanvas.repaint();
		}
		if(evento.getSource()==boton2){
			myCanvas.setState(2);
			myCanvas.repaint();
		}
		if(evento.getSource()==texto){
			myCanvas.setState(3);
			myCanvas.setText(texto.getText());
			myCanvas.repaint();
		}
		
	}
	
}
