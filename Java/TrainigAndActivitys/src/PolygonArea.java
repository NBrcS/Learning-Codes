import java.text.DecimalFormat;
import static java.lang.Math.pow;

public class PolygonArea extends Main {

    static double PI = 3.14159;

    static double TriangleArea(double Height, double Base){
        return (Base * Height) / 2;
    }
    static double CircleArea(double Radius){
        return PI * pow(Radius, 2);
    }
    static double TrapezeArea(double B1, double b2, double Height){
        return ((B1 + b2) * Height) / 2;
    }
    static double SquareArea(double Side){
        return pow(Side, 2);
    }
    static double RectangleArea(double Side1, double Side2){
        return Side1 * Side2;
    }

    public static void PolygonArea(){
        double A, B, C;
        double Answer;

        DecimalFormat Formatted = new DecimalFormat("#.###");

        System.out.printf("Type it here the \"A\" number: ");
        A = scanner.nextDouble();
        System.out.printf("Type it here the \"B\" number: ");
        B = scanner.nextDouble();
        System.out.printf("Type it here the \"C\" number: ");
        C = scanner.nextDouble();

        Answer = Double.valueOf(Formatted.format(TriangleArea(C, A)));
        System.out.println("Area of triangle: " + Answer);

        Answer = Double.valueOf(Formatted.format(CircleArea(C)));
        System.out.println("Area or Circle: " + Answer);

        Answer = Double.valueOf(Formatted.format(TrapezeArea(A, B ,C)));
        System.out.println("Area or Trapeze: " + Answer);

        Answer = Double.valueOf(Formatted.format(SquareArea(B)));
        System.out.println("Area or Square: " + Answer);

        Answer = Double.valueOf(Formatted.format(RectangleArea(A, B)));
        System.out.println("Area or Rectangle: " + Answer);

    }
}
