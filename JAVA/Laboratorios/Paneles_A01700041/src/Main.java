import javax.swing.JFrame;

public class Main {

	public static void main(String[] args) {
		myWindow screen= new myWindow();
		screen.setVisible(true);
		screen.setSize(400, 400);
		screen.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}

}