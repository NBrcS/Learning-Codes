public class Calculator {
    public static void main(String[] args){
        float x = Float.parseFloat(args[1]);
        float y = Float.parseFloat(args[2]);

        if(args[0].equals("sum")) { sum(x, y); }
        else if(args[0].equals("sub")) { sub(x, y); }
        else if(args[0].equals("prod")) { prod(x, y); }
        else if(args[0].equals("quoc")) { quoc(x, y); }


    }
    static void sum(float a, float b){
        System.out.println(a + b);
    }
    static void sub(float a, float b){
        System.out.println(a - b);
    }
    static void prod(float a, float b){
        System.out.println(a * b);
    }
    static void quoc(float a, float b){
        System.out.println(a / b);
    }
}
