package varargs;

public class main {
    public static void main(String[] args) {

        System.out.println(sum(1,5,8,9,6,4,74,52,1,5,9,8945,62,145,6));

    }

    // VarArgs should be used only as the last parameter on the method params
    static double sum(double... args){
        double sum = 0;

        for(int i = 0; i < args.length; i++){
            sum += args[i];
        }

        return sum;
    }
}
