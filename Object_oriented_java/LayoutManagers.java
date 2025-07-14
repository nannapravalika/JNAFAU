import java.awt.*;
import javax.swing.*;

public class LayoutManagers {
    public static void main(String[] args) {
        JFrame f = new JFrame("Layout Example");
        f.setLayout(new FlowLayout());
        f.add(new JButton("Button 1"));
        f.add(new JButton("Button 2"));
        f.add(new JButton("Button 3"));
        f.setSize(300, 200);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
