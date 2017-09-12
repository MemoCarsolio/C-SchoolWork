import java.awt.*;
import java.util.ArrayList;
import java.util.ListIterator;
import java.util.Random;

/**
 * Created by iMigue on 03/04/2017.
 */
public class Figuras {

    ArrayList<Figura> figuritas = new ArrayList<Figura>();
    Figura aux;
    Random aleatorio = new Random();

    public boolean buscarFiguras(int x, int y)
    {
        ListIterator<Figura> misFiguras = figuritas.listIterator();
        while(misFiguras.hasNext())
        {
            aux = misFiguras.next();
            if((x > aux.getX1() && x < aux.getX1()+aux.getTamanio())&&(y > aux.getY1() && y < aux.getY1()+aux.getTamanio()))
            {
                aux.changeColor();
                return true;
            }
        }
        return false;
    }

    public void crearFiguras(int x, int y)
    {
        ListIterator <Figura> misFiguras = figuritas.listIterator();
        switch(aleatorio.nextInt(2))
        {
            case 0:
                aux = new Circulo(x-50, y-50, aleatorio.nextInt(200));
                misFiguras.add(aux);
                break;
            case 1:
                aux = new Cuadrado(x-50, y-50, aleatorio.nextInt(200));
                misFiguras.add(aux);
                break;
        }
    }

    public void paint(Graphics g)
    {
        ListIterator <Figura> misFiguras = figuritas.listIterator();
        while(misFiguras.hasNext())
        {
            aux= misFiguras.next();
            if(aux instanceof Circulo)
            {
                Circulo c = (Circulo) aux;
                c.paint(g);
            }
            if(aux instanceof Cuadrado)
            {
                Cuadrado q = (Cuadrado) aux;
                q.paint(g);
            }
        }
    }

    public void add(Figura aux)
    {
        figuritas.add(aux);
    }

}
