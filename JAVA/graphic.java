import java.awt.*;  
import javax.swing.JFrame;  
public class graphic extends Canvas{  
      
    public void paint(Graphics g) {  
        g.drawString("Hello",40,40);  
        setBackground(Color.WHITE);  
        g.fillRect(130, 30,100, 80);  
        g.drawOval(30,130,50, 60);  
        setForeground(Color.RED);  
        g.fillOval(130,130,50, 60);  
        g.drawArc(30, 200, 40,50,90,60);  
        g.fillArc(30, 130, 40,50,180,40);  
          
    }  
        public static void main(String[] args) {  
      graphic m=new graphic();  
        JFrame f=new JFrame();  
        f.add(m);  
        f.setSize(400,400);  
        //f.setLayout(null);  
        f.setVisible(true); 
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    }  
  
}