import java.io.*;

class Student implements Serializable {
    String name = "Ravi";
    int age = 20;
}

public class Serialization {
    public static void main(String[] args) throws Exception {
        ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("student.ser"));
        out.writeObject(new Student());
        out.close();
        System.out.println("Object serialized.");
    }
}
