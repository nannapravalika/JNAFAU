public class CommandLine {
    public static void main(String[] args) {
        System.out.println("Number of args: " + args.length);
        for (int i = 0; i < args.length; i++) {
            System.out.println("Arg " + (i + 1) + ": " + args[i]);
        }
    }
}
