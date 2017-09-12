import java.awt.*;
import java.util.Random;

/**
 * Created by iMigue on 03/04/2017.
 */
public abstract class Figura {

    protected int x, y, tamanio;
    protected Color color;
    Random aleatorio = new Random(System.currentTimeMillis());

    public Figura()
    {
        x=0;
        y=0;
        tamanio=0;
        color = Color.red;
    }

    public Figura(int x, int y, int tamanio)
    {
        this.x = x;
        this.y = y;
        this.tamanio = tamanio;
        this.changeColor();
    }

    public int getX1() {
        return x;
    }

    public int getY1() {
        return y;
    }

    public int getX2() {
        return x+tamanio;
    }

    public int getY2() {
        return y+tamanio;
    }

    public int getTamanio()
    {
        return this.tamanio;
    }

    public void setColor(Color color)
    {
        this.color = color;
    }

    public void changeColor()
    {
        switch(aleatorio.nextInt(4))
        {
            case 0:
                this.setColor(Color.PINK);
                break;
            case 1:
                this.setColor(Color.RED);
                break;
            case 2:
                this.setColor(Color.BLUE);
                break;
            case 3:
                this.setColor(Color.GREEN);
                break;
        }

    }

    public abstract void paint(Graphics g);
}
