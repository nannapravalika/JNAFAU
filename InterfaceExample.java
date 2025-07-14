interface Drawable {
    void draw();
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("Drawing Rectangle");
    }
}

public class InterfaceExample {
    public static void main(String[] args) {
        Drawable d = new Rectangle();
        d.draw();
    }
}
