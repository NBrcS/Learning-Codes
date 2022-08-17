package Enum;

import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        WeekDays day = WeekDays.SATURDAY;
        boolean exists = true;
        int input;

        do{
            System.out.print("Type it a number for an day of week: ");
            input = scanner.nextInt();
            exists = true;

            switch (input){
                case 1:
                    day = WeekDays.SUNDAY;
                    break;

                case 2:
                    day = WeekDays.MONDAY;
                    break;

                case 3:
                    day = WeekDays.TUESDAY;
                    break;

                case 4:
                    day = WeekDays.WEDNESDAY;
                    break;

                case 5:
                    day = WeekDays.THURSDAY;
                    break;

                case 6:
                    day = WeekDays.FRIDAY;
                    break;

                case 7:
                    day = WeekDays.SATURDAY;
                    break;

                default:
                    System.out.println("This is not a week day! try again :)\n");
                    exists = false;
            }
        } while(!exists);

        System.out.println(day.toString() + " - " + day.getValue());

        System.out.println("List of days: \n");
        for(WeekDays dayV : Values.days){
            System.out.println(dayV);
        }

        System.out.println("\n\nNow, go test the calculator\n");

        int x, y;
        System.out.println("Type it two numbers:");

        System.out.print("X - ");
        x = scanner.nextInt();

        System.out.print("Y - ");
        y = scanner.nextInt();

        System.out.println();
        for(Calculator operation : Calculator.values()){
            System.out.print("x ");
            System.out.print(operation.toString());
            System.out.print(" Y = ");
            System.out.printf("%.2f\n", operation.execute(x, y));
        }
    }
}
