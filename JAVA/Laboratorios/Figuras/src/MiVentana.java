import javax.swing.*;
import javax.swing.JFrame;

/**
 * Created by iMigue on 03/04/2017.
 */
public class MiVentana extends JFrame {

    public static final long serialVersionUID = 1L;
    private MiCanvas miCanvas = new MiCanvas();

    public MiVentana()
    {
        super();
        this.add(miCanvas);
    }

}
