import java.awt.*;
import java.awt.event.*;

public class EventHandling {
    public static void main(String[] args) {
        Frame f = new Frame("Event Example");
        Button b = new Button("Click Here");
        b.setBounds(100, 100, 80, 30);
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Button clicked");
            }
        });
        f.add(b);
        f.setSize(300, 200);
        f.setLayout(null);
        f.setVisible(true);
    }
}
