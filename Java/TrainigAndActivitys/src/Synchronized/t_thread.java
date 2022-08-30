package Synchronized;

public class t_thread implements Runnable{
    private String name;
    private int[] Nums;
    private static Calc calc = new Calc();

    public t_thread(String name, int[] nums) {
        this.name = name;
        Nums = nums;

        new Thread(this, name).start();
    }

    @Override
    public void run() {

        System.out.println(this.name + "get init");

        int sum = calc.makeSum(this.Nums);

        System.out.println(this.name + " has ended");

        System.out.println(this.name + ": => " + sum);
    }
}
