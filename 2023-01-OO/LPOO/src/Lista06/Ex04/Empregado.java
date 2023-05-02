package Lista06.Ex04;

public class Empregado {
    private String nome;
    protected float salario;

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
}
