/**
 * Created by iMigue on 03/04/2017.
 */
import javax.swing.JFrame;

public class Main {

    public static void main (String[] Args)
    {
        MiVentana ventana = new MiVentana();
        ventana.setSize(600, 600);
        ventana.setVisible(true);
        ventana.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

}