package Lista06.Ex04;

public class Gerente extends Empregado {
    private String departamento;

    public String toString() {
        return String.format("Gerente: [nome='%s', salario='%f, departamento: %s']",nome, salario, departamento);
    }

    public Gerente (String nome, Float salario, String departamento) {
        this.nome = nome;
        this.salario = salario;
        this.departamento = departamento;
    }
}
