import java.awt.Canvas;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.Graphics;

/**
 * Created by iMigue on 03/04/2017.
 */
public class MiCanvas extends Canvas implements MouseListener {
    private static final long serialVersionUID = 1L;
    Figuras lista;

    public MiCanvas()
    {
        super();
        lista = new Figuras();
        this.addMouseListener(this);
        this.repaint();
        Figura aux2 = new Circulo(100, 100, 100);
        lista.add(aux2);
    }

    public void paint(Graphics g)
    {
        lista.paint(g);
    }

    @Override
    public void mouseClicked(MouseEvent mouseEvent) {

        if(!lista.buscarFiguras(mouseEvent.getX(), mouseEvent.getY()))
        {
            lista.crearFiguras(mouseEvent.getX(), mouseEvent.getY());
        }
        repaint();
    }

    @Override
    public void mousePressed(MouseEvent mouseEvent) {

    }

    @Override
    public void mouseReleased(MouseEvent mouseEvent) {

    }

    @Override
    public void mouseEntered(MouseEvent mouseEvent) {

    }

    @Override
    public void mouseExited(MouseEvent mouseEvent) {

    }
}
