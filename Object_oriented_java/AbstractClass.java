abstract class Shape {
    abstract void draw();
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing Circle");
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        Shape s = new Circle();
        s.draw();
    }
}
