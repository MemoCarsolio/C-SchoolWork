
import javax.swing.JFrame;

public class MiVentana extends JFrame {

    public static final long serialVersionUID = 1L;
    private MiCanvas canv = new MiCanvas();
    

    public MiVentana()
    {
        super();
        this.add(canv);
    }
}