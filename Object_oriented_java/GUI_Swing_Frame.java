import javax.swing.*;

public class GUI_Swing_Frame {
    public static void main(String[] args) {
        JFrame f = new JFrame("Swing Frame Example");
        JButton b = new JButton("Click");
        b.setBounds(100, 100, 100, 40);
        f.add(b);
        f.setSize(300, 200);
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
