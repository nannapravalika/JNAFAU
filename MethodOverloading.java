public class MethodOverloading {
    void show(int a) {
        System.out.println("Integer: " + a);
    }

    void show(String b) {
        System.out.println("String: " + b);
    }

    public static void main(String[] args) {
        MethodOverloading obj = new MethodOverloading();
        obj.show(10);
        obj.show("Hello");
    }
}
