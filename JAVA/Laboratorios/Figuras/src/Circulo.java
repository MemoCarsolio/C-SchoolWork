import java.awt.*;

/**
 * Created by iMigue on 03/04/2017.
 */
public class Circulo extends Figura{

    public Circulo()
    {
        super();
    }

    public Circulo(int x1, int y1, int tamanio)
    {
        super(x1, y1, tamanio);
    }

    @Override
    public void paint(Graphics g) {
        g.setColor(this.color);
        g.fillOval(this.x, this.y, this.tamanio, this.tamanio);
    }
}
