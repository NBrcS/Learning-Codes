package Synchronized;

public class main {
    public static void main(String[] args) {


        int[] nums = {1, 2, 3, 4, 5};
        t_thread t1 = new t_thread("Thread #1", nums);
        t_thread t2 = new t_thread("Thread #2", nums);

    }
}
