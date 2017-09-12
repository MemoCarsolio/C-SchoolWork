import javax.swing.JFrame;

public class Main {

    public static void main (String[] Args)
    {
        myWindow win = new myWindow();
        win.setSize(1000, 1000);
        win.setVisible(true);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

}