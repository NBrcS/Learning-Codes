package OwnStack;

import java.util.Scanner;
import java.util.Stack;

public class main{
    final static String OPEN = "([{";
    final static String CLOSE = ")]}";

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Type here your expression: ");
        String str = scanner.nextLine();

        System.out.println("Result: " + verifyExpression(str));
    }

    public static boolean verifyExpression(String expression){
        char symbol, top;
        Stack<Character> itens = new Stack<>();

        for(int i = 0; i < expression.length(); i++){
            symbol = expression.charAt(i);

            if(OPEN.indexOf(symbol) > -1){
               itens.push(symbol);
            }
            else if(CLOSE.indexOf(symbol) > -1){
                if(!itens.isEmpty()){
                    top = itens.pop();

                    if(OPEN.indexOf(top) != CLOSE.indexOf(symbol)){
                        return false;
                    }
                }
                else return false;
            }
        }

        return true;
    }

}
