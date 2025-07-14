import java.awt.*;
import java.awt.event.*;

public class GUI_AWT_Button {
    public static void main(String[] args) {
        Frame f = new Frame("AWT Button Example");
        Button b = new Button("Click Me");
        b.setBounds(100, 100, 80, 30);
        b.addActionListener(e -> System.out.println("Button clicked"));
        f.add(b);
        f.setSize(300, 200);
        f.setLayout(null);
        f.setVisible(true);
    }
}
