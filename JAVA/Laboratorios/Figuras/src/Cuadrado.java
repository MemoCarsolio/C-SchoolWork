import java.awt.*;

/**
 * Created by iMigue on 03/04/2017.
 */
public class Cuadrado extends Figura {

    public Cuadrado()
    {
        super();
    }

    public Cuadrado(int x1, int y1, int tamanio)
    {
        super(x1, y1, tamanio);
    }

    @Override
    public void paint(Graphics g) {
        g.setColor(this.color);
        g.fillRect(this.x, this.y, this.tamanio, this.tamanio);
    }
}
