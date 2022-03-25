import java.util.Scanner;

public class InputTest {
    public static void main(String[] args){
        String name;
        int Age;

        Scanner Scan = new Scanner(System.in);

        System.out.println("Type it here your name: ");
        name = Scan.nextLine();

        System.out.println("Type it here your age: ");
        Age = Scan.nextInt();

        System.out.println("Name: " + name + "\nAge: " + Age);
    }
}
