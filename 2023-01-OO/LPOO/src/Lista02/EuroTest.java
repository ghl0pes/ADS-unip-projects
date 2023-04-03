package Lista02;

import java.util.Scanner;

public class EuroTest {
    public static void main (String args[]) {
        Scanner scan = new Scanner(System.in);
        Euro euroClass = new Euro();

        Double realQuantity = scan.nextDouble();

        Double euroQuantity = euroClass.convertRealToEuro(realQuantity);

        System.out.println("Quantidade em euros: " + euroQuantity);
    }
}
