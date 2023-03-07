import java.util.Scanner;

public class KmToMile {

    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        double oneMile = 1.60934;

        System.out.println("Conversor de Kms para Milhas: \n");
        System.out.println("Digite um valor em Km para calcular:  ");

        double kms = sc.nextDouble();
        double kmToMile = kms * oneMile;  

        System.out.println("Valor em milhas: " + kmToMile);      
    }
}