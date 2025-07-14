import java.net.*;
import java.io.*;

public class MultipleClients {
    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(8888);
        System.out.println("Server is running...");
        while (true) {
            Socket s = ss.accept();
            new Thread(() -> {
                try {
                    DataInputStream dis = new DataInputStream(s.getInputStream());
                    System.out.println("Client: " + dis.readUTF());
                    dis.close();
                } catch (Exception e) {
                    System.out.println("Error: " + e);
                }
            }).start();
        }
    }
}
