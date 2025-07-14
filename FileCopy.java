import java.io.*;

public class FileCopy {
    public static void main(String[] args) throws IOException {
        FileInputStream in = new FileInputStream("source.txt");
        FileOutputStream out = new FileOutputStream("destination.txt");
        int c;
        while ((c = in.read()) != -1)
            out.write(c);
        in.close();
        out.close();
    }
}
