package Lista06.Ex03;

public class Gerente extends Funcionario {
    private int senha;
    private int numFuncionariosGerenciados;

    public boolean autentica(int senha) {
        return true;
    }
    public double getBonitficacao() {
        return 0.0;
    }
}
