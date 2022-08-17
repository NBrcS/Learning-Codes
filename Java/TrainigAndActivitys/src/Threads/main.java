package Threads;

public class main{
    public static void main(String[] args){
        MyRunnable thread_1 = new MyRunnable("Thread #1", 500);
        MyRunnable thread_2 = new MyRunnable("Thread #2", 1500);
        MyRunnable thread_3 = new MyRunnable("Thread #3", 1000);
        MyRunnable thread_4 = new MyRunnable("Thread #4", 2000);

        Thread t1 = new Thread(thread_1);
        Thread t2 = new Thread(thread_2);
        Thread t3 = new Thread(thread_3);
        Thread t4 = new Thread(thread_4);

        t1.start();
        t2.start();
        t3.start();
        t4.start();

        t1.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(8);
        t3.setPriority(4);
        t4.setPriority(Thread.MIN_PRIORITY);


        /*
        *
        * Another way to only continue the code
        * after end all the threads
        *
        *
        * boolean oneAlive = (
        *                       t1.isAlive() ||
        *                       t2.isAlive() ||
        *                       t3.isAlive() ||
        *                       t4.isAlive()
        *                     );
        *
        * while(oneAlive) Thread.sleep(1000);
        *
         */


        try {
            t1.join();
            t2.join();
            t3.join();
            t4.join();
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }

        System.out.println("End Program");
    }
}
