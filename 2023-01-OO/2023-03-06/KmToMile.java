import java.util.Scanner;

public class KmToMile {
    private double oneMile = 1.60934;

    public static void main (String[] args) {
        KmToMile thisClass = new KmToMile();
        
        double kms = thisClass.calculateMile();
        
        System.out.println("Valor em milhas: " + kms);
    }

    public static double calculateMile () {
        KmToMile thisClass = new KmToMile();
        Scanner sc = new Scanner(System.in);

        System.out.println("Conversor de Kms para Milhas: \n");
        System.out.println("Digite um valor em Km para calcular:  ");

        double kms = sc.nextDouble();
        return kms * thisClass.oneMile;
    }
}