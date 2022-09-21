import java.awt.*;  
import javax.swing.JFrame;  
public class smily extends Canvas{  
      
    public void paint(Graphics g) {  
        // g.drawOval(80, 70, 150, 150);
 
        // // Ovals for eyes
        // // with black color filled
        // g.setColor(Color.BLACK);
        // g.fillOval(120, 120, 15, 15);
        // g.fillOval(170, 120, 15, 15);
 
        // // Arc for the smile
        // g.drawArc(130, 180, 50, 20, 180, 180);


        // draw the face
      g.setColor(Color.YELLOW);
      g.fillOval(10, 10, 200, 200);
      
      // draw the eyes
      g.setColor(Color.BLACK);
      g.fillOval(55, 65, 30, 30);
      g.fillOval(135, 65, 30, 30);
      
      // draw the mouth
      g.fillOval(50, 110, 120, 60);
      
      // "touch up" the mouth into a smile
      g.setColor(Color.YELLOW);
      g.fillRect(50, 110, 120, 30);
      g.fillOval(50, 120, 120, 40);
          
    }  
        public static void main(String[] args) {  
      smily m=new smily();  
        JFrame f=new JFrame();  
        f.add(m);  
        f.setSize(400,400);  
        //f.setLayout(null);  
        f.setVisible(true); 
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    }  
  
}