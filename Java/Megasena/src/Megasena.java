import java.util.Random;
import java.util.Scanner;

public class Megasena {
    public static void main(String[] args) {
        int RandomNumber;
        Random Generated = new Random();

        for(int i = 0; i < 6; i++) {
            RandomNumber = Generated.nextInt(60);
            System.out.println(RandomNumber);
        }
    }
}
