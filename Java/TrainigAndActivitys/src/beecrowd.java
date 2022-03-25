import java.util.Arrays;

public class beecrowd extends Main{

    static public void bee1041(){
        double x, y;

        System.out.printf("Type it the point coords(X, Y): ");
        x = scanner.nextDouble();
        y = scanner.nextDouble();

        System.out.printf("Your position in cartesian plan: ");
        if(x > 0){
            if(y > 0) System.out.println("Q1");
            else if(y < 0) System.out.println("Q4");
            else System.out.println("Axle X");
        }
        else if(x < 0){
            if(y > 0) System.out.println("Q2");
            else if(y < 0) System.out.println("Q3");
            else System.out.println("Axle X");
        }
        else{
            if(y == 0) System.out.println("Origin");
            else System.out.println("Axle Y");
        }
    }

    static public void bee1042(){
        int[] integers = new int[3];

        for(int i = 0; i < 3; i++){
            System.out.printf("Type it the [ " + i + " ] Number: ");
            integers[i] = scanner.nextInt();
        }
        Arrays.sort(integers);

        for(int i = 0; i < 3; i++) System.out.println(integers[i]);
    }

    static public void bee1043(){
        double[] var = new double[3];
        double Larger = 0;
        int LargerLocation = 0;
        boolean triangle;

        for(int i = 0; i < 3; i++){
            var[i] = scanner.nextDouble();

            if(var[i] > Larger){
                Larger = var[i];
                LargerLocation = i;
            }
        }

        for(int i = 0; i < 3; i++){
            if(i == LargerLocation){
                double soma = 0;

                for(int j = 0; j < 3; j++){
                    if(j != LargerLocation) soma = soma + var[i];
                }

                if(soma >= var[LargerLocation]) triangle = true;
            }
        }


    }


}
