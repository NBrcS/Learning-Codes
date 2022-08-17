package Threads;

public class MyRunnable implements Runnable{
    private String name;
    private int ms;

    public MyRunnable(String name_, int ms_){
        this.name = name_;
        this.ms = ms_;
    }

    @Override
    public void run(){
        for(int i = 1; i <= 10; i++){
            System.out.println(name + " Counting: " + i);
            try {
                Thread.sleep(this.ms);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }

        System.out.println("\nEnding execution: " + name + "\n");
    }
}
