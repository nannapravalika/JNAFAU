import java.io.*;

public class FileWriting {
    public static void main(String[] args) {
        try {
            BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));
            bw.write("This is written to file.");
            bw.close();
        } catch (IOException e) {
            System.out.println("Error writing to file.");
        }
    }
}
