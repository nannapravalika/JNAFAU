class MyRunnable implements Runnable {
    public void run() {
        System.out.println("Thread using Runnable is running...");
    }
}

public class ThreadExtends {
    public static void main(String[] args) {
        Thread t = new Thread(new MyRunnable());
        t.start();
    }
}
