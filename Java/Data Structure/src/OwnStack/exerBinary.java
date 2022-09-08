package OwnStack;

import java.util.Scanner;
import java.util.Stack;

public class exerBinary {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string_binary_result = "";

        System.out.print("type it here the decimal number to convert as an binary number: ");
        int number = scanner.nextInt();

        System.out.println("Result: " + convertToBin(number));
    }

    public static String convertToBin(int n){
        Integer rest = 0;
        StringBuilder out = new StringBuilder();
        Stack<Integer> binary = new Stack<>();

        while(n != 0){
            rest = n % 2;
            binary.push(rest);

            n = n / 2;
        }

        while(!binary.isEmpty()){
            out.append(binary.pop());
        }


        return out.toString();
    }
}
