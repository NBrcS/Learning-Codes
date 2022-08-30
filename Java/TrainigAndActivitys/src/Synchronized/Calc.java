package Synchronized;

public class Calc {
    int sum;

    public synchronized int makeSum(int[] nums){
        sum = 0;

        for(int number : nums){
            sum += number;

            System.out.println("Executing: " + Thread.currentThread().getName() + "" +
                    " => " + number + " + " + sum);

            try {
                Thread.sleep(200);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
        return 0;
    }
}
