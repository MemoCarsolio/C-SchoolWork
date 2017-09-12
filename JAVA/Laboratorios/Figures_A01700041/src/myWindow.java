
import javax.swing.JFrame;

public class myWindow extends JFrame {

    public static final long serialVersionUID = 1L;
    private myCanvas canv = new myCanvas();

    public myWindow()
    {
        super();
        this.add(canv);
    }
}

