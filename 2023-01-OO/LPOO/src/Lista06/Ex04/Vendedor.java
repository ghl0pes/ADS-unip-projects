package Lista06.Ex04;

public class Vendedor extends Empregado {
    private Float percentualComissao;

    public String toString() {
        return String.format("Vendedor: [nome='%s', salario='%f, percentualComissao: %f']",nome, salario, percentualComissao);
    }

    public Float calcularSalario () {
        return salario + percentualComissao;
    }

    public Vendedor (String nome, Float salario, Float percentualComissao) {
        this.nome = nome;
        this.salario = salario;
        this.percentualComissao = percentualComissao;
    }
}
