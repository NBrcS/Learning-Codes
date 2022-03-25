import java.util.Arrays;
import java.util.Scanner;

public class StringTreatment {

    public static void main(String[] args){
        String str, name;
        User user1 = new User();
        User user2 = new User("flavio", "andrade");
        User user3 = new User();

        Scanner Scan = new Scanner(System.in);
        
        System.out.println("Type it here any sentence: ");
        str = Scan.nextLine();

        System.out.println("The sentence: " + str);
        System.out.println("How many characters: " + str.length());
        System.out.println("Without spaces: " + str.trim());
        System.out.println("First position of \"a\": " + str.indexOf('a'));
        System.out.println("With LowerCase: " + str.toLowerCase());
        System.out.println("With UpperCase: " + str.toUpperCase());

        System.out.println("Type it here your first name: ");
        name = Scan.nextLine();
        user1.set_FirstName(name);

        System.out.println("Now, type it here your last name: ");
        name = Scan.nextLine();
        user1.set_LastName(name);

        user1.set_logged(true);

        System.out.println("1 - Full name: " + user1.get_FullName());
        System.out.println("1 - Are logged? " + user1.get_Logged());

        System.out.println("2 - Full name: " + user2.get_FullName());
        System.out.println("2 - Are logged? " + user2.get_Logged());

        System.out.println("3 - Full name: " + user3.get_FullName());
        System.out.println("3 - Are logged? " + user3.get_Logged());
    }
}
