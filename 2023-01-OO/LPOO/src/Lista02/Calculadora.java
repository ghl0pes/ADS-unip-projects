package Lista02;

public class Calculadora {
    public double operacao (double num1, double num2){
        return num1 + num2;
    }

    public double operacao (int num1, double num2) {
        return num1 - num2;
    }

    public double operacao (double num1, int num2) {
        return num1 * num2;
    }

    public double operacao (int num1, int num2) {
        return num1 / num2;
    }
}
