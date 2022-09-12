package OwnQueue;

public class main {
    public static void main(String[] args) {
        OwnQueue<Integer> queue = new OwnQueue<Integer>(10);

        for(int i = 0; i < 10; i++)
            queue.add(i);
        System.out.println(queue);

        queue.remove();
        queue.remove();
        queue.remove();

        System.out.println(queue);
        System.out.println(queue.look());
    }
}
