package Lista06.Ex04;

public class Empregado {
    private String nome;
    protected Float salario;

    public String getNome() {
        return nome;
    }

    public float getSalario() {
        return salario;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }
    public String salarioToString(float salario) {
        return Float.toString(salario);
    }

    public String toString() {
        return String.format("Empregado: [nome='%s', salario='%f']",nome, salario);
    }

    public Empregado(String nome, Float salario) {
        this.nome = nome;
        this.salario = salario;
    }
}
