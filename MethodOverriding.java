class Parent {
    void message() {
        System.out.println("This is parent");
    }
}

class Child extends Parent {
    void message() {
        System.out.println("This is child");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        Child c = new Child();
        c.message();
    }
}
