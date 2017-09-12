import java.awt.event.MouseListener;
import java.awt.Graphics;
import java.awt.Canvas;
import java.awt.Color;
import java.awt.event.MouseEvent;



public class myCanvas extends Canvas implements MouseListener {
    private static final long serialVersionUID = 1L;
    Figures list;

    public myCanvas()
    {
        super();
        list = new Figures();
        this.addMouseListener(this);
        this.repaint();
        Figure aux = new Circle(55, 55, 55, Color.BLACK);
        list.add(aux);
    }

    public void paint(Graphics g)
    {
        list.paint(g);
    }


    public void mouseClicked(MouseEvent mouseEvent) {

        if(!list.findFigures(mouseEvent.getX(), mouseEvent.getY()))
        {
            list.makeFigures(mouseEvent.getX(), mouseEvent.getY());
        }
        repaint();
    }

    public void mouseReleased(MouseEvent mouseEvent) {

    }

   
    public void mouseEntered(MouseEvent mouseEvent) {

    }
   
    public void mousePressed(MouseEvent mouseEvent) {

    }


   
    public void mouseExited(MouseEvent mouseEvent) {

    }
}
