package OwnStack;

public class main{
    public static void main(String[] args) {
        OwnStack<Integer> stack = new OwnStack<Integer>();

        for(int i = 0; i < 10; i++){
            stack.stacks(i);
        }

        System.out.println(stack);
        System.out.println(stack.tamanho());

        System.out.println(stack.top());
        stack.unstack();
        System.out.println(stack);
    }
}
