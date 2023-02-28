/**
 * EXERCÍCIO 1 - SLIDE 31 - 27/02/2023
 * GABRIEL LOPES - N7430269
 */

public class IntegerDemo {
    public static void main (String[] args) {
        int integerNumber = 100;
        byte byteNumber = 100;
        short shortNumber = 100;
        long longNumber = 100;

        System.out.println("Valor integerNumber: " + integerNumber);
        System.out.println("Valor byteNumber: " + byteNumber);
        System.out.println("Valor shortNumber: " + shortNumber);
        System.out.println("Valor longNumber: " + longNumber);

        integerNumber = 12345;
        shortNumber = 12345;
        longNumber = 12345;

        /**
         * Erro ao compilar a alteração do valor da variável do tipo byte.
         * Variáveis do tipo byte suportam valores de -128 até 127,
         * como 12345 é maior que 127, o compilador gera erro.
         */
        byteNumber = 12345; 
    }
}