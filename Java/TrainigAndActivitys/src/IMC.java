public class IMC extends Main{

    public static void IMC(){
        double Altura, Peso, IMC;

        System.out.printf("Digite o seu peso: ");
        Peso = scanner.nextFloat();

        System.out.printf("Digite a sua altura: ");
        Altura = scanner.nextDouble();

        IMC = Peso / (Altura*Altura);

        if(IMC < 18.5) System.out.println("Abaixo do peso!");
        else if(IMC >= 18.5 && IMC < 25) System.out.println("Peso normal!");
        else if(IMC >= 25 && IMC < 30) System.out.println("Acima do peso!");
        else System.out.println("Obesidade!");
    }
}
