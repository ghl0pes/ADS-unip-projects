public  class ContaBancaria {
    private int id;
    private String numero;
    private double saldo;
    private double limite;
    private String cpf;

    public boolean sacar () {
        return true;
    }

    public boolean depositar () {
        return true;
    }

    public String imprimirExtrato () {
        return "Extrato";
    }

    public void imprimeSaldo () {
        System.out.println("Imprime saldo");
        return;
    }
}