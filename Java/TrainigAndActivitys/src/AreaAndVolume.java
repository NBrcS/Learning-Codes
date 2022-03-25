import java.text.DecimalFormat;
import static java.lang.Math.pow;

public class AreaAndVolume extends Main{

    static double PI = 3.14159265;

    static double Area(double Radius){
        return PI * pow(Radius, 2);
    }
    static double Volume(double Radius){
        return  (4 * (PI * pow(Radius, 3)))/3;
    }

    public static void AreAndVolumeFunction(){
        double R;
        double Answer;

        DecimalFormat Formatted = new DecimalFormat("#.##");

        System.out.print("Type it the Radius: ");
        R = scanner.nextDouble();

        Answer = Double.valueOf(Formatted.format(Area(R)));
        System.out.println("Area of circle with Radius = " + R + " : " + Answer);

        Answer = Double.valueOf(Formatted.format(Volume(R)));
        System.out.println("Volume of ball with radius = " + R + " : " + Answer);
    };
}
