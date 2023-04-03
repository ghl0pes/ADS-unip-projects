package Lista02;

import java.util.Scanner;

public class CalculadoraTest {
    public static void main (String args[]) {
        Scanner scan = new Scanner(System.in);
        Calculadora calculadora = new Calculadora();

        double num1 = scan.nextDouble();
        double num2 = scan.nextDouble();

        System.out.println(num1 + " + " + num2 + " = " + calculadora.operacao(num1, num2));
        System.out.println(num1 + " - " + num2 + " = " + calculadora.operacao((int)num1, num2));
        System.out.println(num1 + " * " + num2 + " = " + calculadora.operacao(num1, (int)num2));
        System.out.println(num1 + " / " + num2 + " = " + calculadora.operacao((int)num1, (int)num2));
    }
}
