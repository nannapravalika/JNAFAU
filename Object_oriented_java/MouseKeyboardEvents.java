import java.awt.*;
import java.awt.event.*;

public class MouseKeyboardEvents extends Frame implements MouseListener, KeyListener {
    public MouseKeyboardEvents() {
        addMouseListener(this);
        addKeyListener(this);
        setSize(300, 200);
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        System.out.println("Mouse Clicked");
    }

    public void keyPressed(KeyEvent e) {
        System.out.println("Key Pressed: " + e.getKeyChar());
    }

    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void keyReleased(KeyEvent e) {}
    public void keyTyped(KeyEvent e) {}

    public static void main(String[] args) {
        new MouseKeyboardEvents();
    }
}
