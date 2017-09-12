
import java.util.ArrayList;
import java.util.ListIterator;
import java.util.Random;
import java.awt.Color;
import java.awt.Graphics;
public class Figures {
	
	ArrayList<Figure> fig_list = new ArrayList<Figure>();
    Figure aux;
    Random randy = new Random();

    

    public void makeFigures(int x, int y)
    {
        ListIterator <Figure> myfigures = fig_list.listIterator();
        switch(randy.nextInt(2))
        {
            case 0:
                aux = new Circle(x-70, y-70, randy.nextInt(200), Color.BLACK);
                myfigures.add(aux);
                break;
            case 1:
                aux = new Square(x-70, y-70, randy.nextInt(200), Color.red);
                myfigures.add(aux);
                break;
               
        }
    }

    public void paint(Graphics g)
    {
    	ListIterator <Figure> myfigures = fig_list.listIterator();
        while(myfigures.hasNext())
        {
            aux= myfigures.next();
            if(aux instanceof Circle)
            {
                Circle c = (Circle) aux;
                c.paint(g);
            }
            if(aux instanceof Square)
            {
                Square q = (Square) aux;
                q.paint(g);
            }
        }
    }
    
    public boolean findFigures(int x, int y)
    {
        ListIterator<Figure> myfigures = fig_list.listIterator();    
        while(myfigures.hasNext())
        	
        {
            aux = myfigures.next();
            if((x > aux.getX() && x < aux.getX()+aux.getSize())
            	&&(y > aux.getY() && y < aux.getY()+aux.getSize())){
            	
                aux.changeColor();
                return true;
            }
        }
        return false;
    }

    public void add(Figure aux)
    {
        fig_list.add(aux);
    }
}
